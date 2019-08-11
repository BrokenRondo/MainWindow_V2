/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew_record;
    QAction *actiondelete_record;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionUpload;
    QAction *actionNewTree;
    QAction *actionNewInfo;
    QAction *actionShowCard;
    QAction *actionPrint;
    QAction *actionDel;
    QAction *actionTrans;
    QAction *actionTempe;
    QAction *actionTemplateOpen;
    QAction *actionTemplateNew;
    QAction *actionTemplate;
    QAction *actionTemplateSave;
    QAction *actionAddPatient;
    QAction *actionCase;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QFrame *line_2;
    QListWidget *listWidget;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *textEdit_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer_5;
    QTextEdit *textEdit_3;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QLabel *timelable;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_8;
    QMenuBar *menuBa;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_7;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1013, 730);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/src/Resources/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionnew_record = new QAction(MainWindow);
        actionnew_record->setObjectName(QStringLiteral("actionnew_record"));
        actiondelete_record = new QAction(MainWindow);
        actiondelete_record->setObjectName(QStringLiteral("actiondelete_record"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/src/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/src/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionUpload = new QAction(MainWindow);
        actionUpload->setObjectName(QStringLiteral("actionUpload"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/src/Resources/upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpload->setIcon(icon3);
        actionNewTree = new QAction(MainWindow);
        actionNewTree->setObjectName(QStringLiteral("actionNewTree"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/src/Resources/tree.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewTree->setIcon(icon4);
        actionNewInfo = new QAction(MainWindow);
        actionNewInfo->setObjectName(QStringLiteral("actionNewInfo"));
        actionNewInfo->setCheckable(false);
        actionNewInfo->setIcon(icon1);
        actionShowCard = new QAction(MainWindow);
        actionShowCard->setObjectName(QStringLiteral("actionShowCard"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/src/Resources/card.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowCard->setIcon(icon5);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/src/Resources/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon6);
        actionDel = new QAction(MainWindow);
        actionDel->setObjectName(QStringLiteral("actionDel"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/src/Resources/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDel->setIcon(icon7);
        actionTrans = new QAction(MainWindow);
        actionTrans->setObjectName(QStringLiteral("actionTrans"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/src/Resources/car.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrans->setIcon(icon8);
        actionTempe = new QAction(MainWindow);
        actionTempe->setObjectName(QStringLiteral("actionTempe"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/src/Resources/temperature.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTempe->setIcon(icon9);
        actionTemplateOpen = new QAction(MainWindow);
        actionTemplateOpen->setObjectName(QStringLiteral("actionTemplateOpen"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/src/Resources/templatesUse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTemplateOpen->setIcon(icon10);
        actionTemplateNew = new QAction(MainWindow);
        actionTemplateNew->setObjectName(QStringLiteral("actionTemplateNew"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/src/Resources/templateAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTemplateNew->setIcon(icon11);
        actionTemplate = new QAction(MainWindow);
        actionTemplate->setObjectName(QStringLiteral("actionTemplate"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/src/Resources/template.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTemplate->setIcon(icon12);
        actionTemplateSave = new QAction(MainWindow);
        actionTemplateSave->setObjectName(QStringLiteral("actionTemplateSave"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/src/Resources/templateSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTemplateSave->setIcon(icon13);
        actionAddPatient = new QAction(MainWindow);
        actionAddPatient->setObjectName(QStringLiteral("actionAddPatient"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/src/Resources/addPatient.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddPatient->setIcon(icon14);
        actionCase = new QAction(MainWindow);
        actionCase->setObjectName(QStringLiteral("actionCase"));
        actionCase->setEnabled(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral("Resources/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCase->setIcon(icon15);
        actionCase->setShortcutVisibleInContextMenu(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        treeWidget = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("\347\227\205\344\272\272\345\210\227\350\241\250"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(120, 0));
        treeWidget->setMaximumSize(QSize(200, 16777215));
        splitter->addWidget(treeWidget);
        line_2 = new QFrame(splitter);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMaximumSize(QSize(16777215, 5));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        splitter->addWidget(line_2);
        listWidget = new QListWidget(splitter);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        splitter->addWidget(listWidget);

        horizontalLayout->addWidget(splitter);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAcceptDrops(false);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalSpacer = new QSpacerItem(100, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(100, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalSpacer_3 = new QSpacerItem(100, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_6->addItem(verticalSpacer_3);

        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy);
        textEdit_2->setMaximumSize(QSize(720, 16777215));

        horizontalLayout_6->addWidget(textEdit_2);

        verticalSpacer_4 = new QSpacerItem(100, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_6->addItem(verticalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_8 = new QHBoxLayout(tab_3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalSpacer_5 = new QSpacerItem(100, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_5);

        textEdit_3 = new QTextEdit(tab_3);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(true);
        textEdit_3->setMaximumSize(QSize(720, 16777215));
        textEdit_3->setAutoFillBackground(false);

        horizontalLayout_7->addWidget(textEdit_3);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        verticalSpacer_6 = new QSpacerItem(100, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_8->addItem(verticalSpacer_6);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(400, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        timelable = new QLabel(centralWidget);
        timelable->setObjectName(QStringLiteral("timelable"));

        horizontalLayout_5->addWidget(timelable);


        horizontalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMaximumSize(QSize(16, 16));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/src/Resources/HFUT.png")));
        label_3->setScaledContents(true);

        horizontalLayout_9->addWidget(label_3);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(65535, 65535));

        horizontalLayout_9->addWidget(label_2);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_10);

        MainWindow->setCentralWidget(centralWidget);
        menuBa = new QMenuBar(MainWindow);
        menuBa->setObjectName(QStringLiteral("menuBa"));
        menuBa->setGeometry(QRect(0, 0, 1013, 23));
        menu = new QMenu(menuBa);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBa);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_4 = new QMenu(menuBa);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBa);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_6 = new QMenu(menuBa);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_7 = new QMenu(menuBa);
        menu_7->setObjectName(QStringLiteral("menu_7"));
        MainWindow->setMenuBar(menuBa);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBa->addAction(menu->menuAction());
        menuBa->addAction(menu_2->menuAction());
        menuBa->addAction(menu_6->menuAction());
        menuBa->addAction(menu_4->menuAction());
        menuBa->addAction(menu_5->menuAction());
        menuBa->addAction(menu_7->menuAction());
        menu->addAction(actionAddPatient);
        menu->addAction(actionNew);
        menu->addAction(actionCase);
        menu_2->addAction(actionUpload);
        menu_6->addAction(actionTemplateNew);
        menu_6->addAction(actionTemplateOpen);
        menu_6->addAction(actionTemplateSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUpload);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDel);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTemplate);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionShowCard);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTrans);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTempe);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\214\272\345\235\227\351\223\276\347\224\265\345\255\220\347\227\205\345\216\206", nullptr));
        actionnew_record->setText(QApplication::translate("MainWindow", "new record", nullptr));
        actiondelete_record->setText(QApplication::translate("MainWindow", "delete record", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#endif // QT_NO_TOOLTIP
        actionUpload->setText(QApplication::translate("MainWindow", "\344\270\212\344\274\240", nullptr));
        actionNewTree->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\240\221\346\265\213\350\257\225", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewTree->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\240\221", nullptr));
#endif // QT_NO_TOOLTIP
        actionNewInfo->setText(QApplication::translate("MainWindow", "\347\227\205\344\272\272\344\277\241\346\201\257\346\265\213\350\257\225", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewInfo->setToolTip(QApplication::translate("MainWindow", "\347\227\205\344\272\272\344\277\241\346\201\257", nullptr));
#endif // QT_NO_TOOLTIP
        actionShowCard->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\215\241\347\211\207", nullptr));
#ifndef QT_NO_TOOLTIP
        actionShowCard->setToolTip(QApplication::translate("MainWindow", "\345\215\241\347\211\207", nullptr));
#endif // QT_NO_TOOLTIP
        actionPrint->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#endif // QT_NO_TOOLTIP
        actionDel->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDel->setToolTip(QApplication::translate("MainWindow", "delete", nullptr));
#endif // QT_NO_TOOLTIP
        actionTrans->setText(QApplication::translate("MainWindow", "\350\275\254\347\247\221", nullptr));
        actionTempe->setText(QApplication::translate("MainWindow", "\344\275\223\346\270\251", nullptr));
        actionTemplateOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\250\241\346\235\277", nullptr));
        actionTemplateNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\250\241\346\235\277", nullptr));
        actionTemplate->setText(QApplication::translate("MainWindow", "\346\250\241\346\235\277", nullptr));
        actionTemplateSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\250\241\346\235\277", nullptr));
        actionAddPatient->setText(QApplication::translate("MainWindow", "\347\227\205\344\272\272\347\231\273\350\256\260", nullptr));
        actionCase->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\227\205\345\216\206", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCase->setToolTip(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\227\205\345\216\206", nullptr));
#endif // QT_NO_TOOLTIP

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\347\227\205\344\272\272\344\277\241\346\201\257", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\216\206\345\217\262\347\227\205\345\216\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\217\202\350\200\203\346\250\241\346\235\277", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\345\205\266\344\273\226\346\226\207\344\271\246", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234\345\221\230\357\274\232\344\270\273\346\262\273\345\214\273\345\270\210", nullptr));
        timelable->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\227\266\351\227\264", nullptr));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\220\210\350\202\245\345\267\245\344\270\232\345\244\247\345\255\246\350\256\241\347\256\227\346\234\272\344\270\216\344\277\241\346\201\257\345\255\246\351\231\242\344\277\241\345\256\211\345\244\247\345\210\233\351\241\271\347\233\256\347\273\204", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\347\227\205\345\216\206", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "\350\241\250\346\240\274", nullptr));
        menu_5->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237", nullptr));
        menu_6->setTitle(QApplication::translate("MainWindow", "\346\250\241\346\235\277", nullptr));
        menu_7->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
