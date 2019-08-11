#include "UploadThread.h"
UploadThread::UploadThread(string datat)
{
	data = datat;
}
int UploadThread::Routine()
{
	OS_TcpSocket sock;//�ͻ��˽ӿ�
	sock.Open();//�����ӿ�
	//���ӷ�����
	OS_SockAddr ser_addr("192.168.31.1", 10110);
	if (sock.Connect(ser_addr) < 0)//δ�ɹ�����
	{
		return -1;
	}
	OS_SockAddr local("192.168.31.1", 10015);
	char buf[1024 * 512];//������
	int n = data.size();
	memcpy(buf, data.c_str(), data.size());
	sock.Send(buf, n);//���ͻ�����ǰn���ֽ�
	sock.Close();
	return 0;
}