/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QPushButton *loginBtn;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_password;
    QLabel *label_ID;
    QLabel *label_password;
    QLabel *label_tipID;
    QLabel *label_tippassword;
    QLabel *label_welcome;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(400, 280);
        login->setSizeGripEnabled(false);
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 400, 180));
        label->setPixmap(QPixmap(QString::fromUtf8("Resources/login.jpg")));
        loginBtn = new QPushButton(login);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(160, 250, 80, 25));
        lineEdit_ID = new QLineEdit(login);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(142, 190, 151, 20));
        lineEdit_password = new QLineEdit(login);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(142, 220, 151, 20));
        label_ID = new QLabel(login);
        label_ID->setObjectName(QStringLiteral("label_ID"));
        label_ID->setGeometry(QRect(60, 190, 54, 20));
        label_ID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_password = new QLabel(login);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(60, 220, 54, 20));
        label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_tipID = new QLabel(login);
        label_tipID->setObjectName(QStringLiteral("label_tipID"));
        label_tipID->setGeometry(QRect(300, 190, 91, 20));
        label_tippassword = new QLabel(login);
        label_tippassword->setObjectName(QStringLiteral("label_tippassword"));
        label_tippassword->setGeometry(QRect(300, 220, 91, 20));
        label_welcome = new QLabel(login);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(60, 61, 280, 61));
        label_welcome->setAlignment(Qt::AlignCenter);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "\347\231\273\351\231\206", nullptr));
        label->setText(QString());
        loginBtn->setText(QApplication::translate("login", "\347\231\273\351\231\206", nullptr));
        label_ID->setText(QApplication::translate("login", "\350\264\246\345\217\267", nullptr));
        label_password->setText(QApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        label_tipID->setText(QString());
        label_tippassword->setText(QString());
        label_welcome->setText(QApplication::translate("login", "\345\214\272\345\235\227\351\223\276\347\224\265\345\255\220\347\227\205\345\216\206\345\255\230\345\202\250\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
