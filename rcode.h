#pragma once
#include <QWidget>
#include "ui_rcode.h"
#include "osapi/osapi.h"
#include <QDialog>
#include <qstring.h>
#include <qthread.h>
#include "Global.h"
#include "jsoncpp/json.h"
extern class recvrcode;
extern struct PatientInfo AddInfo;
class rcode : public QDialog
{
	Q_OBJECT

public:
	rcode(QWidget *parent = Q_NULLPTR);
	~rcode();
signals:
	void scannedrcode();
private:
	Ui::rcode *ui;
	//接收线程对象
	recvrcode * s;
	//当关闭对话框时更改rcode_open参数
	void closeEvent(QCloseEvent *event);
public:
	void scanned() { emit scannedrcode(); }
	void set_server(recvrcode* s) { this->s = s; }
};
//Qt线程
class recvrcode :public QThread
{
	std::string localIP;
	rcode* doc_rcode;
	int localPort;
public:
	recvrcode(std::string localIP, int localPort, rcode* doc_rcode);
	void run(); //声明继承于QThread虚函数 run()
};
