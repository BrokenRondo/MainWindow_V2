#include "rcode.h"
rcode::rcode(QWidget *parent)
	: QDialog(parent), ui(new Ui::rcode)
{
	ui->setupUi(this);
}

rcode::~rcode()
{
}
void rcode::closeEvent(QCloseEvent *event)
{
	emit scannedrcode();
}
recvrcode::recvrcode(std::string localIP, int localPort, rcode* doc_rcode)
{
	this->localIP = localIP; this->localPort = localPort; this->doc_rcode = doc_rcode; 
}
void recvrcode::run()
{
	OS_TcpSocket server_sock;
	OS_SockAddr sock_addr(localIP.c_str(), localPort);
	server_sock.Open(sock_addr);
	server_sock.Listen();
	OS_Thread::Msleep(5);
	while (1)
	{
		OS_TcpSocket work_sock;
		if (server_sock.Accept(&work_sock) < 0)
		{
			break;
		}
		char buf[1024 * 512];
		int n;
		std::string end;
		n = work_sock.Recv(buf, 1024 * 512);//接收客户端信息
		if (n <= 0)
			break;
		buf[n] = 0;
		//解析患者信息
		Json::Value root;
		Json::Reader reader;
		if (reader.parse(buf, root))
		{
			AddInfo.name = QString::fromLocal8Bit(root["name"].asString().c_str());
			AddInfo.Id = QString::fromLocal8Bit(root["ID"].asString().c_str());
			AddInfo.sex = QString::fromLocal8Bit(root["sex"].asString().c_str());
			//回应客户端信息
			strcpy_s(buf, "GETIT");
			n = strlen(buf);
			work_sock.Send(buf, n);
			this->doc_rcode->scanned();
		}
	}
	server_sock.Close();
}


