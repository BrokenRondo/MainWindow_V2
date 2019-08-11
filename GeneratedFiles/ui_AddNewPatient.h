/********************************************************************************
** Form generated from reading UI file 'AddNewPatient.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPATIENT_H
#define UI_ADDNEWPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddPatient
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter_9;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QFontComboBox *fontComboBox;
    QSplitter *splitter_2;
    QLabel *label_4;
    QFontComboBox *fontComboBox_2;
    QLabel *label_5;
    QFontComboBox *fontComboBox_3;
    QLabel *label_6;
    QFontComboBox *fontComboBox_4;
    QSplitter *splitter_3;
    QLabel *label_7;
    QFontComboBox *fontComboBox_5;
    QLabel *label_8;
    QFontComboBox *fontComboBox_6;
    QLabel *label_9;
    QFontComboBox *fontComboBox_7;
    QSplitter *splitter_4;
    QLabel *label_10;
    QFontComboBox *fontComboBox_8;
    QLabel *label_11;
    QFontComboBox *fontComboBox_9;
    QLabel *label_12;
    QFontComboBox *fontComboBox_10;
    QSplitter *splitter_5;
    QLabel *label_13;
    QFontComboBox *fontComboBox_11;
    QLabel *label_14;
    QFontComboBox *fontComboBox_12;
    QLabel *label_15;
    QFontComboBox *fontComboBox_13;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_25;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_26;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_27;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_28;
    QLineEdit *lineEdit_12;
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
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_29;
    QComboBox *comboBox_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_30;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *patientSave;
    QSpacerItem *horizontalSpacer;
    QPushButton *patientCancel;

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
        splitter_9 = new QSplitter(AddPatient);
        splitter_9->setObjectName(QStringLiteral("splitter_9"));
        splitter_9->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_9);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        splitter->addWidget(label);
        lineEdit_2 = new QLineEdit(splitter);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(120, 0));
        lineEdit_2->setMaximumSize(QSize(130, 16777215));
        splitter->addWidget(lineEdit_2);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 0));
        splitter->addWidget(label_2);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMinimumSize(QSize(135, 0));
        splitter->addWidget(lineEdit);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(40, 0));
        splitter->addWidget(label_3);
        fontComboBox = new QFontComboBox(splitter);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        splitter->addWidget(fontComboBox);
        splitter_9->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_9);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_2->addWidget(label_4);
        fontComboBox_2 = new QFontComboBox(splitter_2);
        fontComboBox_2->setObjectName(QStringLiteral("fontComboBox_2"));
        fontComboBox_2->setMaximumSize(QSize(120, 16777215));
        splitter_2->addWidget(fontComboBox_2);
        label_5 = new QLabel(splitter_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(40, 0));
        splitter_2->addWidget(label_5);
        fontComboBox_3 = new QFontComboBox(splitter_2);
        fontComboBox_3->setObjectName(QStringLiteral("fontComboBox_3"));
        fontComboBox_3->setMaximumSize(QSize(135, 16777215));
        splitter_2->addWidget(fontComboBox_3);
        label_6 = new QLabel(splitter_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(40, 0));
        splitter_2->addWidget(label_6);
        fontComboBox_4 = new QFontComboBox(splitter_2);
        fontComboBox_4->setObjectName(QStringLiteral("fontComboBox_4"));
        splitter_2->addWidget(fontComboBox_4);
        splitter_9->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_9);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        splitter_3->addWidget(label_7);
        fontComboBox_5 = new QFontComboBox(splitter_3);
        fontComboBox_5->setObjectName(QStringLiteral("fontComboBox_5"));
        fontComboBox_5->setMaximumSize(QSize(120, 16777215));
        splitter_3->addWidget(fontComboBox_5);
        label_8 = new QLabel(splitter_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(40, 0));
        splitter_3->addWidget(label_8);
        fontComboBox_6 = new QFontComboBox(splitter_3);
        fontComboBox_6->setObjectName(QStringLiteral("fontComboBox_6"));
        fontComboBox_6->setMaximumSize(QSize(135, 16777215));
        splitter_3->addWidget(fontComboBox_6);
        label_9 = new QLabel(splitter_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(40, 0));
        splitter_3->addWidget(label_9);
        fontComboBox_7 = new QFontComboBox(splitter_3);
        fontComboBox_7->setObjectName(QStringLiteral("fontComboBox_7"));
        splitter_3->addWidget(fontComboBox_7);
        splitter_9->addWidget(splitter_3);
        splitter_4 = new QSplitter(splitter_9);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(splitter_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        splitter_4->addWidget(label_10);
        fontComboBox_8 = new QFontComboBox(splitter_4);
        fontComboBox_8->setObjectName(QStringLiteral("fontComboBox_8"));
        fontComboBox_8->setMaximumSize(QSize(120, 16777215));
        splitter_4->addWidget(fontComboBox_8);
        label_11 = new QLabel(splitter_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(40, 0));
        splitter_4->addWidget(label_11);
        fontComboBox_9 = new QFontComboBox(splitter_4);
        fontComboBox_9->setObjectName(QStringLiteral("fontComboBox_9"));
        fontComboBox_9->setMinimumSize(QSize(135, 0));
        fontComboBox_9->setMaximumSize(QSize(135, 16777215));
        splitter_4->addWidget(fontComboBox_9);
        label_12 = new QLabel(splitter_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(40, 0));
        splitter_4->addWidget(label_12);
        fontComboBox_10 = new QFontComboBox(splitter_4);
        fontComboBox_10->setObjectName(QStringLiteral("fontComboBox_10"));
        splitter_4->addWidget(fontComboBox_10);
        splitter_9->addWidget(splitter_4);
        splitter_5 = new QSplitter(splitter_9);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(splitter_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        splitter_5->addWidget(label_13);
        fontComboBox_11 = new QFontComboBox(splitter_5);
        fontComboBox_11->setObjectName(QStringLiteral("fontComboBox_11"));
        fontComboBox_11->setMinimumSize(QSize(120, 0));
        fontComboBox_11->setMaximumSize(QSize(108, 16777215));
        splitter_5->addWidget(fontComboBox_11);
        label_14 = new QLabel(splitter_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(40, 0));
        splitter_5->addWidget(label_14);
        fontComboBox_12 = new QFontComboBox(splitter_5);
        fontComboBox_12->setObjectName(QStringLiteral("fontComboBox_12"));
        fontComboBox_12->setMinimumSize(QSize(135, 0));
        splitter_5->addWidget(fontComboBox_12);
        label_15 = new QLabel(splitter_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(40, 0));
        splitter_5->addWidget(label_15);
        fontComboBox_13 = new QFontComboBox(splitter_5);
        fontComboBox_13->setObjectName(QStringLiteral("fontComboBox_13"));
        sizePolicy.setHeightForWidth(fontComboBox_13->sizePolicy().hasHeightForWidth());
        fontComboBox_13->setSizePolicy(sizePolicy);
        splitter_5->addWidget(fontComboBox_13);
        splitter_9->addWidget(splitter_5);

        gridLayout->addWidget(splitter_9, 0, 0, 4, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_25 = new QLabel(AddPatient);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_5->addWidget(label_25);

        lineEdit_4 = new QLineEdit(AddPatient);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_5->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_5, 0, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_26 = new QLabel(AddPatient);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_6->addWidget(label_26);

        comboBox_4 = new QComboBox(AddPatient);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_6->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(AddPatient);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        horizontalLayout_6->addWidget(comboBox_5);


        gridLayout->addLayout(horizontalLayout_6, 1, 1, 1, 1);

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


        gridLayout->addLayout(horizontalLayout_7, 2, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_28 = new QLabel(AddPatient);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_8->addWidget(label_28);

        lineEdit_12 = new QLineEdit(AddPatient);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        horizontalLayout_8->addWidget(lineEdit_12);


        gridLayout->addLayout(horizontalLayout_8, 3, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_17 = new QLabel(AddPatient);
        label_17->setObjectName(QStringLiteral("label_17"));

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

        horizontalLayout_4->addWidget(label_21);

        lineEdit_7 = new QLineEdit(AddPatient);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_4->addWidget(lineEdit_7);

        label_22 = new QLabel(AddPatient);
        label_22->setObjectName(QStringLiteral("label_22"));

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

        horizontalLayout->addWidget(label_24);

        lineEdit_10 = new QLineEdit(AddPatient);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        horizontalLayout->addWidget(lineEdit_10);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 4, 0, 3, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_29 = new QLabel(AddPatient);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_9->addWidget(label_29);

        comboBox_6 = new QComboBox(AddPatient);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        horizontalLayout_9->addWidget(comboBox_6);


        gridLayout->addLayout(horizontalLayout_9, 4, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_30 = new QLabel(AddPatient);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_10->addWidget(label_30);

        dateTimeEdit = new QDateTimeEdit(AddPatient);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        horizontalLayout_10->addWidget(dateTimeEdit);


        gridLayout->addLayout(horizontalLayout_10, 5, 1, 1, 1);

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


        gridLayout->addLayout(horizontalLayout_11, 6, 1, 1, 1);


        retranslateUi(AddPatient);

        QMetaObject::connectSlotsByName(AddPatient);
    } // setupUi

    void retranslateUi(QDialog *AddPatient)
    {
        AddPatient->setWindowTitle(QApplication::translate("AddPatient", "\346\267\273\345\212\240\347\227\205\344\272\272", nullptr));
        label->setText(QApplication::translate("AddPatient", "\344\275\217\351\231\242\345\217\267    ", nullptr));
        label_2->setText(QApplication::translate("AddPatient", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QApplication::translate("AddPatient", "\346\200\247\345\210\253", nullptr));
        label_4->setText(QApplication::translate("AddPatient", "\346\260\221\346\227\217      ", nullptr));
        label_5->setText(QApplication::translate("AddPatient", "\350\201\214\344\270\232", nullptr));
        label_6->setText(QApplication::translate("AddPatient", "\345\251\232\345\247\273", nullptr));
        label_7->setText(QApplication::translate("AddPatient", "\345\207\272\347\224\237\345\234\260    ", nullptr));
        label_8->setText(QApplication::translate("AddPatient", "\345\270\202   ", nullptr));
        label_9->setText(QApplication::translate("AddPatient", "\345\216\277 \345\214\272\357\274\232", nullptr));
        label_10->setText(QApplication::translate("AddPatient", "\347\216\260\344\275\217\345\235\200    ", nullptr));
        label_11->setText(QApplication::translate("AddPatient", "\345\270\202  ", nullptr));
        label_12->setText(QApplication::translate("AddPatient", "\345\216\277 \345\214\272\357\274\232", nullptr));
        label_13->setText(QApplication::translate("AddPatient", "\346\210\267\345\217\243\345\234\260\345\235\200  ", nullptr));
        label_14->setText(QApplication::translate("AddPatient", "\345\270\202", nullptr));
        label_15->setText(QApplication::translate("AddPatient", "\345\216\277 \345\214\272\357\274\232", nullptr));
        label_25->setText(QApplication::translate("AddPatient", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_26->setText(QApplication::translate("AddPatient", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_27->setText(QApplication::translate("AddPatient", "\347\261\215\350\264\257", nullptr));
        label_28->setText(QApplication::translate("AddPatient", "\347\224\265\350\257\235    ", nullptr));
        label_17->setText(QApplication::translate("AddPatient", "\350\201\224\347\263\273\344\272\272    ", nullptr));
        label_16->setText(QApplication::translate("AddPatient", "\345\267\245\344\275\234\345\215\225\344\275\215", nullptr));
        label_18->setText(QApplication::translate("AddPatient", "\345\205\263\347\263\273", nullptr));
        label_19->setText(QApplication::translate("AddPatient", "\347\224\265\350\257\235", nullptr));
        label_21->setText(QApplication::translate("AddPatient", "\347\227\205\346\210\277      ", nullptr));
        label_22->setText(QApplication::translate("AddPatient", "\345\272\212\345\217\267", nullptr));
        label_20->setText(QApplication::translate("AddPatient", "\344\275\217\351\231\242\347\247\221\345\256\244  ", nullptr));
        label_23->setText(QApplication::translate("AddPatient", "\344\270\273\346\262\273\345\214\273\345\270\210\357\274\232", nullptr));
        label_24->setText(QApplication::translate("AddPatient", "\344\270\273\350\257\211      ", nullptr));
        label_29->setText(QApplication::translate("AddPatient", "\345\205\245\351\231\242\351\200\224\345\276\204", nullptr));
        label_30->setText(QApplication::translate("AddPatient", "\345\205\245\351\231\242\346\227\266\351\227\264", nullptr));
        patientSave->setText(QApplication::translate("AddPatient", "\344\277\235\345\255\230", nullptr));
        patientCancel->setText(QApplication::translate("AddPatient", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPatient: public Ui_AddPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPATIENT_H
