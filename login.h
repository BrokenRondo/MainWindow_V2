#pragma once
#ifndef LOGIN_H_
#define LOGIN_H_
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>
#include <QDialog>
#include <QMessageBox>
#include "ui_login.h"
#include "jsoncpp/json.h"
#include "osapi/osapi.h"
#include "Python.h"
#include "md5.h"
extern std::string LocalIP;
class DOCTOR
{
public:
	QString name;
	QString ID;
};
class login : public QDialog
{
	Q_OBJECT

public:
	explicit login(QWidget *parent = Q_NULLPTR);
	~login();

private:
	Ui::login *ui;
private slots:
	void on_loginBtn_clicked();
};
#endif // !LOGIN_H_
