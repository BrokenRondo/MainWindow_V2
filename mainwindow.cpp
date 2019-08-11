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
	//��������ʱ�����á���������
	QTimer *timer;
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(qtimeSlot()));
	timer->start(1000);
	//����������ǩҳ�����á�������
	//�ı�ֻ��
	ui->textEdit->setReadOnly(true);
	ui->textEdit_2->setReadOnly(true);
	ui->textEdit_3->setReadOnly(true);
	//����Ĭ�ϱ�ǩҳΪ��ʷ������ǩҳ
	ui->tabWidget->setCurrentIndex(0);
	//����������ʼ��ǩҳ���ɹر�
	for(int i=0;i<3;i++)
		ui->tabWidget->tabBar()->setTabButton(i, QTabBar::RightSide, NULL);
	//�����½���ǩҳ�Ĺرչ���
	connect(ui->tabWidget, SIGNAL(tabCloseRequested(int)),this,SLOT(remove_tab()),Qt::UniqueConnection);
	//���������Ҳ໼���б��ʼ����������
	//�����Ҳ����������б�
	on_actionNewTree_triggered();
	//�Ҽ����Ķ���ڵ�����½��˵������½�����
	connect(ui->treeWidget, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(OnTreeContextMenu(const QPoint&)), Qt::UniqueConnection);
	//������ڵ�ʱ������Ӧ������ʾ������Ϣ����ʾ����
	connect(this->ui->treeWidget, SIGNAL(itemClicked(QTreeWidgetItem*, int)), this, SLOT(showcase()), Qt::UniqueConnection); 
	//��ǰҽ����Ϣ��ʾ
	ui->label->setText(QStringLiteral("��ǰҽ����")+doctor_data.name);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//������������༭�������¼�������Ҫ��Ҫ�ء���������
