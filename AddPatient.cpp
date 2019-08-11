#include "AddPatient.h"
AddPatient::AddPatient(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//������ά�봰��
	this->doc_rcode = new rcode();
	//�������ճ���
	s = new recvrcode("127.0.0.1", 10010, doc_rcode);
	//���߳�
	doc_rcode->set_server(s);
	s->start();
	connect(ui.patientSave, SIGNAL(clicked()), this, SLOT(on_patientSave_triggered()));
	connect(ui.patientCancel, SIGNAL(clicked()), this, SLOT(on_patientCancel_triggered()));
	connect(ui.codecreate, SIGNAL(clicked()), this, SLOT(on_rcode_clicked()));
	connect(this->doc_rcode,SIGNAL(scannedrcode()),this,SLOT(on_rcode_scanned()));
}

AddPatient::~AddPatient()
{
}

void AddPatient::on_patientSave_clicked()
{
	emit sendData(ui.lineEdit_Number->text(),ui.lineEdit_Name->text(),ui.comboBox_sex->currentText(), ui.lineEdit_4->text());
	close();
}
void AddPatient::on_patientCancel_clicked() 
{
	close();
}
void AddPatient::on_rcode_clicked()
{
	//���ж�ά��Ի���
	doc_rcode->show();
}
void AddPatient::on_rcode_scanned()
{
	this->doc_rcode->close();
	//�������
	ui.lineEdit_Name->setText(AddInfo.name);
	//���֤�������
	ui.lineEdit_4->setText(AddInfo.Id);
	//�Ա����
	ui.comboBox_sex->setCurrentIndex(AddInfo.sex=="��"?0:1);
}
