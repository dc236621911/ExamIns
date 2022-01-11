/********************************************************************************
** Form generated from reading UI file 'gaokao.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAOKAO_H
#define UI_GAOKAO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gaokao
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *statusLabel;

    void setupUi(QDialog *gaokao)
    {
        if (gaokao->objectName().isEmpty())
            gaokao->setObjectName(QString::fromUtf8("gaokao"));
        gaokao->resize(350, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gaokao->sizePolicy().hasHeightForWidth());
        gaokao->setSizePolicy(sizePolicy);
        gaokao->setMinimumSize(QSize(350, 250));
        gaokao->setMaximumSize(QSize(350, 250));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/Administrator/Desktop/logo-dc/logo128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        gaokao->setWindowIcon(icon);
        widget = new QWidget(gaokao);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 331, 161));
        widget->setStyleSheet(QString::fromUtf8("border:1px solid #aaa;\n"
"border-radius:15px;\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(64, 40, 201, 31));
        label->setStyleSheet(QString::fromUtf8("border:0px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(47, 90, 111, 21));
        label_2->setStyleSheet(QString::fromUtf8("border:0px;"));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(147, 90, 141, 21));
        pushButton = new QPushButton(gaokao);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(137, 200, 75, 23));
        statusLabel = new QLabel(gaokao);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(190, 230, 151, 20));
        sizePolicy.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(7);
        statusLabel->setFont(font);
        statusLabel->setToolTipDuration(3);
        statusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(gaokao);

        QMetaObject::connectSlotsByName(gaokao);
    } // setupUi

    void retranslateUi(QDialog *gaokao)
    {
        gaokao->setWindowTitle(QCoreApplication::translate("gaokao", "\351\253\230\350\200\203\346\250\241\345\274\217\350\200\203\350\257\225\350\257\255\351\237\263\346\214\207\344\273\244\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("gaokao", "\350\200\203\350\257\225\350\257\255\351\237\263\346\214\207\344\273\244\347\263\273\347\273\237\357\274\210\351\253\230\350\200\203\346\250\241\345\274\217\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("gaokao", "\350\257\267\351\200\211\346\213\251\350\200\203\350\257\225\347\247\221\347\233\256\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("gaokao", "\350\257\255\346\226\207", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("gaokao", "\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("gaokao", "\347\220\206\347\247\221\347\273\274\345\220\210/\346\226\207\347\247\221\347\273\274\345\220\210", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("gaokao", "\345\244\226\350\257\255", nullptr));

        pushButton->setText(QCoreApplication::translate("gaokao", "\347\241\256\345\256\232", nullptr));
        statusLabel->setText(QCoreApplication::translate("gaokao", "DC\344\275\234\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gaokao: public Ui_gaokao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAOKAO_H
