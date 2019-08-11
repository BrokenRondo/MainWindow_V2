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
	//�����̶߳���
	recvrcode * s;
	//���رնԻ���ʱ����rcode_open����
	void closeEvent(QCloseEvent *event);
public:
	void scanned() { emit scannedrcode(); }
	void set_server(recvrcode* s) { this->s = s; }
};
//Qt�߳�
class recvrcode :public QThread
{
	std::string localIP;
	rcode* doc_rcode;
	int localPort;
public:
	recvrcode(std::string localIP, int localPort, rcode* doc_rcode);
	void run(); //�����̳���QThread�麯�� run()
};
