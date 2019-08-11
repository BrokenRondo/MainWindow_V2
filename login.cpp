#include "login.h"

#define LOGIN_IP "192.168.43.82"
#define LOGIN_PORT 10068
DOCTOR doctor_data = DOCTOR();
login::login(QWidget *parent):QDialog(parent),ui(new Ui::login)
{
	ui->setupUi(this);
	//�������������ʱΪ�ڵ�
	ui->lineEdit_password->setEchoMode(QLineEdit::Password);
	//����¼��ť����¼���������֤��
	connect(ui->loginBtn, SIGNAL(clicked()), this, SLOT(on_loginBtn_clicked()), Qt::UniqueConnection);
	//���û�ӭ�ʵ���ɫ
	ui->label_welcome->setStyleSheet("color:#3B0B17;");
	//���û�ӭ�ʵ������С
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
	//��������ʾ��Ϣ
	ui->label_tipID->setText("");
	ui->label_tippassword->setText("");
	//�ж��û����Ƿ�Ϊ��
	if (ui->lineEdit_ID->text() == "")
	{
		ui->label_tipID->setText(QString::fromLocal8Bit("�û�������Ϊ��"));
		ui->label_tipID->setStyleSheet("color:red;");
		return;
	}
	//�ж������Ƿ�Ϊ��
	if (ui->lineEdit_password->text() == "")
	{
		ui->label_tippassword->setText(QString::fromLocal8Bit("����д����"));
		ui->label_tippassword->setStyleSheet("color:red;");
		return;
	}
	//������֤������������������ж��û������Ƿ���ȷ
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
		QMessageBox::warning(NULL, QStringLiteral("��ʾ"), QStringLiteral("�޷����ӷ�������"), QMessageBox::Yes);
		Client->Close();
		delete Client;
		return;
	}
	//����
	char buf[1024];
	strcpy(buf, login_data.c_str());
	int n = strlen(buf);
	Client->Send(buf, n);
	//����
	n = Client->Recv(buf,1024);
	if (-1 == n)
	{
		QMessageBox::warning(NULL, QStringLiteral("��ʾ"), QStringLiteral("δ�ܽ�����Ӧ��"), QMessageBox::Yes);
		Client->Close();
		delete Client;
		return;
	}
	buf[n] = 0;
	Json::Value res;
	Json::Reader reader;
	if (!reader.parse(buf, res))
	{
		QMessageBox::warning(NULL, QStringLiteral("��ʾ"), QStringLiteral("����ķ�����Ϣ��"), QMessageBox::Yes);
		Client->Close();
		delete Client;
		return;
	}
	if ("login" == res["res"].asString() && "yes" == res["result"].asString() && doc_id == res["doc_id"].asString())
	{
		//����ҽ����Ϣ
		doc_id = res["doc_id"].asString();
		doc_name = res["doc_name"].asString();
		doctor_data.ID = QString::fromLocal8Bit(doc_id.c_str());
		doctor_data.name = QString::fromLocal8Bit(doc_name.c_str());
		//����ҽ��ID��ά��
		//��ʼ��Python����
		//Py_Initialize();
		////ִ��python���
		//PyRun_SimpleString("import sys");
		//PyRun_SimpleString("sys.path.append(r'')");
		//PyRun_SimpleString("from codecreate import codecreate");
		//std::string r = "codecreate('" + doctor_data.ID.toLocal8Bit() + "')";
		//PyRun_SimpleString(r.c_str());
		////�ر�python����
		//Py_Finalize();
		//������ݣ��رսӿ�;
		Client->Close();
		delete Client;
		//��������
		accept();
		return;
	}
	else
	{
		ui->label_tippassword->setText(QString::fromLocal8Bit("�û�ID���������"));
		ui->label_tippassword->setStyleSheet("color:red;");
		ui->lineEdit_password->clear();
		Client->Close();
		delete Client;
		return;
	}
}