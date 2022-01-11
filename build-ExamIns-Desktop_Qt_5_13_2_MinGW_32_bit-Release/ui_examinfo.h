/********************************************************************************
** Form generated from reading UI file 'examinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINFO_H
#define UI_EXAMINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ExamInfo
{
public:
    QLabel *statusLabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *kemu;
    QLabel *starttime;
    QLabel *endtime;
    QLabel *systemtime;
    QLabel *label_6;
    QLineEdit *ins;
    QTextEdit *inscontent;
    QPushButton *inslist;
    QPushButton *stop;

    void setupUi(QDialog *ExamInfo)
    {
        if (ExamInfo->objectName().isEmpty())
            ExamInfo->setObjectName(QString::fromUtf8("ExamInfo"));
        ExamInfo->resize(300, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExamInfo->sizePolicy().hasHeightForWidth());
        ExamInfo->setSizePolicy(sizePolicy);
        ExamInfo->setMinimumSize(QSize(300, 500));
        ExamInfo->setMaximumSize(QSize(300, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/Administrator/Desktop/logo-dc/logo128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ExamInfo->setWindowIcon(icon);
        statusLabel = new QLabel(ExamInfo);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(130, 470, 155, 20));
        sizePolicy.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy);
        statusLabel->setMaximumSize(QSize(300, 500));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(7);
        statusLabel->setFont(font);
        statusLabel->setToolTipDuration(3);
        statusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ExamInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 301, 31));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(ExamInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 37, 71, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(ExamInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 66, 71, 21));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(ExamInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 93, 71, 21));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(ExamInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 123, 71, 21));
        label_5->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        kemu = new QLabel(ExamInfo);
        kemu->setObjectName(QString::fromUtf8("kemu"));
        kemu->setGeometry(QRect(111, 40, 151, 16));
        kemu->setStyleSheet(QString::fromUtf8("\n"
"border:1px solid #666;\n"
"border-top-width:0px;\n"
"border-left-width:0px;\n"
"border-right-width:0px;\n"
"\n"
""));
        starttime = new QLabel(ExamInfo);
        starttime->setObjectName(QString::fromUtf8("starttime"));
        starttime->setGeometry(QRect(110, 66, 150, 20));
        starttime->setStyleSheet(QString::fromUtf8("\n"
"border:1px solid #666;\n"
"border-top-width:0px;\n"
"border-left-width:0px;\n"
"border-right-width:0px;"));
        endtime = new QLabel(ExamInfo);
        endtime->setObjectName(QString::fromUtf8("endtime"));
        endtime->setGeometry(QRect(110, 95, 151, 16));
        endtime->setStyleSheet(QString::fromUtf8("\n"
"border:1px solid #666;\n"
"border-top-width:0px;\n"
"border-left-width:0px;\n"
"border-right-width:0px;"));
        systemtime = new QLabel(ExamInfo);
        systemtime->setObjectName(QString::fromUtf8("systemtime"));
        systemtime->setGeometry(QRect(110, 125, 151, 16));
        systemtime->setStyleSheet(QString::fromUtf8("\n"
"border:1px solid #666;\n"
"border-top-width:0px;\n"
"border-left-width:0px;\n"
"border-right-width:0px;\n"
"\n"
"font-weight:bold;\n"
"color:red;"));
        label_6 = new QLabel(ExamInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 156, 91, 20));
        ins = new QLineEdit(ExamInfo);
        ins->setObjectName(QString::fromUtf8("ins"));
        ins->setGeometry(QRect(10, 180, 281, 21));
        ins->setReadOnly(true);
        inscontent = new QTextEdit(ExamInfo);
        inscontent->setObjectName(QString::fromUtf8("inscontent"));
        inscontent->setGeometry(QRect(10, 210, 281, 231));
        inscontent->setReadOnly(true);
        inslist = new QPushButton(ExamInfo);
        inslist->setObjectName(QString::fromUtf8("inslist"));
        inslist->setGeometry(QRect(150, 450, 96, 25));
        stop = new QPushButton(ExamInfo);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(40, 450, 71, 25));

        retranslateUi(ExamInfo);

        QMetaObject::connectSlotsByName(ExamInfo);
    } // setupUi

    void retranslateUi(QDialog *ExamInfo)
    {
        ExamInfo->setWindowTitle(QCoreApplication::translate("ExamInfo", "\350\200\203\350\257\225\350\257\255\351\237\263\346\214\207\344\273\244\347\263\273\347\273\237", nullptr));
        statusLabel->setText(QCoreApplication::translate("ExamInfo", "DC\344\275\234\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("ExamInfo", "\350\200\203\350\257\225\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("ExamInfo", "\350\200\203\350\257\225\347\247\221\347\233\256\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ExamInfo", "\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ExamInfo", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("ExamInfo", "\347\263\273\347\273\237\346\227\266\351\227\264\357\274\232", nullptr));
        kemu->setText(QString());
        starttime->setText(QString());
        endtime->setText(QString());
        systemtime->setText(QString());
        label_6->setText(QCoreApplication::translate("ExamInfo", "\346\214\207\344\273\244\350\257\246\347\273\206\350\257\264\346\230\216\357\274\232", nullptr));
        inslist->setText(QCoreApplication::translate("ExamInfo", "\346\237\245\347\234\213\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        stop->setText(QCoreApplication::translate("ExamInfo", "\345\201\234\346\255\242\350\277\220\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamInfo: public Ui_ExamInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINFO_H
