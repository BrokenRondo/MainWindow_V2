#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mrichtextedit.h"
#include "ui_mrichtextedit.h"
#include <QSplitter>
#include <QDialog>
#include <QFileSystemModel>
#include <QSplitter>
#include <QString>
#include <QListWidget>
#include <QListWidgetItem>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QTimer>
#include <QTime>
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <QTextCodec>
#include "AddPatient.h"
#define UPLOAD_IP "192.168.43.82"
#define UPLOAD_PORT 10020
#define CASE_IP "192.168.43.80"
#define CASE_PORT 10060
MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	//————时间设置—————
	QTimer *timer;
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(qtimeSlot()));
	timer->start(1000);
	//————标签页的设置————
	//文本只读
	ui->textEdit->setReadOnly(true);
	ui->textEdit_2->setReadOnly(true);
	ui->textEdit_3->setReadOnly(true);
	//设置默认标签页为历史病历标签页
	ui->tabWidget->setCurrentIndex(0);
	//设置三个初始标签页不可关闭
	for(int i=0;i<3;i++)
		ui->tabWidget->tabBar()->setTabButton(i, QTabBar::RightSide, NULL);
	//处理新建标签页的关闭功能
	connect(ui->tabWidget, SIGNAL(tabCloseRequested(int)),this,SLOT(remove_tab()),Qt::UniqueConnection);
	//————右侧患者列表初始化————
	//创建右部患者树形列表
	on_actionNewTree_triggered();
	//右键树的顶层节点出现新建菜单用于新建病历
	connect(ui->treeWidget, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(OnTreeContextMenu(const QPoint&)), Qt::UniqueConnection);
	//点击树节点时进行相应处理：显示个人信息，显示病历
	connect(this->ui->treeWidget, SIGNAL(itemClicked(QTreeWidgetItem*, int)), this, SLOT(showcase()), Qt::UniqueConnection); 
	//当前医生信息显示
	ui->label->setText(QStringLiteral("当前医生：")+doctor_data.name);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//————点击编辑发生的事件，到底要不要呢—————
