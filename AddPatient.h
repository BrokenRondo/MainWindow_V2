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
	void on_rcode_clicked();//����󵯳���ά�벢ִ�м�������
	void on_rcode_scanned();//��ά�뱻ɨ��
};