void MainWindow::on_actionnew_record_triggered()
{
       //ui->textEdit->setReadOnly(false);
}
//������������½��������¼���������
void MainWindow::on_actionNew_triggered()
{
	//�ȹ۲��Ƿ��Ѿ����½�������ǩҳ��������ʾ�����ɾ��
	int count = ui->tabWidget->count();
	if (count > 3)
	{
		QString qtitle = str_to_qstr("��ʾ");
		QString qmess = str_to_qstr("��ǰ�Ѿ������½��Ĳ��������ȱ����ɾ��!");
		QMessageBox::warning(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
		ui->tabWidget->setCurrentIndex(4);
		return;
	}
	//��ȡ��ǰ��������
	QTreeWidgetItem *curitem = ui->treeWidget->currentItem();
	//��ȡ���������Ļ��߶�������
	//�жϵ�ǰ�ڵ��Ƿ��Ƕ���ڵ㣬����ȡ����ڵ����ƣ�������ȡ�丸�׽ڵ������
	QString patient_name = "";
	if(curitem->parent()==NULL)
		patient_name= curitem->text(0);
	else
		patient_name = curitem->parent()->text(0);
	//�����µı�ǩҳ�����ı��༭��
	QDialog *dialog = new QDialog(0);
	MRichTextEdit *rte = new MRichTextEdit(dialog);
	//��׺ 
	QString suffix = str_to_qstr("���²���");
	ui->tabWidget->addTab(rte, patient_name+suffix);
	//�����½���������ʱ�Ĳ���
	this->newcase_savepath = ".\\patients\\" + patient_name + "\\newcase.txt";
	//�Զ���ת���½���ǩҳ
	ui->tabWidget->setCurrentIndex(3);
}
//��������������淢�����¼���������
void MainWindow::on_actionSave_triggered()
{
	//��ȡ��ǰ��ǩҳ�����
	//�������3�������Ӳ���
	int curnum = ui->tabWidget->currentIndex();
	if (curnum != 3)
		return;
	//�����3�����ĸ���ǩҳҲ�����½��������򱣴�
	QWidget * r = ui->tabWidget->currentWidget();
	//ǿ��ת������Ϊ���ı��༭��
	MRichTextEdit *text = (MRichTextEdit*)r;
	//��ȡ���ı�������
	string casedata = qstr_to_str(text->toPlainText());
	//string casedata= qstr_to_str(text->toHtml());
	//��ȡ��ǰʱ��
	unsigned int nowtime = time(NULL);//gettime();
	//׷�����������Ϣ��txt�ļ�
 	ofstream fout(qstr_to_str(this->newcase_savepath),ios::app);
	fout << casedata;
	fout.close();
	//���ñ���·��
	newcase_savepath = "";
	//�����ǰ��ǩҳΪ�½���������ɾ����ǰ��ǩҳ
	int i = ui->tabWidget->currentIndex();
	if (i == 3)
		ui->tabWidget->removeTab(i);
	//ˢ����
	flushTree();
	//����ǩҳתΪδ�ϴ�����
	ui->tabWidget->setCurrentIndex(2);
}
//������������ϴ��������¼���������
void MainWindow::on_actionUpload_triggered()
{
	//����δ�ϴ����½�������������Ϊnewcase��txt�ļ�
	//�����ļ���
	list<string> patient_list = dir(".\\patients", "\\*");
	//���ݻ����б����ѭ�������ļ�
	list<string>::iterator i;
	for (i = patient_list.begin(); i != patient_list.end(); i++)
	{
		//��ȡ�����ļ����µ��½������ļ���Ŀ
		if (dirnum(".\\patients\\" + *i + "\\newcase.txt") > 0)
		{
			string uploadpath = ".\\patients\\" + *i + "\\newcase.txt";
			//��ȡ�ĵ�����
			ifstream fin(uploadpath);
			string temp;
			string casedata="";
			while (!fin.eof())
			{
				getline(fin, temp);
				casedata += temp + "\n";
			}
			fin.close();
			//��ȡ������Ϣ
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
				QString qtitle = str_to_qstr("��ʾ");
				QString qmess = str_to_qstr("δ�ܻ�ȡ"+*i+"�ĸ�����Ϣ��Json����ʧ��");
				QMessageBox::critical(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
			}
			//��װ��������
			Json::Value req;
			Json::StreamWriterBuilder writer;
			std::unique_ptr<Json::StreamWriter> write(writer.newStreamWriter());
			ostringstream os;
			req["pat_id"] = root["ID"].asString();
			req["doc_id"] = "1";// qstr_to_str(doctor_data.ID);
			req["text"] = casedata;
			req["hash"] = sha256(casedata);
			req["time"] =  gettime();
			req["dep"] = "����";
			//req["sig"] = "1111111";
			req["hospital"] = "ʡ��ҽԺ";
			req["sig"] = false;
			write->write(req, &os);
			write->~StreamWriter();
			string jsondata = os.str();
			ofstream of("case.txt",ios::app);
			of << jsondata << endl;;
			//���ӷ�����
			OS_TcpSocket* sock = new OS_TcpSocket();
			sock->SetOpt_SendTimeout(2000);
			sock->SetOpt_RecvTimeout(2000);
			sock->Open();
			OS_SockAddr ser_addr(UPLOAD_IP, UPLOAD_PORT);
			if (sock->Connect(ser_addr) < 0)//δ�ɹ�����
			{
				sock->Close();
				delete sock;
				QString qtitle = str_to_qstr("��ʾ");
				QString qmess = str_to_qstr("�޷����ӷ�����");
				QMessageBox::critical(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
				return;
			}
			char buf[1024];//������
			//�����ϴ�����
			int n = jsondata.size();
			memcpy(buf, jsondata.c_str(), jsondata.size());
			sock->Send(buf, n);//���ͻ�����ǰn���ֽ�
			//����ɾ��ԭ�ļ�����
			if (remove(uploadpath.c_str())!=0)
			{
				QString qtitle = str_to_qstr("��ʾ");
				QString qmess =str_to_qstr(*i+"���½�����δ�ܳɹ��ϴ�");
				QMessageBox::critical(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
			}
			sock->Close();
			delete sock;
			OS_Thread::Msleep(500);
		}
	}
	QMessageBox::information(NULL, QStringLiteral("��ʾ"), QStringLiteral("�ϴ��ɹ���"), QMessageBox::Yes);
	//ˢ����
	flushTree();
}
//����������ಡ�������б�������
void MainWindow::on_actionNewTree_triggered()
{
	//�����ڵ㴴��
	QTreeWidgetItem *root = ui->treeWidget->headerItem();
	//�����ڵ���������
	string root_name = "�����б�";
	root->setText(0, str_to_qstr(root_name));
	//��ȡpatients�ļ����»������Ƶ��б�
	list<string> patient_list = dir(".\\patients", "\\*");
	//���ݻ����б����ѭ�����춥��ڵ㣬�硰������
	list<string>::iterator i, j;
	int index = 0;
	for (i = patient_list.begin(); i != patient_list.end(); i++)
	{
		//��������ڵ�
		create_topitem(*i);
		//��ȡ�ö���ڵ��ָ��
		QTreeWidgetItem* topitem = ui->treeWidget->topLevelItem(index);
		index++;
		//��ȡ�����ļ����µĲ����ļ��б�
		list<string> case_list = dir(".\\patients\\"+*i,"\\*.txt");
		//���ݲ����ļ��б����ѭ�������ӽڵ㣬�硰����������
		for (j = case_list.begin(); j != case_list.end(); j++)
		{
			create_childitem(*j, topitem);
		}
	}
	//�����Ҽ���ݲ˵�
	ui->treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
}
//��������Ϊname�Ķ���ڵ�
void MainWindow::create_topitem(string name)
{
	QString qtreename = QString::fromLocal8Bit(name.c_str());//����ת��
	QTreeWidgetItem *child = new QTreeWidgetItem(ui->treeWidget);//��������һ������ڵ�
	child->setText(0, qtreename);//�������ƣ�����������
	child->setIcon(0, QIcon(".\\Resources\\addPatient.PNG"));//����ͼ��
	ui->treeWidget->addTopLevelItem(child);//��ӽ���
}
//�������ӽڵ�
void MainWindow::create_childitem(std::string name, QTreeWidgetItem* father)
{
	QString childname = QString::fromLocal8Bit(name.c_str());//����ת��
	QTreeWidgetItem* child = new QTreeWidgetItem(father);
	child->setText(0, childname);
	child->setIcon(0, QIcon(".\\Resources\\icon.PNG"));
	father->addChild(child);
}
//ˢ�»����б�
void MainWindow::flushTree()
{
	ui->treeWidget->clear();
	on_actionNewTree_triggered();
}
//����ӽڵ�ʱ��ʾ����
void MainWindow::showcase()
{
	//��ȡ����������ڵ�
	QTreeWidgetItem *item = ui->treeWidget->currentItem();
	if (item->parent() != NULL)
	{
		//������ڵ�Ϊ�ӽڵ㣨�硰������������ʱ��ʾ�����͸�����Ϣ
		//��ʾ������Ϣ
		on_actionNewInfo_triggered(item->parent()->text(0));
		//��ȡ����
		QString casepath = ".\\patients\\"+item->parent()->text(0)+"\\"+item->text(0)+".txt";
		std::string casepath_str = qstr_to_str(casepath);
		QTextCodec *code = QTextCodec::codecForName("gb18030");
		if (code)
			casepath_str = code->fromUnicode(casepath).data();
		//�˴�Ӧ�ü����ж��ļ��Ƿ����
		ifstream fin(casepath_str);
		string casedata;//������Ϣ
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
		//�ڵ�ǰ�ĵ���ʾ��Ϣ
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
		//������ڵ�Ϊ����ڵ㣨�硰��������ʱֻ��ʾ������Ϣ
		on_actionNewInfo_triggered(item->text(0));
	}
}
//�Ҽ�����ڵ���ʾ�½��˵�
int MainWindow::OnTreeContextMenu(const QPoint& pt)
{
	//��ȡ��ǰ�Ҽ�������
	QTreeWidgetItem *curitem = ui->treeWidget->itemAt(pt);
	on_actionNewInfo_triggered(curitem->text(0));
	//��������
	QMenu menu;
	//����������ֻ���Ҽ������ʱ�������ļ��У��Ŵ����¼�
	if (curitem&&curitem->parent() == NULL)
	{
		//�������actionNew����
		menu.addAction(ui->actionNew);
		menu.addAction(ui->actionCase);
	}
	//��ʾ���ڣ��������û�������ǲ����ӵģ�����ô��Ϊ��
	menu.exec(ui->treeWidget->mapToGlobal(pt));
	return 0;
}
//�������������
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
			QMessageBox::warning(NULL, QStringLiteral("��ʾ"), QStringLiteral("�޷����ӽڵ�"), QMessageBox::Yes);
			Client->Close();
			delete Client;
			return;
		}
		char buf[512*1024];
		//���Ͳ�������
		Json::Value root;
		root["req"] = "record";
		root["sender"] = "doc";
		root["pat_id"] = pat_id;
		root["doc_id"] = doc_id;
		Json::StyledWriter write;
		std::string data = write.write(root);
		int n = data.size();
		memcpy(buf, data.c_str(), data.size());
		Client->Send(buf, n);//���ͻ�����ǰn���ֽ�
		n = strlen(buf);
		Client->Send(buf, n);
		n = Client->Recv(buf, sizeof(buf));
		casedata = buf;
		//���ղ���
		//std::string bufstr;
		//while (true)
		//{
		//	// ��������
		//	n = Client->Recv(buf, sizeof(buf));
		//	if (-1 == n)
		//	{
		//		QMessageBox::warning(NULL, QStringLiteral("��ʾ"), QStringLiteral("���ݽ���ʧ��"), QMessageBox::Yes);
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
		////��������
		//casedata = casedata.substr(1);
		Json::Value casejson;;
		Json::Reader reader;
		//��ȡjson
		if (!reader.parse(casedata, casejson))
		{
			//json��Ϣ������ƻ����������������֤�����������Ѱ����Ϣ
			QMessageBox::warning(NULL, QStringLiteral("��ʾ"), QStringLiteral("�޷�������ʷ������"), QMessageBox::Yes);
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
			of << "���ڣ�" + jsontemp["date"].asString()+"\n";
			of << "������" + jsontemp["dep"].asString() + "\n";
			of << "���ҽʦID��" + jsontemp["doc_id"].asString() + "\n";
			of << "�������ݣ�" + jsontemp["record"].asString() + "\n";
			of << "\n\n\n";
		}
		of.close();
		Client->Close();
		delete Client;
	}
	flushTree();
}
//�����������²����˼�Ҫ��Ϣ��������
void MainWindow::on_actionNewInfo_triggered(QString itemname)
{
	ui->listWidget->clear();
	//��ȡ���л�����Ϣ��json�ı�
	QString jsonpath = ".\\patients\\"+itemname+"\\"+itemname+".json";
	std::string jsonpath_str = jsonpath.toStdString();
	QTextCodec *code = QTextCodec::codecForName("gb18030");
	if (code)
		jsonpath_str = code->fromUnicode(jsonpath).data();
	ifstream fin(jsonpath_str);
	Json::Value value;
	Json::Reader reader;
	//��ȡjson
	if (!reader.parse(fin, value))
	{
		//json��Ϣ������ƻ����������������֤�����������Ѱ����Ϣ
		fin.close();
	}
	fin.close();
	//json��Ϣ��ȡ��ϣ����б���ʾ��Ϣ
	//name��Ϣ
	string name_str ="������"+ value["name"].asString();
	QString name = QString::fromLocal8Bit(name_str.c_str());
	QListWidgetItem* item_name = new QListWidgetItem(ui->listWidget);
	item_name->setText(name);
	ui->listWidget->addItem(item_name);
	//sex��Ϣ
	string sex_str = "�Ա�" + value["sex"].asString();
	QString sex = QString::fromLocal8Bit(sex_str.c_str());
	QListWidgetItem* item_sex = new QListWidgetItem(ui->listWidget);
	item_sex->setText(sex);
	ui->listWidget->addItem(item_sex);
	//ID��Ϣ
	string ID_str = "���֤���룺" + value["ID"].asString();
	QString ID = QString::fromLocal8Bit(ID_str.c_str());
	QListWidgetItem* item_ID = new QListWidgetItem(ui->listWidget);
	item_ID->setText(ID);
	ui->listWidget->addItem(item_ID);
	//number��Ϣ
	string number_str = "���ţ�" + value["number"].asString();
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
	getOpenFileName����˵��
	����ԭ�Σ� QStringList QFileDialog::getOpenFileNames(
	QWidget * parent = 0,
	const QString & caption = QString(),    //  ���ļ��Ի���ı���
	const QString & dir = QString(),            //  ����Ŀ¼
	const QString & filter = QString(),     //  ������Ҫ���˵��ļ���ʽ
	QString * selectedFilter = 0,
	Options options = 0) [static]
	*/
	const QString &caption = QString::fromLocal8Bit("��ģ��");
	QString templateFileName = QFileDialog::getOpenFileName(this, caption, NULL, "*.rtf *.htm *.html *.txt");
	QFile Emr_template(templateFileName);
	if (!Emr_template.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		return;               //�Ȳ�������ֱ�ӷ���
	}
	QTextStream filestream(&Emr_template);
	if (!filestream.atEnd())
	{
		ui->textEdit_2->setText(filestream.readAll());
	}
	ui->tabWidget->setCurrentIndex(1);
}

