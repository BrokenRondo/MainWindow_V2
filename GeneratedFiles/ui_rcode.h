/********************************************************************************
** Form generated from reading UI file 'rcode.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RCODE_H
#define UI_RCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rcode
{
public:
    QLabel *label;

    void setupUi(QWidget *rcode)
    {
        if (rcode->objectName().isEmpty())
            rcode->setObjectName(QStringLiteral("rcode"));
        rcode->resize(259, 287);
        label = new QLabel(rcode);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 201, 201));
        label->setPixmap(QPixmap(QString::fromUtf8("doc_code.png")));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(rcode);

        QMetaObject::connectSlotsByName(rcode);
    } // setupUi

    void retranslateUi(QWidget *rcode)
    {
        rcode->setWindowTitle(QApplication::translate("rcode", "\344\272\214\347\273\264\347\240\201", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class rcode: public Ui_rcode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RCODE_H
