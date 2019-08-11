#include "login.h"

#define LOGIN_IP "192.168.43.82"
#define LOGIN_PORT 10068
DOCTOR doctor_data = DOCTOR();
login::login(QWidget *parent):QDialog(parent),ui(new Ui::login)
{
	ui->setupUi(this);
	//设置密码框输入时为黑点
	ui->lineEdit_password->setEchoMode(QLineEdit::Password);
	//将登录按钮点击事件与密码验证绑定
	connect(ui->loginBtn, SIGNAL(clicked()), this, SLOT(on_loginBtn_clicked()), Qt::UniqueConnection);
	//设置欢迎词的颜色
	ui->label_welcome->setStyleSheet("color:#3B0B17;");
	//设置欢迎词的字体大小
	QFont ft;
	ft.setPointSize(15);
	ui->label_welcome->setFont(ft);
}
login::~login()
{
	delete ui;
}
void login::on_loginBtn_clicked()
{
	//先重置提示信息
	ui->label_tipID->setText("");
	ui->label_tippassword->setText("");
	//判断用户名是否为空
	if (ui->lineEdit_ID->text() == "")
	{
		ui->label_tipID->setText(QString::fromLocal8Bit("用户名不能为空"));
		ui->label_tipID->setStyleSheet("color:red;");
		return;
	}
	//判断密码是否为空
	if (ui->lineEdit_password->text() == "")
	{
		ui->label_tippassword->setText(QString::fromLocal8Bit("请填写密码"));
		ui->label_tippassword->setStyleSheet("color:red;");
		return;
	}
	//进行验证，向服务器发送数据判断用户密码是否正确
	std::string doc_id= ui->lineEdit_ID->text().toLocal8Bit();
	std::string key= ui->lineEdit_password->text().toLocal8Bit();
	MD5* md5 = new  MD5(key);
	key = md5->hexdigest();
	key = key.substr(0, 20);
	std::string doc_name;
	Json::Value req;
	req["req"] = "login";
	req["doc_id"] = doc_id;
	req["key"] = key;
	Json::StyledWriter swriter;
	std::string login_data = swriter.write(req);
	OS_TcpSocket* Client = new OS_TcpSocket();
	Client->SetOpt_RecvTimeout(3000);
	Client->SetOpt_SendTimeout(3000);
	Client->Open();
	OS_SockAddr Serveraddr(LOGIN_IP, LOGIN_PORT);
	if (Client->Connect(Serveraddr) < 0)
	{
		QMessageBox::warning(NULL, QStringLiteral("提示"), QStringLiteral("无法连接服务器！"), QMessageBox::Yes);
		Client->Close();
		delete Client;
		return;
	}
	//发送
	char buf[1024];
	strcpy(buf, login_data.c_str());
	int n = strlen(buf);
	Client->Send(buf, n);
	//接收
	n = Client->Recv(buf,1024);
	if (-1 == n)
	{
		QMessageBox::warning(NULL, QStringLiteral("提示"), QStringLiteral("未能接收响应！"), QMessageBox::Yes);
		Client->Close();
		delete Client;
		return;
	}
	buf[n] = 0;
	Json::Value res;
	Json::Reader reader;
	if (!reader.parse(buf, res))
	{
		QMessageBox::warning(NULL, QStringLiteral("提示"), QStringLiteral("错误的返回信息！"), QMessageBox::Yes);
		Client->Close();
		delete Client;
		return;
	}
	if ("login" == res["res"].asString() && "yes" == res["result"].asString() && doc_id == res["doc_id"].asString())
	{
		//设置医生信息
		doc_id = res["doc_id"].asString();
		doc_name = res["doc_name"].asString();
		doctor_data.ID = QString::fromLocal8Bit(doc_id.c_str());
		doctor_data.name = QString::fromLocal8Bit(doc_name.c_str());
		//生成医生ID二维码
		//初始化Python环境
		//Py_Initialize();
		////执行python语句
		//PyRun_SimpleString("import sys");
		//PyRun_SimpleString("sys.path.append(r'')");
		//PyRun_SimpleString("from codecreate import codecreate");
		//std::string r = "codecreate('" + doctor_data.ID.toLocal8Bit() + "')";
		//PyRun_SimpleString(r.c_str());
		////关闭python环境
		//Py_Finalize();
		//清除数据，关闭接口;
		Client->Close();
		delete Client;
		//结束窗口
		accept();
		return;
	}
	else
	{
		ui->label_tippassword->setText(QString::fromLocal8Bit("用户ID或密码错误"));
		ui->label_tippassword->setStyleSheet("color:red;");
		ui->lineEdit_password->clear();
		Client->Close();
		delete Client;
		return;
	}
}