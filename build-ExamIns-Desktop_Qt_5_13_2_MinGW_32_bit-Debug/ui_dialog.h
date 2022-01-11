/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QRadioButton *gaokao;
    QRadioButton *putong;
    QPushButton *startExam;
    QLabel *statusLabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(300, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setMinimumSize(QSize(300, 200));
        Dialog->setMaximumSize(QSize(300, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/Administrator/Desktop/logo-dc/logo128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        gaokao = new QRadioButton(Dialog);
        gaokao->setObjectName(QString::fromUtf8("gaokao"));
        gaokao->setGeometry(QRect(43, 60, 89, 16));
        gaokao->setChecked(true);
        putong = new QRadioButton(Dialog);
        putong->setObjectName(QString::fromUtf8("putong"));
        putong->setGeometry(QRect(183, 60, 89, 16));
        startExam = new QPushButton(Dialog);
        startExam->setObjectName(QString::fromUtf8("startExam"));
        startExam->setGeometry(QRect(110, 120, 75, 25));
        sizePolicy.setHeightForWidth(startExam->sizePolicy().hasHeightForWidth());
        startExam->setSizePolicy(sizePolicy);
        statusLabel = new QLabel(Dialog);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(143, 180, 151, 20));
        sizePolicy.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(7);
        statusLabel->setFont(font);
        statusLabel->setToolTipDuration(3);
        statusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\350\200\203\350\257\225\350\257\255\351\237\263\346\214\207\344\273\244\347\263\273\347\273\237", nullptr));
        gaokao->setText(QCoreApplication::translate("Dialog", "\351\253\230\350\200\203\346\250\241\345\274\217", nullptr));
        putong->setText(QCoreApplication::translate("Dialog", "\346\231\256\351\200\232\346\250\241\345\274\217", nullptr));
        startExam->setText(QCoreApplication::translate("Dialog", "\350\277\233\345\205\245\350\200\203\350\257\225", nullptr));
        statusLabel->setText(QCoreApplication::translate("Dialog", "DC\344\275\234\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
