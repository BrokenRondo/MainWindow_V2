/********************************************************************************
** Form generated from reading UI file 'AddPatient.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPATIENT_H
#define UI_ADDPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddPatient
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox_sex;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_25;
    QLineEdit *lineEdit_4;
    QFrame *line;
    QLineEdit *lineEdit_Number;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_Name;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_26;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QComboBox *comboBox_birthCity;
    QLabel *label_8;
    QComboBox *comboBox_birthCounty;
    QLabel *label_9;
    QComboBox *comboBox_birthDis;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_27;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_4;
    QComboBox *comboBox_nation;
    QLabel *label_5;
    QComboBox *comboBox_jib;
    QLabel *label_6;
    QComboBox *comboBox_marriage;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QComboBox *comboBox_17;
    QLabel *label_14;
    QComboBox *comboBox_18;
    QLabel *label_15;
    QComboBox *comboBox_19;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_28;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QComboBox *comboBox_14;
    QLabel *label_11;
    QComboBox *comboBox_15;
    QLabel *label_12;
    QComboBox *comboBox_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_29;
    QComboBox *comboBox_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_30;
    QDateTimeEdit *dateTimeEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_17;
    QLineEdit *lineEdit_3;
    QLabel *label_16;
    QLineEdit *lineEdit_5;
    QLabel *label_18;
    QComboBox *comboBox;
    QLabel *label_19;
    QLineEdit *lineEdit_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_21;
    QLineEdit *lineEdit_7;
    QLabel *label_22;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_20;
    QLineEdit *lineEdit_6;
    QLabel *label_23;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label_24;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *patientSave;
    QSpacerItem *horizontalSpacer;
    QPushButton *patientCancel;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *codecreate;

    void setupUi(QDialog *AddPatient)
    {
        if (AddPatient->objectName().isEmpty())
            AddPatient->setObjectName(QStringLiteral("AddPatient"));
        AddPatient->resize(861, 252);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddPatient->sizePolicy().hasHeightForWidth());
        AddPatient->setSizePolicy(sizePolicy);
        AddPatient->setMinimumSize(QSize(800, 250));
        AddPatient->setMaximumSize(QSize(861, 252));
        AddPatient->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(AddPatient);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox_sex = new QComboBox(AddPatient);
        comboBox_sex->addItem(QString());
        comboBox_sex->addItem(QString());
        comboBox_sex->setObjectName(QStringLiteral("comboBox_sex"));

        gridLayout->addWidget(comboBox_sex, 0, 5, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_25 = new QLabel(AddPatient);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_5->addWidget(label_25);

        lineEdit_4 = new QLineEdit(AddPatient);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_5->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_5, 0, 7, 1, 1);

        line = new QFrame(AddPatient);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 6, 8, 1);

        lineEdit_Number = new QLineEdit(AddPatient);
        lineEdit_Number->setObjectName(QStringLiteral("lineEdit_Number"));
        sizePolicy.setHeightForWidth(lineEdit_Number->sizePolicy().hasHeightForWidth());
        lineEdit_Number->setSizePolicy(sizePolicy);
        lineEdit_Number->setMinimumSize(QSize(100, 0));
        lineEdit_Number->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit_Number, 0, 1, 1, 1);

        label_2 = new QLabel(AddPatient);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(AddPatient);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_Name = new QLineEdit(AddPatient);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_Name->sizePolicy().hasHeightForWidth());
        lineEdit_Name->setSizePolicy(sizePolicy1);
        lineEdit_Name->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(lineEdit_Name, 0, 3, 1, 1);

        label_3 = new QLabel(AddPatient);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_26 = new QLabel(AddPatient);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_6->addWidget(label_26);

        comboBox_4 = new QComboBox(AddPatient);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_6->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(AddPatient);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        horizontalLayout_6->addWidget(comboBox_5);


        gridLayout->addLayout(horizontalLayout_6, 1, 7, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_7 = new QLabel(AddPatient);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_13->addWidget(label_7);

        comboBox_birthCity = new QComboBox(AddPatient);
        comboBox_birthCity->addItem(QString());
        comboBox_birthCity->addItem(QString());
        comboBox_birthCity->addItem(QString());
        comboBox_birthCity->addItem(QString());
        comboBox_birthCity->addItem(QString());
        comboBox_birthCity->addItem(QString());
        comboBox_birthCity->setObjectName(QStringLiteral("comboBox_birthCity"));
        comboBox_birthCity->setEditable(true);

        horizontalLayout_13->addWidget(comboBox_birthCity);

        label_8 = new QLabel(AddPatient);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(40, 0));

        horizontalLayout_13->addWidget(label_8);

        comboBox_birthCounty = new QComboBox(AddPatient);
        comboBox_birthCounty->setObjectName(QStringLiteral("comboBox_birthCounty"));
        comboBox_birthCounty->setEditable(true);

        horizontalLayout_13->addWidget(comboBox_birthCounty);

        label_9 = new QLabel(AddPatient);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(40, 0));

        horizontalLayout_13->addWidget(label_9);

        comboBox_birthDis = new QComboBox(AddPatient);
        comboBox_birthDis->setObjectName(QStringLiteral("comboBox_birthDis"));
        comboBox_birthDis->setEditable(true);

        horizontalLayout_13->addWidget(comboBox_birthDis);


        gridLayout->addLayout(horizontalLayout_13, 2, 0, 1, 6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_27 = new QLabel(AddPatient);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_7->addWidget(label_27);

        comboBox_2 = new QComboBox(AddPatient);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_7->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(AddPatient);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_7->addWidget(comboBox_3);


        gridLayout->addLayout(horizontalLayout_7, 2, 7, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_4 = new QLabel(AddPatient);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_12->addWidget(label_4);

        comboBox_nation = new QComboBox(AddPatient);
        comboBox_nation->addItem(QString());
        comboBox_nation->addItem(QString());
        comboBox_nation->setObjectName(QStringLiteral("comboBox_nation"));
        comboBox_nation->setEditable(true);

        horizontalLayout_12->addWidget(comboBox_nation);

        label_5 = new QLabel(AddPatient);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(40, 0));

        horizontalLayout_12->addWidget(label_5);

        comboBox_jib = new QComboBox(AddPatient);
        comboBox_jib->setObjectName(QStringLiteral("comboBox_jib"));
        comboBox_jib->setEditable(true);

        horizontalLayout_12->addWidget(comboBox_jib);

        label_6 = new QLabel(AddPatient);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(40, 0));

        horizontalLayout_12->addWidget(label_6);

        comboBox_marriage = new QComboBox(AddPatient);
        comboBox_marriage->addItem(QString());
        comboBox_marriage->addItem(QString());
        comboBox_marriage->addItem(QString());
        comboBox_marriage->addItem(QString());
        comboBox_marriage->setObjectName(QStringLiteral("comboBox_marriage"));

        horizontalLayout_12->addWidget(comboBox_marriage);


        gridLayout->addLayout(horizontalLayout_12, 1, 0, 1, 6);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_13 = new QLabel(AddPatient);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_15->addWidget(label_13);

        comboBox_17 = new QComboBox(AddPatient);
        comboBox_17->setObjectName(QStringLiteral("comboBox_17"));
        comboBox_17->setEditable(true);

        horizontalLayout_15->addWidget(comboBox_17);

        label_14 = new QLabel(AddPatient);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(40, 0));

        horizontalLayout_15->addWidget(label_14);

        comboBox_18 = new QComboBox(AddPatient);
        comboBox_18->setObjectName(QStringLiteral("comboBox_18"));
        comboBox_18->setEditable(true);

        horizontalLayout_15->addWidget(comboBox_18);

        label_15 = new QLabel(AddPatient);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(40, 0));

        horizontalLayout_15->addWidget(label_15);

        comboBox_19 = new QComboBox(AddPatient);
        comboBox_19->setObjectName(QStringLiteral("comboBox_19"));
        comboBox_19->setEditable(true);

        horizontalLayout_15->addWidget(comboBox_19);


        gridLayout->addLayout(horizontalLayout_15, 4, 0, 1, 6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_28 = new QLabel(AddPatient);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_8->addWidget(label_28);

        lineEdit_12 = new QLineEdit(AddPatient);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        horizontalLayout_8->addWidget(lineEdit_12);


        gridLayout->addLayout(horizontalLayout_8, 3, 7, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_10 = new QLabel(AddPatient);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_14->addWidget(label_10);

        comboBox_14 = new QComboBox(AddPatient);
        comboBox_14->setObjectName(QStringLiteral("comboBox_14"));
        comboBox_14->setEditable(true);

        horizontalLayout_14->addWidget(comboBox_14);

        label_11 = new QLabel(AddPatient);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(40, 0));

        horizontalLayout_14->addWidget(label_11);

        comboBox_15 = new QComboBox(AddPatient);
        comboBox_15->setObjectName(QStringLiteral("comboBox_15"));
        comboBox_15->setEditable(true);

        horizontalLayout_14->addWidget(comboBox_15);

        label_12 = new QLabel(AddPatient);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(40, 0));

        horizontalLayout_14->addWidget(label_12);

        comboBox_16 = new QComboBox(AddPatient);
        comboBox_16->setObjectName(QStringLiteral("comboBox_16"));
        comboBox_16->setEditable(true);

        horizontalLayout_14->addWidget(comboBox_16);


        gridLayout->addLayout(horizontalLayout_14, 3, 0, 1, 6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_29 = new QLabel(AddPatient);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_9->addWidget(label_29);

        comboBox_6 = new QComboBox(AddPatient);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        horizontalLayout_9->addWidget(comboBox_6);


        gridLayout->addLayout(horizontalLayout_9, 4, 7, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_30 = new QLabel(AddPatient);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_10->addWidget(label_30);

        dateTimeEdit = new QDateTimeEdit(AddPatient);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        horizontalLayout_10->addWidget(dateTimeEdit);


        gridLayout->addLayout(horizontalLayout_10, 5, 7, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_17 = new QLabel(AddPatient);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(99, 0));

        horizontalLayout_3->addWidget(label_17);

        lineEdit_3 = new QLineEdit(AddPatient);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        label_16 = new QLabel(AddPatient);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMaximumSize(QSize(100000, 16777215));

        horizontalLayout_3->addWidget(label_16);

        lineEdit_5 = new QLineEdit(AddPatient);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_3->addWidget(lineEdit_5);

        label_18 = new QLabel(AddPatient);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_3->addWidget(label_18);

        comboBox = new QComboBox(AddPatient);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(true);

        horizontalLayout_3->addWidget(comboBox);

        label_19 = new QLabel(AddPatient);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_3->addWidget(label_19);

        lineEdit_11 = new QLineEdit(AddPatient);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        horizontalLayout_3->addWidget(lineEdit_11);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_21 = new QLabel(AddPatient);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(99, 0));

        horizontalLayout_4->addWidget(label_21);

        lineEdit_7 = new QLineEdit(AddPatient);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_4->addWidget(lineEdit_7);

        label_22 = new QLabel(AddPatient);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(label_22);

        lineEdit_8 = new QLineEdit(AddPatient);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_4->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_20 = new QLabel(AddPatient);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(99, 0));

        horizontalLayout_2->addWidget(label_20);

        lineEdit_6 = new QLineEdit(AddPatient);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_2->addWidget(lineEdit_6);

        label_23 = new QLabel(AddPatient);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_2->addWidget(label_23);

        lineEdit_9 = new QLineEdit(AddPatient);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_2->addWidget(lineEdit_9);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_24 = new QLabel(AddPatient);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(99, 0));

        horizontalLayout->addWidget(label_24);

        lineEdit_10 = new QLineEdit(AddPatient);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        horizontalLayout->addWidget(lineEdit_10);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 5, 0, 3, 6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_2 = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        patientSave = new QPushButton(AddPatient);
        patientSave->setObjectName(QStringLiteral("patientSave"));

        horizontalLayout_11->addWidget(patientSave);

        horizontalSpacer = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        patientCancel = new QPushButton(AddPatient);
        patientCancel->setObjectName(QStringLiteral("patientCancel"));

        horizontalLayout_11->addWidget(patientCancel);


        gridLayout->addLayout(horizontalLayout_11, 7, 7, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_3);

        codecreate = new QPushButton(AddPatient);
        codecreate->setObjectName(QStringLiteral("codecreate"));

        horizontalLayout_16->addWidget(codecreate);


        gridLayout->addLayout(horizontalLayout_16, 6, 7, 1, 1);


        retranslateUi(AddPatient);

        QMetaObject::connectSlotsByName(AddPatient);
    } // setupUi

    void retranslateUi(QDialog *AddPatient)
    {
        AddPatient->setWindowTitle(QApplication::translate("AddPatient", "\346\267\273\345\212\240\347\227\205\344\272\272", nullptr));
        comboBox_sex->setItemText(0, QApplication::translate("AddPatient", "\347\224\267", nullptr));
        comboBox_sex->setItemText(1, QApplication::translate("AddPatient", "\345\245\263", nullptr));

        label_25->setText(QApplication::translate("AddPatient", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_2->setText(QApplication::translate("AddPatient", "\345\247\223\345\220\215", nullptr));
        label->setText(QApplication::translate("AddPatient", "\344\275\217\351\231\242\345\217\267    ", nullptr));
        label_3->setText(QApplication::translate("AddPatient", "\346\200\247\345\210\253", nullptr));
        label_26->setText(QApplication::translate("AddPatient", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("AddPatient", "1990", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("AddPatient", "1991", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("AddPatient", "1992", nullptr));
        comboBox_4->setItemText(3, QApplication::translate("AddPatient", "1993", nullptr));
        comboBox_4->setItemText(4, QApplication::translate("AddPatient", "1994", nullptr));
        comboBox_4->setItemText(5, QApplication::translate("AddPatient", "1995", nullptr));
        comboBox_4->setItemText(6, QApplication::translate("AddPatient", "1996", nullptr));
        comboBox_4->setItemText(7, QApplication::translate("AddPatient", "1997", nullptr));
        comboBox_4->setItemText(8, QApplication::translate("AddPatient", "1998", nullptr));
        comboBox_4->setItemText(9, QApplication::translate("AddPatient", "1999", nullptr));
        comboBox_4->setItemText(10, QApplication::translate("AddPatient", "2000", nullptr));

        comboBox_5->setItemText(0, QApplication::translate("AddPatient", "\344\270\200\346\234\210", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("AddPatient", "\344\272\214\346\234\210", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("AddPatient", "\344\270\211\346\234\210", nullptr));
        comboBox_5->setItemText(3, QApplication::translate("AddPatient", "\345\233\233\346\234\210", nullptr));
        comboBox_5->setItemText(4, QApplication::translate("AddPatient", "\344\272\224\346\234\210", nullptr));
        comboBox_5->setItemText(5, QApplication::translate("AddPatient", "\345\205\255\346\234\210", nullptr));
        comboBox_5->setItemText(6, QApplication::translate("AddPatient", "\344\270\203\346\234\210", nullptr));
        comboBox_5->setItemText(7, QApplication::translate("AddPatient", "\345\205\253\346\234\210", nullptr));
        comboBox_5->setItemText(8, QApplication::translate("AddPatient", "\344\271\235\346\234\210", nullptr));
        comboBox_5->setItemText(9, QApplication::translate("AddPatient", "\345\215\201\346\234\210", nullptr));
        comboBox_5->setItemText(10, QApplication::translate("AddPatient", "\345\215\201\344\270\200\346\234\210", nullptr));
        comboBox_5->setItemText(11, QApplication::translate("AddPatient", "\345\215\201\344\272\214\346\234\210", nullptr));

        label_7->setText(QApplication::translate("AddPatient", "\345\207\272\347\224\237\345\234\260    ", nullptr));
        comboBox_birthCity->setItemText(0, QApplication::translate("AddPatient", "\345\214\227\344\272\254", nullptr));
        comboBox_birthCity->setItemText(1, QApplication::translate("AddPatient", "\346\271\226\345\215\227", nullptr));
        comboBox_birthCity->setItemText(2, QApplication::translate("AddPatient", "\346\271\226\345\214\227", nullptr));
        comboBox_birthCity->setItemText(3, QApplication::translate("AddPatient", "\345\271\277\344\270\234", nullptr));
        comboBox_birthCity->setItemText(4, QApplication::translate("AddPatient", "\346\262\263\345\215\227", nullptr));
        comboBox_birthCity->setItemText(5, QApplication::translate("AddPatient", "\346\262\263\345\214\227", nullptr));

        label_8->setText(QApplication::translate("AddPatient", "\347\234\201/\345\270\202   ", nullptr));
        label_9->setText(QApplication::translate("AddPatient", "\345\270\202\357\274\210\345\216\277\357\274\211    \345\214\272\357\274\232", nullptr));
        label_27->setText(QApplication::translate("AddPatient", "\347\261\215\350\264\257", nullptr));
        label_4->setText(QApplication::translate("AddPatient", "\346\260\221\346\227\217      ", nullptr));
        comboBox_nation->setItemText(0, QApplication::translate("AddPatient", "\346\261\211", nullptr));
        comboBox_nation->setItemText(1, QApplication::translate("AddPatient", "\350\213\227", nullptr));

        label_5->setText(QApplication::translate("AddPatient", "\350\201\214\344\270\232", nullptr));
        label_6->setText(QApplication::translate("AddPatient", "\345\251\232\345\247\273", nullptr));
        comboBox_marriage->setItemText(0, QApplication::translate("AddPatient", "\346\234\252\345\251\232", nullptr));
        comboBox_marriage->setItemText(1, QApplication::translate("AddPatient", "\345\267\262\345\251\232", nullptr));
        comboBox_marriage->setItemText(2, QApplication::translate("AddPatient", "\347\246\273\345\274\202", nullptr));
        comboBox_marriage->setItemText(3, QApplication::translate("AddPatient", "\344\270\247\345\201\266", nullptr));

        label_13->setText(QApplication::translate("AddPatient", "\346\210\267\345\217\243\345\234\260\345\235\200  ", nullptr));
        label_14->setText(QApplication::translate("AddPatient", "\347\234\201/\345\270\202", nullptr));
        label_15->setText(QApplication::translate("AddPatient", "\345\270\202\357\274\210\345\216\277\357\274\211    \345\214\272\357\274\232", nullptr));
        label_28->setText(QApplication::translate("AddPatient", "\347\224\265\350\257\235    ", nullptr));
        label_10->setText(QApplication::translate("AddPatient", "\347\216\260\344\275\217\345\235\200    ", nullptr));
        label_11->setText(QApplication::translate("AddPatient", "\347\234\201/\345\270\202 ", nullptr));
        label_12->setText(QApplication::translate("AddPatient", "\345\270\202\357\274\210\345\216\277\357\274\211    \345\214\272\357\274\232", nullptr));
        label_29->setText(QApplication::translate("AddPatient", "\345\205\245\351\231\242\351\200\224\345\276\204", nullptr));
        label_30->setText(QApplication::translate("AddPatient", "\345\205\245\351\231\242\346\227\266\351\227\264", nullptr));
        label_17->setText(QApplication::translate("AddPatient", "\350\201\224\347\263\273\344\272\272    ", nullptr));
        label_16->setText(QApplication::translate("AddPatient", "\345\267\245\344\275\234\345\215\225\344\275\215", nullptr));
        label_18->setText(QApplication::translate("AddPatient", "\345\205\263\347\263\273", nullptr));
        label_19->setText(QApplication::translate("AddPatient", "\347\224\265\350\257\235", nullptr));
        label_21->setText(QApplication::translate("AddPatient", "\347\227\205\346\210\277      ", nullptr));
        label_22->setText(QApplication::translate("AddPatient", "\345\272\212\345\217\267\357\274\232", nullptr));
        label_20->setText(QApplication::translate("AddPatient", "\344\275\217\351\231\242\347\247\221\345\256\244  ", nullptr));
        label_23->setText(QApplication::translate("AddPatient", "\344\270\273\346\262\273\345\214\273\345\270\210\357\274\232", nullptr));
        label_24->setText(QApplication::translate("AddPatient", "\344\270\273\350\257\211      ", nullptr));
        patientSave->setText(QApplication::translate("AddPatient", "\344\277\235\345\255\230", nullptr));
        patientCancel->setText(QApplication::translate("AddPatient", "\345\217\226\346\266\210", nullptr));
        codecreate->setText(QApplication::translate("AddPatient", "\346\211\253\346\217\217\344\272\214\347\273\264\347\240\201\350\207\252\345\212\250\345\241\253\345\206\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPatient: public Ui_AddPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPATIENT_H
