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
	//新建病历保存路径
	QString newcase_savepath;
	struct PatientInfo    //用来保留用户的信息，在添加用户时使用
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
		QString motherCity = ""; //户口
		QString motherCounty = "";
		QString motherDistrict = "";
		QString contactPerson = "";
		QString cttPerson_Workplace = "";
		QString relationship = "";
		QString cttPhone = "";
		QString room = "";
		QString bedNumber = "";
		QString department = "";//科室
		QString doctor = "";
		QString zhusu = "";
		QString Id = "";
		QString birthday = "";
		QString origon = "";//籍贯
		QString phone = "";
		QString hospitalWay = "";
		QString hospitalTime = "";
	};
private slots:
    void on_actionnew_record_triggered();
	//————点击新建发生的事件————
	void on_actionNew_triggered();
	//————点击保存发生的事件————
	void on_actionSave_triggered();
	//————点击上传发生的事件————
	void on_actionUpload_triggered();
	//————模板事件————
	void on_actionTemplateOpen_triggered();
	void on_actionTemplateSave_triggered();
	void on_actionTemplateNew_triggered();	
	void on_actionCase_triggered();
	//————标签页的相关函数————
	void remove_tab();
private:
	//————右侧树形列表相关函数—————
	void on_actionNewTree_triggered();
	//创建顶层节点
	void create_topitem(string name);
	//创建子节点
	void create_childitem(std::string name, QTreeWidgetItem* father);
	//刷新树
	void flushTree();
private slots:
	//右键顶层节点显示新建菜单
	int OnTreeContextMenu(const QPoint& pt);
	//————右下部病人简要信息————
private:
	void on_actionNewInfo_triggered(QString itemname);
private slots:
	//点击患者子节点时显示病历
	void showcase();
	//————患者登记相关函数————
private:
	//在新建用户时将用户信息保存到json文件中
	bool setPatientInfo(PatientInfo *patient);
private slots:
	void receiveData(QString number, QString name, QString sex, QString ID);
	void on_actionAddPatient_triggered();
	//————一些工具类成员函数——————
private:
	//将QString转换为string
	string qstr_to_str(QString qstr);
	//将string转换为QString
	QString str_to_qstr(string str);
	//遍历文件夹并获取文件名
	list<string>  dir(string path, string type);
	//获取文件路径下某中特征文件的数目
	int dirnum(string path);
	//选择性信息窗口弹出，点击yesdata时返回true，相反返回false
	bool optionbox(string title, string tipdata,string yesdata,string nodata);
	//获取当前系统时间
	string gettime();
	//当关闭窗口时先检查是否有未上传病历
	void closeEvent(QCloseEvent *event);
private slots:
	//用来显示底端的当前时间
	void qtimeSlot();
};

#endif // MAINWINDOW_H
