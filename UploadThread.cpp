#include "UploadThread.h"
UploadThread::UploadThread(string datat)
{
	data = datat;
}
int UploadThread::Routine()
{
	OS_TcpSocket sock;//客户端接口
	sock.Open();//开启接口
	//连接服务器
	OS_SockAddr ser_addr("192.168.31.1", 10110);
	if (sock.Connect(ser_addr) < 0)//未成功连接
	{
		return -1;
	}
	OS_SockAddr local("192.168.31.1", 10015);
	char buf[1024 * 512];//缓冲区
	int n = data.size();
	memcpy(buf, data.c_str(), data.size());
	sock.Send(buf, n);//发送缓冲区前n个字节
	sock.Close();
	return 0;
}