//�����������ߵǼǡ�������
//���մ�AddPatient�Ի��򴫹����Ļ�������
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
	//ת��
	QTextCodec *code = QTextCodec::codecForName("gb18030");           
	if (code)
	{
		patientName = code->fromUnicode(patient->name).data();
		patientSex = code->fromUnicode(patient->sex).data();
		patientNumber = code->fromUnicode(patient->number).data();
		patientID = code->fromUnicode(patient->Id).data();
	}
	//�����ļ���
	QDir dir;
	dir.cd(".\\patients");  //����ĳ�ļ���
	if (!dir.exists(patient->name))//�ж���Ҫ�������ļ����Ƿ����
	{
		dir.mkdir(patient->name); //�����ļ���
	}
	//����json��������
	Json::Value req;
	Json::StreamWriterBuilder writer;
	std::unique_ptr<Json::StreamWriter> write(writer.newStreamWriter());
	std::ostringstream os;
	req["name"] = patientName;//����
	req["sex"] = patientSex;//�Ա�
	req["ID"] = patientID;//���֤����
	req["number"] = patientNumber;//����
	write->write(req, &os);
	write->~StreamWriter();
	std::string patientinfo = os.str();
	ofstream fout(".\\patients\\" + patientName + "\\" + patientName + ".json");
	fout << patientinfo;
	fout.close();
	//��ȡ���˲���
	//patcase_get(patientID,patientName);
	//ˢ�»�����Ϣ�б�����
	flushTree();
	//��ʾ���߼�Ҫ��Ϣ�б�
	on_actionNewInfo_triggered(QString::fromLocal8Bit(patientName.c_str()));
	return true;
}
void MainWindow::on_actionAddPatient_triggered()
{
	AddPatient *add;
	add = new AddPatient();
	//add->setModal(true);
	connect(add, SIGNAL(sendData(QString, QString, QString, QString)), this, SLOT(receiveData(QString, QString, QString, QString)));      //���źźͲ۵ķ�ʽ����������������������Ȼ�����ݷ��͸�������
	add->show();
	add->setAttribute(Qt::WA_DeleteOnClose);//�����˳�ʱ�ͷ��ڴ棬�����д���������ڴ�й¶�����������ķ�ʽʵ��̫���ӡ��ǵ��ڵ㡰ȷ�������ߡ�ȡ����֮��Ҫ����close�ĺ���
}
//����������ǩҳɾ����������
void MainWindow::remove_tab()
{
	//�жϵ�ǰҳ������Ƿ�Ϊ3���½�����ҳ�棩
	//�������3�������Ӳ���
	int curnum = ui->tabWidget->currentIndex();
	if (curnum != 3)
		return;
	//�����3�����ĸ���ǩҳҲ�����½��������������Ӧ����
	//��δ������½�������ǩҳ���Ƴ�ʱ��������ʾ�Ƿ��ݴ�
	if (this->optionbox("��ܰ��ʾ", "�Ƿ񱣴浱ǰ������", "��ʱ����", "ֱ��ɾ��"))
	{
		//���浱ǰ����
		this->on_actionSave_triggered();
	}
	//ֱ��ɾ����ǰ��ǩҳ
	int i = ui->tabWidget->currentIndex();
	if(i==3)
		ui->tabWidget->removeTab(i);
	//���ñ���·��
	this->newcase_savepath = "";
	//����ǩҳתΪ��ʷ����
	ui->tabWidget->setCurrentIndex(0);
}
//��������һЩ���ߺ�����������
//������ʾ�׶˵ĵ�ǰʱ��
void MainWindow::qtimeSlot()
{
	//������ʾʱ��
	QTime qtimeObj = QTime::currentTime();
	QString strTime = qtimeObj.toString("h:m ");
	strTime.prepend("  Time is: ");
	QDate qdateObj = QDate::currentDate();
	QString strDate = qdateObj.toString(QString::fromLocal8Bit("yyyy��MMMMd,dddd")); //���������� 
	strDate.prepend(QString::fromLocal8Bit("��ǰʱ�䣺"));
	strDate.append(strTime);
	ui->timelable->setText(strDate);
}
//strתΪQStr
QString MainWindow::str_to_qstr(string str)
{
	return QString::fromLocal8Bit(str.c_str());
}
//QStrתΪstr
string MainWindow::qstr_to_str(QString qstr)
{
	return qstr.toLocal8Bit();
}
//�����ļ��в���ȡ�ļ���
list<string> MainWindow::dir(string path, string type)
{
	long long hFile = 0;
	struct _finddata_t fileInfo;
	string pathName, exdName;
	string result;
	list<string> re;
	// \\* ����Ҫ�������е�����,��ĳ�\\*.txt��ʾ����txt�����ļ�
	if ((hFile = _findfirst(pathName.assign(path).append(type).c_str(), &fileInfo)) == -1) {
		return re;
	}
	do
	{
		//�ж��ļ����������ļ��л����ļ�
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
//��ȡ�ļ�·����ĳ�������ļ�����Ŀ
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
//ѡ������Ϣ���ڵ��������yesdataʱ����true���෴����false
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
//��ȡ��ǰϵͳʱ��
string MainWindow::gettime()
{
	string pt = "";
	SYSTEMTIME st = { 0 };
	GetLocalTime(&st);
	pt += std::to_string(st.wYear) + "-" + std::to_string(st.wMonth) + "-" + std::to_string(st.wDay) + " " + std::to_string(st.wHour) + ":" + std::to_string(st.wMinute) + ":" + std::to_string(st.wSecond);
	return pt;
}
//���رմ���ʱ�ȼ���Ƿ���δ�ϴ�����
void MainWindow::closeEvent(QCloseEvent *event)
{
	//����Ƿ���δ�ϴ����½�������������Ϊnewcase��txt�ļ�
	//�����ļ���
	list<string> patient_list = dir(".\\patients", "\\*");
	//���ݻ����б����ѭ�������ļ�
	list<string>::iterator i;
	for (i = patient_list.begin(); i != patient_list.end(); i++)
	{
		//��ȡ�����ļ����µ��½������ļ���Ŀ
		if (dirnum(".\\patients\\" + *i+"\\newcase.txt") > 0)
		{
			QString qtitle = str_to_qstr("��ʾ");
			QString qmess = str_to_qstr("��ǰ������δ�ϴ����½������������ϴ�!");
			QMessageBox::warning(NULL, qtitle, qmess, QMessageBox::Yes | QMessageBox::Yes);
			//����δ�ϴ����½������ͺ��ӹرմ��ڶ���
			event->ignore();
			return;
		}
	}
	//ѭ��������û�з���δ�ϴ��½���������ֱ���˳�
	event->accept();
}



