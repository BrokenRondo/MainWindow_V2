#pragma once
#include <qmainwindow.h>
#include <QDialog>
#include "rcode.h"
#include "ui_AddPatient.h"
#include "Global.h"
extern struct PatientInfo AddInfo;
class AddPatient : public QDialog
{
	Q_OBJECT

public:
	AddPatient(QWidget *parent = Q_NULLPTR);
	~AddPatient();
private:
	Ui::AddPatient ui;
	rcode* doc_rcode;
	recvrcode * s;
signals:
	void sendData(QString number,QString name, QString sex,QString ID);
private slots:
	void on_patientSave_clicked();
	void on_patientCancel_clicked();
	void on_rcode_clicked();//点击后弹出二维码并执行监听程序
	void on_rcode_scanned();//二维码被扫描
};

