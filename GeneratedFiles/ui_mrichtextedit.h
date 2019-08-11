/********************************************************************************
** Form generated from reading UI file 'mrichtextedit.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MRICHTEXTEDIT_H
#define UI_MRICHTEXTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_MRichTextEdit
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *f_toolbar;
    QHBoxLayout *horizontalLayout;
    QComboBox *f_paragraph;
    QToolButton *f_undo;
    QToolButton *f_redo;
    QToolButton *f_cut;
    QToolButton *f_copy;
    QToolButton *f_paste;
    QToolButton *f_link;
    QToolButton *f_bold;
    QToolButton *f_italic;
    QToolButton *f_underline;
    QToolButton *f_strikeout;
    QToolButton *f_list_bullet;
    QToolButton *f_list_ordered;
    QToolButton *f_indent_dec;
    QToolButton *f_indent_inc;
    QToolButton *f_fgcolor;
    QToolButton *f_bgcolor;
    QComboBox *f_fontsize;
    QToolButton *f_image;
    QSpacerItem *horizontalSpacer;
    QToolButton *f_menu;
    MTextEdit *f_textedit;

    void setupUi(QWidget *MRichTextEdit)
    {
        if (MRichTextEdit->objectName().isEmpty())
            MRichTextEdit->setObjectName(QStringLiteral("MRichTextEdit"));
        MRichTextEdit->resize(824, 320);
        MRichTextEdit->setWindowTitle(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(MRichTextEdit);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        f_toolbar = new QWidget(MRichTextEdit);
        f_toolbar->setObjectName(QStringLiteral("f_toolbar"));
        horizontalLayout = new QHBoxLayout(f_toolbar);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        f_paragraph = new QComboBox(f_toolbar);
        f_paragraph->setObjectName(QStringLiteral("f_paragraph"));
        f_paragraph->setFocusPolicy(Qt::ClickFocus);
        f_paragraph->setEditable(true);

        horizontalLayout->addWidget(f_paragraph);

        f_undo = new QToolButton(f_toolbar);
        f_undo->setObjectName(QStringLiteral("f_undo"));
        f_undo->setEnabled(false);
        f_undo->setFocusPolicy(Qt::ClickFocus);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_undo->setIcon(icon);
        f_undo->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_undo);

        f_redo = new QToolButton(f_toolbar);
        f_redo->setObjectName(QStringLiteral("f_redo"));
        f_redo->setEnabled(false);
        f_redo->setFocusPolicy(Qt::ClickFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_redo->setIcon(icon1);
        f_redo->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_redo);

        f_cut = new QToolButton(f_toolbar);
        f_cut->setObjectName(QStringLiteral("f_cut"));
        f_cut->setFocusPolicy(Qt::ClickFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_cut->setIcon(icon2);
        f_cut->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_cut);

        f_copy = new QToolButton(f_toolbar);
        f_copy->setObjectName(QStringLiteral("f_copy"));
        f_copy->setFocusPolicy(Qt::ClickFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral("Resources/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_copy->setIcon(icon3);
        f_copy->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_copy);

        f_paste = new QToolButton(f_toolbar);
        f_paste->setObjectName(QStringLiteral("f_paste"));
        f_paste->setFocusPolicy(Qt::ClickFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral("Resources/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_paste->setIcon(icon4);
        f_paste->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_paste);

        f_link = new QToolButton(f_toolbar);
        f_link->setObjectName(QStringLiteral("f_link"));
        f_link->setFocusPolicy(Qt::ClickFocus);
        QIcon icon5;
        icon5.addFile(QStringLiteral("Resources/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_link->setIcon(icon5);
        f_link->setIconSize(QSize(16, 16));
        f_link->setCheckable(true);

        horizontalLayout->addWidget(f_link);

        f_bold = new QToolButton(f_toolbar);
        f_bold->setObjectName(QStringLiteral("f_bold"));
        f_bold->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        f_bold->setToolTip(QString::fromUtf8("\345\255\227\344\275\223\345\212\240\347\262\227 (CTRL+B)"));
#endif // QT_NO_TOOLTIP
        QIcon icon6;
        icon6.addFile(QStringLiteral("Resources/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_bold->setIcon(icon6);
        f_bold->setIconSize(QSize(16, 16));
        f_bold->setCheckable(true);

        horizontalLayout->addWidget(f_bold);

        f_italic = new QToolButton(f_toolbar);
        f_italic->setObjectName(QStringLiteral("f_italic"));
        f_italic->setFocusPolicy(Qt::ClickFocus);
        QIcon icon7;
        icon7.addFile(QStringLiteral("Resources/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_italic->setIcon(icon7);
        f_italic->setIconSize(QSize(16, 16));
        f_italic->setCheckable(true);

        horizontalLayout->addWidget(f_italic);

        f_underline = new QToolButton(f_toolbar);
        f_underline->setObjectName(QStringLiteral("f_underline"));
        f_underline->setFocusPolicy(Qt::ClickFocus);
        QIcon icon8;
        icon8.addFile(QStringLiteral("Resources/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_underline->setIcon(icon8);
        f_underline->setIconSize(QSize(16, 16));
        f_underline->setCheckable(true);

        horizontalLayout->addWidget(f_underline);

        f_strikeout = new QToolButton(f_toolbar);
        f_strikeout->setObjectName(QStringLiteral("f_strikeout"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("Resources/strikethrough.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_strikeout->setIcon(icon9);
        f_strikeout->setCheckable(true);

        horizontalLayout->addWidget(f_strikeout);

        f_list_bullet = new QToolButton(f_toolbar);
        f_list_bullet->setObjectName(QStringLiteral("f_list_bullet"));
        f_list_bullet->setFocusPolicy(Qt::ClickFocus);
        QIcon icon10;
        icon10.addFile(QStringLiteral("Resources/point-order.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_list_bullet->setIcon(icon10);
        f_list_bullet->setIconSize(QSize(16, 16));
        f_list_bullet->setCheckable(true);

        horizontalLayout->addWidget(f_list_bullet);

        f_list_ordered = new QToolButton(f_toolbar);
        f_list_ordered->setObjectName(QStringLiteral("f_list_ordered"));
        f_list_ordered->setFocusPolicy(Qt::ClickFocus);
        QIcon icon11;
        icon11.addFile(QStringLiteral("Resources/index-order.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_list_ordered->setIcon(icon11);
        f_list_ordered->setIconSize(QSize(16, 16));
        f_list_ordered->setCheckable(true);

        horizontalLayout->addWidget(f_list_ordered);

        f_indent_dec = new QToolButton(f_toolbar);
        f_indent_dec->setObjectName(QStringLiteral("f_indent_dec"));
        f_indent_dec->setFocusPolicy(Qt::ClickFocus);
        QIcon icon12;
        icon12.addFile(QStringLiteral("Resources/indent-decrease.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_indent_dec->setIcon(icon12);
        f_indent_dec->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_indent_dec);

        f_indent_inc = new QToolButton(f_toolbar);
        f_indent_inc->setObjectName(QStringLiteral("f_indent_inc"));
        f_indent_inc->setFocusPolicy(Qt::ClickFocus);
        QIcon icon13;
        icon13.addFile(QStringLiteral("Resources/indent-increase.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_indent_inc->setIcon(icon13);
        f_indent_inc->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_indent_inc);

        f_fgcolor = new QToolButton(f_toolbar);
        f_fgcolor->setObjectName(QStringLiteral("f_fgcolor"));
        f_fgcolor->setMinimumSize(QSize(16, 16));
        f_fgcolor->setMaximumSize(QSize(16, 16));
        f_fgcolor->setFocusPolicy(Qt::ClickFocus);
        f_fgcolor->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_fgcolor);

        f_bgcolor = new QToolButton(f_toolbar);
        f_bgcolor->setObjectName(QStringLiteral("f_bgcolor"));
        f_bgcolor->setMinimumSize(QSize(16, 16));
        f_bgcolor->setMaximumSize(QSize(16, 16));
        f_bgcolor->setFocusPolicy(Qt::ClickFocus);
        f_bgcolor->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_bgcolor);

        f_fontsize = new QComboBox(f_toolbar);
        f_fontsize->setObjectName(QStringLiteral("f_fontsize"));
        f_fontsize->setFocusPolicy(Qt::ClickFocus);
        f_fontsize->setEditable(true);

        horizontalLayout->addWidget(f_fontsize);

        f_image = new QToolButton(f_toolbar);
        f_image->setObjectName(QStringLiteral("f_image"));
        f_image->setText(QStringLiteral(""));
        QIcon icon14;
        icon14.addFile(QStringLiteral("Resources/picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_image->setIcon(icon14);

        horizontalLayout->addWidget(f_image);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        f_menu = new QToolButton(f_toolbar);
        f_menu->setObjectName(QStringLiteral("f_menu"));

        horizontalLayout->addWidget(f_menu);

        f_paragraph->raise();
        f_undo->raise();
        f_redo->raise();
        f_cut->raise();
        f_copy->raise();
        f_paste->raise();
        f_link->raise();
        f_italic->raise();
        f_underline->raise();
        f_fontsize->raise();
        f_list_bullet->raise();
        f_list_ordered->raise();
        f_indent_dec->raise();
        f_indent_inc->raise();
        f_bold->raise();
        f_bgcolor->raise();
        f_strikeout->raise();
        f_image->raise();
        f_menu->raise();
        f_fgcolor->raise();

        verticalLayout->addWidget(f_toolbar);

        f_textedit = new MTextEdit(MRichTextEdit);
        f_textedit->setObjectName(QStringLiteral("f_textedit"));
        f_textedit->setAutoFormatting(QTextEdit::AutoNone);
        f_textedit->setTabChangesFocus(true);

        verticalLayout->addWidget(f_textedit);

        QWidget::setTabOrder(f_textedit, f_strikeout);
        QWidget::setTabOrder(f_strikeout, f_image);
        QWidget::setTabOrder(f_image, f_menu);

        retranslateUi(MRichTextEdit);

        QMetaObject::connectSlotsByName(MRichTextEdit);
    } // setupUi

    void retranslateUi(QWidget *MRichTextEdit)
    {
#ifndef QT_NO_TOOLTIP
        f_paragraph->setToolTip(QApplication::translate("MRichTextEdit", "Paragraph formatting", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        f_undo->setToolTip(QApplication::translate("MRichTextEdit", "\346\222\244\351\224\200 (CTRL+Z)", nullptr));
#endif // QT_NO_TOOLTIP
        f_undo->setText(QApplication::translate("MRichTextEdit", "Undo", nullptr));
#ifndef QT_NO_TOOLTIP
        f_redo->setToolTip(QApplication::translate("MRichTextEdit", "\351\207\215\345\201\232", nullptr));
#endif // QT_NO_TOOLTIP
        f_redo->setText(QApplication::translate("MRichTextEdit", "Redo", nullptr));
#ifndef QT_NO_TOOLTIP
        f_cut->setToolTip(QApplication::translate("MRichTextEdit", "\345\211\252\345\210\207(CTRL+X)", nullptr));
#endif // QT_NO_TOOLTIP
        f_cut->setText(QApplication::translate("MRichTextEdit", "Cut", nullptr));
#ifndef QT_NO_TOOLTIP
        f_copy->setToolTip(QApplication::translate("MRichTextEdit", "\345\244\215\345\210\266 (CTRL+C)", nullptr));
#endif // QT_NO_TOOLTIP
        f_copy->setText(QApplication::translate("MRichTextEdit", "Copy", nullptr));
#ifndef QT_NO_TOOLTIP
        f_paste->setToolTip(QApplication::translate("MRichTextEdit", "\347\262\230\350\264\264 (CTRL+V)", nullptr));
#endif // QT_NO_TOOLTIP
        f_paste->setText(QApplication::translate("MRichTextEdit", "Paste", nullptr));
#ifndef QT_NO_TOOLTIP
        f_link->setToolTip(QApplication::translate("MRichTextEdit", "\346\217\222\345\205\245\350\266\205\351\223\276\346\216\245 (CTRL+L)", nullptr));
#endif // QT_NO_TOOLTIP
        f_link->setText(QApplication::translate("MRichTextEdit", "Link", nullptr));
        f_bold->setText(QApplication::translate("MRichTextEdit", "Bold", nullptr));
#ifndef QT_NO_TOOLTIP
        f_italic->setToolTip(QApplication::translate("MRichTextEdit", "\346\226\234\344\275\223 (CTRL+I)", nullptr));
#endif // QT_NO_TOOLTIP
        f_italic->setText(QApplication::translate("MRichTextEdit", "Italic", nullptr));
#ifndef QT_NO_TOOLTIP
        f_underline->setToolTip(QApplication::translate("MRichTextEdit", "\344\270\213\345\210\222\347\272\277 (CTRL+U)", nullptr));
#endif // QT_NO_TOOLTIP
        f_underline->setText(QApplication::translate("MRichTextEdit", "Underline", nullptr));
#ifndef QT_NO_TOOLTIP
        f_strikeout->setToolTip(QApplication::translate("MRichTextEdit", "\345\210\240\351\231\244\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        f_strikeout->setText(QString());
#ifndef QT_NO_TOOLTIP
        f_list_bullet->setToolTip(QApplication::translate("MRichTextEdit", "\345\234\206\347\202\271\346\240\267\345\274\217\347\274\226\345\217\267(CTRL+-)", nullptr));
#endif // QT_NO_TOOLTIP
        f_list_bullet->setText(QString());
#ifndef QT_NO_TOOLTIP
        f_list_ordered->setToolTip(QApplication::translate("MRichTextEdit", "\345\272\217\345\217\267\346\240\267\345\274\217\347\274\226\345\217\267 (CTRL+=)", nullptr));
#endif // QT_NO_TOOLTIP
        f_list_ordered->setText(QString());
#ifndef QT_NO_TOOLTIP
        f_indent_dec->setToolTip(QApplication::translate("MRichTextEdit", "\345\207\217\345\260\221\347\274\251\350\277\233(CTRL+,)", nullptr));
#endif // QT_NO_TOOLTIP
        f_indent_dec->setText(QApplication::translate("MRichTextEdit", "Decrease indentation", nullptr));
#ifndef QT_NO_TOOLTIP
        f_indent_inc->setToolTip(QApplication::translate("MRichTextEdit", "\345\242\236\345\212\240\347\274\251\350\277\233 (CTRL+.)", nullptr));
#endif // QT_NO_TOOLTIP
        f_indent_inc->setText(QApplication::translate("MRichTextEdit", "Increase indentation", nullptr));
#ifndef QT_NO_TOOLTIP
        f_fgcolor->setToolTip(QApplication::translate("MRichTextEdit", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
        f_fgcolor->setText(QApplication::translate("MRichTextEdit", ".", nullptr));
#ifndef QT_NO_TOOLTIP
        f_bgcolor->setToolTip(QApplication::translate("MRichTextEdit", "\350\203\214\346\231\257\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
        f_bgcolor->setText(QApplication::translate("MRichTextEdit", ".", nullptr));
#ifndef QT_NO_TOOLTIP
        f_fontsize->setToolTip(QApplication::translate("MRichTextEdit", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        f_image->setToolTip(QApplication::translate("MRichTextEdit", "\346\217\222\345\205\245\345\233\276\347\211\207", nullptr));
#endif // QT_NO_TOOLTIP
        f_menu->setText(QApplication::translate("MRichTextEdit", "\346\233\264\345\244\232", nullptr));
        Q_UNUSED(MRichTextEdit);
    } // retranslateUi

};

namespace Ui {
    class MRichTextEdit: public Ui_MRichTextEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MRICHTEXTEDIT_H
