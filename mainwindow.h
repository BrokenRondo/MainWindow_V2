#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QString>
#include <QTreeWidgetItem>
#include<QTextEdit>
#include<QDebug>
#include<QString>
#include<QMenuBar>
#include <qmessagebox.h>
#include <io.h>
#include <sstream>
#include <QTimer>
#include <QTime>
#include <QCloseEvent> 
#include "login.h"
#include "osapi/osapi.h"
#include "jsoncpp/json.h"
#include "UploadThread.h"
using namespace std;
namespace Ui {
class MainWindow;
}
extern DOCTOR doctor_data; 
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
	QString file_path;
	//�½���������·��
	QString newcase_savepath;
	struct PatientInfo    //���������û�����Ϣ��������û�ʱʹ��
	{
		QString number = "";
		QString name = "";
		QString sex = "";
		QString nationality = "";
		QString job = "";
		QString marriage = "";
		QString birthCity = "";
		QString birthCounty = "";
		QString birthDistrict = "";
		QString liveCity = "";
		QString liveCounty = "";
		QString liveDistrict = "";
		QString motherCity = ""; //����
		QString motherCounty = "";
		QString motherDistrict = "";
		QString contactPerson = "";
		QString cttPerson_Workplace = "";
		QString relationship = "";
		QString cttPhone = "";
		QString room = "";
		QString bedNumber = "";
		QString department = "";//����
		QString doctor = "";
		QString zhusu = "";
		QString Id = "";
		QString birthday = "";
		QString origon = "";//����
		QString phone = "";
		QString hospitalWay = "";
		QString hospitalTime = "";
	};
private slots:
    void on_actionnew_record_triggered();
	//������������½��������¼���������
	void on_actionNew_triggered();
	//��������������淢�����¼���������
	void on_actionSave_triggered();
	//������������ϴ��������¼���������
	void on_actionUpload_triggered();
	//��������ģ���¼���������
	void on_actionTemplateOpen_triggered();
	void on_actionTemplateSave_triggered();
	void on_actionTemplateNew_triggered();	
	void on_actionCase_triggered();
	//����������ǩҳ����غ�����������
	void remove_tab();
private:
	//���������Ҳ������б���غ�������������
	void on_actionNewTree_triggered();
	//��������ڵ�
	void create_topitem(string name);
	//�����ӽڵ�
	void create_childitem(std::string name, QTreeWidgetItem* father);
	//ˢ����
	void flushTree();
private slots:
	//�Ҽ�����ڵ���ʾ�½��˵�
	int OnTreeContextMenu(const QPoint& pt);
	//�����������²����˼�Ҫ��Ϣ��������
private:
	void on_actionNewInfo_triggered(QString itemname);
private slots:
	//��������ӽڵ�ʱ��ʾ����
	void showcase();
	//�����������ߵǼ���غ�����������
private:
	//���½��û�ʱ���û���Ϣ���浽json�ļ���
	bool setPatientInfo(PatientInfo *patient);
private slots:
	void receiveData(QString number, QString name, QString sex, QString ID);
	void on_actionAddPatient_triggered();
	//��������һЩ�������Ա����������������
private:
	//��QStringת��Ϊstring
	string qstr_to_str(QString qstr);
	//��stringת��ΪQString
	QString str_to_qstr(string str);
	//�����ļ��в���ȡ�ļ���
	list<string>  dir(string path, string type);
	//��ȡ�ļ�·����ĳ�������ļ�����Ŀ
	int dirnum(string path);
	//ѡ������Ϣ���ڵ��������yesdataʱ����true���෴����false
	bool optionbox(string title, string tipdata,string yesdata,string nodata);
	//��ȡ��ǰϵͳʱ��
	string gettime();
	//���رմ���ʱ�ȼ���Ƿ���δ�ϴ�����
	void closeEvent(QCloseEvent *event);
private slots:
	//������ʾ�׶˵ĵ�ǰʱ��
	void qtimeSlot();
};

#endif // MAINWINDOW_H