void MainWindow::on_actionnew_record_triggered()
{
       //ui->textEdit->setReadOnly(false);
}
//————点击新建发生的事件————
void MainWindow::on_actionNew_triggered()
{
	//先观察是否已具有新建病历标签页，有则提示保存或删除
	int count = ui->tabWidget->count();
	if (count > 3)
	{
		QString qtitle = str_to_qstr("提示");
		QString qmess = str_to_qstr("当前已经存在新建的病历，请先保存或删除!");
		QMessageBox::warning(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
		ui->tabWidget->setCurrentIndex(4);
		return;
	}
	//获取当前被点击结点
	QTreeWidgetItem *curitem = ui->treeWidget->currentItem();
	//获取病历创建的患者对象名称
	//判断当前节点是否是顶层节点，是则取顶层节点名称，不是则取其父亲节点的名称
	QString patient_name = "";
	if(curitem->parent()==NULL)
		patient_name= curitem->text(0);
	else
		patient_name = curitem->parent()->text(0);
	//创建新的标签页（富文本编辑框）
	QDialog *dialog = new QDialog(0);
	MRichTextEdit *rte = new MRichTextEdit(dialog);
	//后缀 
	QString suffix = str_to_qstr("的新病历");
	ui->tabWidget->addTab(rte, patient_name+suffix);
	//设置新建病历保存时的病历
	this->newcase_savepath = ".\\patients\\" + patient_name + "\\newcase.txt";
	//自动跳转到新建标签页
	ui->tabWidget->setCurrentIndex(3);
}
//————点击保存发生的事件————
void MainWindow::on_actionSave_triggered()
{
	//获取当前标签页的序号
	//如果不是3，则无视操作
	int curnum = ui->tabWidget->currentIndex();
	if (curnum != 3)
		return;
	//如果是3（第四个标签页也就是新建病历）则保存
	QWidget * r = ui->tabWidget->currentWidget();
	//强制转换类型为富文本编辑框
	MRichTextEdit *text = (MRichTextEdit*)r;
	//获取富文本的内容
	string casedata = qstr_to_str(text->toPlainText());
	//string casedata= qstr_to_str(text->toHtml());
	//获取当前时间
	unsigned int nowtime = time(NULL);//gettime();
	//追加输出病历信息至txt文件
 	ofstream fout(qstr_to_str(this->newcase_savepath),ios::app);
	fout << casedata;
	fout.close();
	//重置保存路径
	newcase_savepath = "";
	//如果当前标签页为新建病历，则删除当前标签页
	int i = ui->tabWidget->currentIndex();
	if (i == 3)
		ui->tabWidget->removeTab(i);
	//刷新树
	flushTree();
	//将标签页转为未上传病历
	ui->tabWidget->setCurrentIndex(2);
}
//————点击上传发生的事件————
void MainWindow::on_actionUpload_triggered()
{
	//搜索未上传的新建病历，即名称为newcase的txt文件
	//遍历文件夹
	list<string> patient_list = dir(".\\patients", "\\*");
	//依据患者列表进行循环搜索文件
	list<string>::iterator i;
	for (i = patient_list.begin(); i != patient_list.end(); i++)
	{
		//获取患者文件夹下的新建病历文件数目
		if (dirnum(".\\patients\\" + *i + "\\newcase.txt") > 0)
		{
			string uploadpath = ".\\patients\\" + *i + "\\newcase.txt";
			//获取文档内容
			ifstream fin(uploadpath);
			string temp;
			string casedata="";
			while (!fin.eof())
			{
				getline(fin, temp);
				casedata += temp + "\n";
			}
			fin.close();
			//获取病人信息
			ifstream finp(".\\patients\\" + *i + "\\"+*i+".json");
			string patientdata = "";
			while (!finp.eof())
			{
				getline(finp, temp);
				patientdata += temp;
			}
			finp.close();
			Json::Value root;
			Json::Reader reader;
			if (!reader.parse(patientdata, root))
			{
				QString qtitle = str_to_qstr("提示");
				QString qmess = str_to_qstr("未能获取"+*i+"的个人信息，Json解析失败");
				QMessageBox::critical(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
			}
			//组装发送内容
			Json::Value req;
			Json::StreamWriterBuilder writer;
			std::unique_ptr<Json::StreamWriter> write(writer.newStreamWriter());
			ostringstream os;
			req["pat_id"] = root["ID"].asString();
			req["doc_id"] = "1";// qstr_to_str(doctor_data.ID);
			req["text"] = casedata;
			req["hash"] = sha256(casedata);
			req["time"] =  gettime();
			req["dep"] = "儿科";
			//req["sig"] = "1111111";
			req["hospital"] = "省立医院";
			req["sig"] = false;
			write->write(req, &os);
			write->~StreamWriter();
			string jsondata = os.str();
			ofstream of("case.txt",ios::app);
			of << jsondata << endl;;
			//连接服务器
			OS_TcpSocket* sock = new OS_TcpSocket();
			sock->SetOpt_SendTimeout(2000);
			sock->SetOpt_RecvTimeout(2000);
			sock->Open();
			OS_SockAddr ser_addr(UPLOAD_IP, UPLOAD_PORT);
			if (sock->Connect(ser_addr) < 0)//未成功连接
			{
				sock->Close();
				delete sock;
				QString qtitle = str_to_qstr("提示");
				QString qmess = str_to_qstr("无法连接服务器");
				QMessageBox::critical(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
				return;
			}
			char buf[1024];//缓冲区
			//进行上传操作
			int n = jsondata.size();
			memcpy(buf, jsondata.c_str(), jsondata.size());
			sock->Send(buf, n);//发送缓冲区前n个字节
			//进行删除原文件操作
			if (remove(uploadpath.c_str())!=0)
			{
				QString qtitle = str_to_qstr("提示");
				QString qmess =str_to_qstr(*i+"的新建病历未能成功上传");
				QMessageBox::critical(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
			}
			sock->Close();
			delete sock;
			OS_Thread::Msleep(500);
		}
	}
	QMessageBox::information(NULL, QStringLiteral("提示"), QStringLiteral("上传成功！"), QMessageBox::Yes);
	//刷新树
	flushTree();
}
//————左侧病人树形列表————
void MainWindow::on_actionNewTree_triggered()
{
	//树根节点创建
	QTreeWidgetItem *root = ui->treeWidget->headerItem();
	//树根节点名称设置
	string root_name = "患者列表";
	root->setText(0, str_to_qstr(root_name));
	//获取patients文件夹下患者名称的列表
	list<string> patient_list = dir(".\\patients", "\\*");
	//依据患者列表进行循环制造顶层节点，如“张三”
	list<string>::iterator i, j;
	int index = 0;
	for (i = patient_list.begin(); i != patient_list.end(); i++)
	{
		//创建顶层节点
		create_topitem(*i);
		//获取该顶层节点的指针
		QTreeWidgetItem* topitem = ui->treeWidget->topLevelItem(index);
		index++;
		//获取患者文件夹下的病历文件列表
		list<string> case_list = dir(".\\patients\\"+*i,"\\*.txt");
		//依据病历文件列表进行循环制造子节点，如“张三病历”
		for (j = case_list.begin(); j != case_list.end(); j++)
		{
			create_childitem(*j, topitem);
		}
	}
	//设置右键快捷菜单
	ui->treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
}
//创建名称为name的顶层节点
void MainWindow::create_topitem(string name)
{
	QString qtreename = QString::fromLocal8Bit(name.c_str());//类型转换
	QTreeWidgetItem *child = new QTreeWidgetItem(ui->treeWidget);//创建树的一个顶层节点
	child->setText(0, qtreename);//设置名称，即患者名称
	child->setIcon(0, QIcon(".\\Resources\\addPatient.PNG"));//设置图标
	ui->treeWidget->addTopLevelItem(child);//添加进树
}
//创建孩子节点
void MainWindow::create_childitem(std::string name, QTreeWidgetItem* father)
{
	QString childname = QString::fromLocal8Bit(name.c_str());//类型转换
	QTreeWidgetItem* child = new QTreeWidgetItem(father);
	child->setText(0, childname);
	child->setIcon(0, QIcon(".\\Resources\\icon.PNG"));
	father->addChild(child);
}
//刷新患者列表
void MainWindow::flushTree()
{
	ui->treeWidget->clear();
	on_actionNewTree_triggered();
}
//点击子节点时显示病历
void MainWindow::showcase()
{
	//获取被点击的树节点
	QTreeWidgetItem *item = ui->treeWidget->currentItem();
	if (item->parent() != NULL)
	{
		//被点击节点为子节点（如“张三病历”）时显示病历和个人信息
		//显示个人信息
		on_actionNewInfo_triggered(item->parent()->text(0));
		//获取病历
		QString casepath = ".\\patients\\"+item->parent()->text(0)+"\\"+item->text(0)+".txt";
		std::string casepath_str = qstr_to_str(casepath);
		QTextCodec *code = QTextCodec::codecForName("gb18030");
		if (code)
			casepath_str = code->fromUnicode(casepath).data();
		//此处应该加上判断文件是否存在
		ifstream fin(casepath_str);
		string casedata;//病历信息
		string temp;
		while (!fin.eof())
		{
			while (!fin.eof())
			{
				getline(fin, temp);
				temp += '\n';
				casedata += temp;
			}
		}
		fin.close();
		QString casedata_qstr = str_to_qstr(casedata);
		//于当前文档显示信息
		if (item->text(0) == "newcase")
		{
			ui->tabWidget->setCurrentIndex(2);
			ui->textEdit_3->setText(casedata_qstr);
			//ui->textEdit_3->setHtml(casedata_qstr);
		}
		else
		{
			ui->tabWidget->setCurrentIndex(0);
			ui->textEdit->setText(casedata_qstr);
			//ui->textEdit_3->setHtml(casedata_qstr);
		}
	}
	else
	{
		//被点击节点为顶层节点（如“张三”）时只显示个人信息
		on_actionNewInfo_triggered(item->text(0));
	}
}
//右键顶层节点显示新建菜单
int MainWindow::OnTreeContextMenu(const QPoint& pt)
{
	//获取当前右键点击结点
	QTreeWidgetItem *curitem = ui->treeWidget->itemAt(pt);
	on_actionNewInfo_triggered(curitem->text(0));
	//创建窗口
	QMenu menu;
	//设置条件，只有右键父结点时（病人文件夹）才触发事件
	if (curitem&&curitem->parent() == NULL)
	{
		//窗口添加actionNew内容
		menu.addAction(ui->actionNew);
		menu.addAction(ui->actionCase);
	}
	//显示窗口（如果窗口没有内容是不可视的，我这么认为）
	menu.exec(ui->treeWidget->mapToGlobal(pt));
	return 0;
}
//向服务器请求病历
void MainWindow::on_actionCase_triggered()
{
	QTreeWidgetItem *item = ui->treeWidget->currentItem();
	if (item->parent() == NULL)
	{
		QString Qpat_id = ui->listWidget->item(2)->text();
		QString Qdoc_id = doctor_data.ID;
		QString Qpat_name = ui->listWidget->item(0)->text();
		string pat_name = Qpat_name.toLocal8Bit();
		pat_name = pat_name.substr(6);
		string pat_id = Qpat_id.toLocal8Bit();
		pat_id = pat_id.substr(12);
		string doc_id = Qdoc_id.toLocal8Bit();
		std::string casedata = "";
		OS_TcpSocket* Client = new OS_TcpSocket();
		Client->SetOpt_RecvTimeout(3000);
		Client->SetOpt_SendTimeout(3000);
		Client->Open();
		OS_SockAddr Serveraddr(CASE_IP, CASE_PORT);
		if (Client->Connect(Serveraddr) < 0)
		{
			QMessageBox::warning(NULL, QStringLiteral("提示"), QStringLiteral("无法连接节点"), QMessageBox::Yes);
			Client->Close();
			delete Client;
			return;
		}
		char buf[512*1024];
		//发送病历请求
		Json::Value root;
		root["req"] = "record";
		root["sender"] = "doc";
		root["pat_id"] = pat_id;
		root["doc_id"] = doc_id;
		Json::StyledWriter write;
		std::string data = write.write(root);
		int n = data.size();
		memcpy(buf, data.c_str(), data.size());
		Client->Send(buf, n);//发送缓冲区前n个字节
		n = strlen(buf);
		Client->Send(buf, n);
		n = Client->Recv(buf, sizeof(buf));
		casedata = buf;
		//接收病历
		//std::string bufstr;
		//while (true)
		//{
		//	// 接收数据
		//	n = Client->Recv(buf, sizeof(buf));
		//	if (-1 == n)
		//	{
		//		QMessageBox::warning(NULL, QStringLiteral("提示"), QStringLiteral("数据接收失败"), QMessageBox::Yes);
		//		continue;
		//	}
		//	buf[n] = 0;
		//	int recvcommand = buf[0];
		//	if (recvcommand == 0x11)
		//	{
		//		bufstr = buf;
		//		std::string temp(bufstr, 1);
		//		casedata += temp;
		//		break;
		//	}
		//	bufstr = buf;
		//	std::string temp(bufstr, 1);
		//	casedata += temp;
		//}
		////解析病历
		//casedata = casedata.substr(1);
		Json::Value casejson;;
		Json::Reader reader;
		//读取json
		if (!reader.parse(casedata, casejson))
		{
			//json信息出错，拟计划弹出窗口输入身份证号码向服务器寻求信息
			QMessageBox::warning(NULL, QStringLiteral("提示"), QStringLiteral("无法解析历史病历！"), QMessageBox::Yes);
			Client->Close();
			delete Client;
			return;
		}
		ofstream of(".\\patients\\"+pat_name+"\\"+pat_name+".txt");
		int size = casejson["record"].size();
		for (int i = 0; i < size; i++)
		{
			Json::Value jsontemp;
			jsontemp = casejson["record"][i];
			of << "日期：" + jsontemp["date"].asString()+"\n";
			of << "科属：" + jsontemp["dep"].asString() + "\n";
			of << "诊断医师ID：" + jsontemp["doc_id"].asString() + "\n";
			of << "病历内容：" + jsontemp["record"].asString() + "\n";
			of << "\n\n\n";
		}
		of.close();
		Client->Close();
		delete Client;
	}
	flushTree();
}
//————右下部病人简要信息————
void MainWindow::on_actionNewInfo_triggered(QString itemname)
{
	ui->listWidget->clear();
	//获取具有患者信息的json文本
	QString jsonpath = ".\\patients\\"+itemname+"\\"+itemname+".json";
	std::string jsonpath_str = jsonpath.toStdString();
	QTextCodec *code = QTextCodec::codecForName("gb18030");
	if (code)
		jsonpath_str = code->fromUnicode(jsonpath).data();
	ifstream fin(jsonpath_str);
	Json::Value value;
	Json::Reader reader;
	//读取json
	if (!reader.parse(fin, value))
	{
		//json信息出错，拟计划弹出窗口输入身份证号码向服务器寻求信息
		fin.close();
	}
	fin.close();
	//json信息获取完毕，于列表显示信息
	//name信息
	string name_str ="姓名："+ value["name"].asString();
	QString name = QString::fromLocal8Bit(name_str.c_str());
	QListWidgetItem* item_name = new QListWidgetItem(ui->listWidget);
	item_name->setText(name);
	ui->listWidget->addItem(item_name);
	//sex信息
	string sex_str = "性别：" + value["sex"].asString();
	QString sex = QString::fromLocal8Bit(sex_str.c_str());
	QListWidgetItem* item_sex = new QListWidgetItem(ui->listWidget);
	item_sex->setText(sex);
	ui->listWidget->addItem(item_sex);
	//ID信息
	string ID_str = "身份证号码：" + value["ID"].asString();
	QString ID = QString::fromLocal8Bit(ID_str.c_str());
	QListWidgetItem* item_ID = new QListWidgetItem(ui->listWidget);
	item_ID->setText(ID);
	ui->listWidget->addItem(item_ID);
	//number信息
	string number_str = "床号：" + value["number"].asString();
	QString number = QString::fromLocal8Bit(number_str.c_str());
	QListWidgetItem* item_number = new QListWidgetItem(ui->listWidget);
	item_number->setText(number);
	ui->listWidget->addItem(item_number);
	//patcase_get(value["ID"].asString(), value["name"].asString());
}

void MainWindow::on_actionTemplateNew_triggered()
{
	file_path = ""; // Clear the path
	ui->textEdit_2->setText(""); // Make the editor blank
}

void MainWindow::on_actionTemplateSave_triggered()
{
	QString file_name = QFileDialog::getSaveFileName(this, "Open a file");
	QFile file(file_name);
	file_path = file_name;
	if (!file.open(QFile::WriteOnly | QFile::Text)) {
		//Simply return if the user cancels or does something unexpected!
		return;
	}
	else {
		//Read the file
		QTextStream writeData(&file);
		QString fileText = ui->textEdit_2->toHtml();
		writeData << fileText;
		file.flush();
		file.close();
	}
}

void MainWindow::on_actionTemplateOpen_triggered()
{
	/*
	getOpenFileName函数说明
	函数原形： QStringList QFileDialog::getOpenFileNames(
	QWidget * parent = 0,
	const QString & caption = QString(),    //  打开文件对话框的标题
	const QString & dir = QString(),            //  查找目录
	const QString & filter = QString(),     //  设置需要过滤的文件格式
	QString * selectedFilter = 0,
	Options options = 0) [static]
	*/
	const QString &caption = QString::fromLocal8Bit("打开模板");
	QString templateFileName = QFileDialog::getOpenFileName(this, caption, NULL, "*.rtf *.htm *.html *.txt");
	QFile Emr_template(templateFileName);
	if (!Emr_template.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		return;               //先不做处理直接返回
	}
	QTextStream filestream(&Emr_template);
	if (!filestream.atEnd())
	{
		ui->textEdit_2->setText(filestream.readAll());
	}
	ui->tabWidget->setCurrentIndex(1);
}

//————患者登记————
//接收从AddPatient对话框传过来的患者数据
void MainWindow::receiveData(QString number, QString name,QString sex, QString ID)
{
	PatientInfo* pttinfo = new PatientInfo();     
	pttinfo->name = name;
	pttinfo->sex = sex;
	pttinfo->number = number;
	pttinfo->Id = ID;
	setPatientInfo(pttinfo);
	delete pttinfo;
}
bool MainWindow::setPatientInfo(PatientInfo* patient)
{
	string patientName = patient->name.toStdString();
	string patientSex = patient->sex.toStdString();
	string patientNumber = patient->number.toStdString();
	string patientID = patient->Id.toStdString();
	//转码
	QTextCodec *code = QTextCodec::codecForName("gb18030");           
	if (code)
	{
		patientName = code->fromUnicode(patient->name).data();
		patientSex = code->fromUnicode(patient->sex).data();
		patientNumber = code->fromUnicode(patient->number).data();
		patientID = code->fromUnicode(patient->Id).data();
	}
	//创建文件夹
	QDir dir;
	dir.cd(".\\patients");  //进入某文件夹
	if (!dir.exists(patient->name))//判断需要创建的文件夹是否存在
	{
		dir.mkdir(patient->name); //创建文件夹
	}
	//创建json个人资料
	Json::Value req;
	Json::StreamWriterBuilder writer;
	std::unique_ptr<Json::StreamWriter> write(writer.newStreamWriter());
	std::ostringstream os;
	req["name"] = patientName;//姓名
	req["sex"] = patientSex;//性别
	req["ID"] = patientID;//身份证号码
	req["number"] = patientNumber;//床号
	write->write(req, &os);
	write->~StreamWriter();
	std::string patientinfo = os.str();
	ofstream fout(".\\patients\\" + patientName + "\\" + patientName + ".json");
	fout << patientinfo;
	fout.close();
	//获取病人病历
	//patcase_get(patientID,patientName);
	//刷新患者信息列表（树）
	flushTree();
	//显示患者简要信息列表
	on_actionNewInfo_triggered(QString::fromLocal8Bit(patientName.c_str()));
	return true;
}
void MainWindow::on_actionAddPatient_triggered()
{
	AddPatient *add;
	add = new AddPatient();
	//add->setModal(true);
	connect(add, SIGNAL(sendData(QString, QString, QString, QString)), this, SLOT(receiveData(QString, QString, QString, QString)));      //用信号和槽的方式将这两个函数关联起来，然后将数据发送给主窗口
	add->show();
	add->setAttribute(Qt::WA_DeleteOnClose);//设置退出时释放内存，如果不写这个会造成内存泄露！！！其他的方式实在太复杂。记得在点“确定”或者“取消”之后要调用close的函数
}
//————标签页删除————
void MainWindow::remove_tab()
{
	//判断当前页面序号是否为3（新建病历页面）
	//如果不是3，则无视操作
	int curnum = ui->tabWidget->currentIndex();
	if (curnum != 3)
		return;
	//如果是3（第四个标签页也就是新建病历）则进行相应处理
	//当未保存的新建病历标签页被移除时，首先提示是否暂存
	if (this->optionbox("温馨提示", "是否保存当前病历？", "暂时保存", "直接删除"))
	{
		//保存当前病历
		this->on_actionSave_triggered();
	}
	//直接删除当前标签页
	int i = ui->tabWidget->currentIndex();
	if(i==3)
		ui->tabWidget->removeTab(i);
	//重置保存路径
	this->newcase_savepath = "";
	//将标签页转为历史病历
	ui->tabWidget->setCurrentIndex(0);
}
//————一些工具函数————
//用来显示底端的当前时间
void MainWindow::qtimeSlot()
{
	//用来显示时间
	QTime qtimeObj = QTime::currentTime();
	QString strTime = qtimeObj.toString("h:m ");
	strTime.prepend("  Time is: ");
	QDate qdateObj = QDate::currentDate();
	QString strDate = qdateObj.toString(QString::fromLocal8Bit("yyyy年MMMMd,dddd")); //年月日星期 
	strDate.prepend(QString::fromLocal8Bit("当前时间："));
	strDate.append(strTime);
	ui->timelable->setText(strDate);
}
//str转为QStr
QString MainWindow::str_to_qstr(string str)
{
	return QString::fromLocal8Bit(str.c_str());
}
//QStr转为str
string MainWindow::qstr_to_str(QString qstr)
{
	return qstr.toLocal8Bit();
}
//遍历文件夹并获取文件名
list<string> MainWindow::dir(string path, string type)
{
	long long hFile = 0;
	struct _finddata_t fileInfo;
	string pathName, exdName;
	string result;
	list<string> re;
	// \\* 代表要遍历所有的类型,如改成\\*.txt表示遍历txt类型文件
	if ((hFile = _findfirst(pathName.assign(path).append(type).c_str(), &fileInfo)) == -1) {
		return re;
	}
	do
	{
		//判断文件的属性是文件夹还是文件
		if (type == "\\*")
		{
			if ((fileInfo.attrib &  _A_SUBDIR))
			{
				result += fileInfo.name;
				result += ":";
			}
		}
		if (type == "\\*.txt")
		{
			result += fileInfo.name;
			result += ":";
		}
	} while (_findnext(hFile, &fileInfo) == 0);
	_findclose(hFile);
	string temp;
	for (int i = 0; i < result.length(); i++)
	{
		if (result[i] == ':')
		{
			if (type == "\\*")
			{
				if (temp != "."&&temp != "..")
				{
					re.push_back(temp);
				}
			}
			else
			{
				string t(temp, 0, (temp.length() - 4));
				re.push_back(t);
			}
			temp.clear();
		}
		else
			temp += result[i];
	}
	return re;
}
//获取文件路径下某中特征文件的数目
int MainWindow::dirnum(string path)
{
	long long hFile = 0;
	struct _finddata_t fileInfo;
	string pathName, exdName;
	if ((hFile = _findfirst(pathName.assign(path).c_str(), &fileInfo)) == -1) {
		return 0;
	}
	int i = 0;
	do
	{
		i++;
	} while (_findnext(hFile, &fileInfo) == 0);
	_findclose(hFile);
	return i;
}
//选择性信息窗口弹出，点击yesdata时返回true，相反返回false
bool MainWindow::optionbox(string title,string messagedata,string yesdata, string nodata)
{
	QMessageBox mymessage(QMessageBox::Warning, str_to_qstr(title), str_to_qstr(messagedata));
	QPushButton *btnYes = mymessage.addButton((str_to_qstr(yesdata)), QMessageBox::YesRole);
	QPushButton *btnNo = mymessage.addButton((str_to_qstr(nodata)), QMessageBox::NoRole);
	mymessage.exec();
	if ((QPushButton*)mymessage.clickedButton() == btnYes)
		return true;
	return false;
}
//获取当前系统时间
string MainWindow::gettime()
{
	string pt = "";
	SYSTEMTIME st = { 0 };
	GetLocalTime(&st);
	pt += std::to_string(st.wYear) + "-" + std::to_string(st.wMonth) + "-" + std::to_string(st.wDay) + " " + std::to_string(st.wHour) + ":" + std::to_string(st.wMinute) + ":" + std::to_string(st.wSecond);
	return pt;
}
//当关闭窗口时先检查是否有未上传病历
void MainWindow::closeEvent(QCloseEvent *event)
{
	//检查是否还有未上传的新建病历，即名称为newcase的txt文件
	//遍历文件夹
	list<string> patient_list = dir(".\\patients", "\\*");
	//依据患者列表进行循环搜索文件
	list<string>::iterator i;
	for (i = patient_list.begin(); i != patient_list.end(); i++)
	{
		//获取患者文件夹下的新建病历文件数目
		if (dirnum(".\\patients\\" + *i+"\\newcase.txt") > 0)
		{
			QString qtitle = str_to_qstr("提示");
			QString qmess = str_to_qstr("当前存在仍未上传的新建病历，请先上传!");
			QMessageBox::warning(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
			//存在未上传的新建病历就忽视关闭窗口动作
			event->ignore();
			return;
		}
	}
	//循环结束后都没有发现未上传新建病历，则直接退出
	event->accept();
}



