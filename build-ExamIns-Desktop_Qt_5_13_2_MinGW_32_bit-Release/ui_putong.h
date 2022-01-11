/********************************************************************************
** Form generated from reading UI file 'putong.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUTONG_H
#define UI_PUTONG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_putong
{
public:
    QLabel *statusLabel;
    QPushButton *pushButton;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_4;
    QTimeEdit *startTime;
    QTimeEdit *endTime;

    void setupUi(QDialog *putong)
    {
        if (putong->objectName().isEmpty())
            putong->setObjectName(QString::fromUtf8("putong"));
        putong->resize(350, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(putong->sizePolicy().hasHeightForWidth());
        putong->setSizePolicy(sizePolicy);
        putong->setMaximumSize(QSize(350, 250));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/Administrator/Desktop/logo-dc/logo128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        putong->setWindowIcon(icon);
        statusLabel = new QLabel(putong);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(190, 220, 151, 20));
        sizePolicy.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(7);
        statusLabel->setFont(font);
        statusLabel->setToolTipDuration(3);
        statusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(putong);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(137, 200, 75, 23));
        widget = new QWidget(putong);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 331, 161));
        widget->setStyleSheet(QString::fromUtf8("border:1px solid #aaa;\n"
"border-radius:15px;\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(64, 12, 201, 31));
        label->setStyleSheet(QString::fromUtf8("border:0px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(47, 60, 111, 21));
        label_2->setStyleSheet(QString::fromUtf8("border:0px;"));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(147, 60, 141, 21));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(58, 90, 100, 21));
        label_3->setStyleSheet(QString::fromUtf8("border:0px;"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(58, 120, 111, 21));
        label_4->setStyleSheet(QString::fromUtf8("border:0px;"));
        startTime = new QTimeEdit(widget);
        startTime->setObjectName(QString::fromUtf8("startTime"));
        startTime->setGeometry(QRect(147, 90, 141, 21));
        startTime->setTime(QTime(8, 0, 0));
        endTime = new QTimeEdit(widget);
        endTime->setObjectName(QString::fromUtf8("endTime"));
        endTime->setGeometry(QRect(147, 120, 141, 21));
        endTime->setTime(QTime(10, 30, 0));

        retranslateUi(putong);

        QMetaObject::connectSlotsByName(putong);
    } // setupUi

    void retranslateUi(QDialog *putong)
    {
        putong->setWindowTitle(QCoreApplication::translate("putong", "\346\231\256\351\200\232\346\250\241\345\274\217\350\200\203\350\257\225\350\257\255\351\237\263\346\214\207\344\273\244\347\263\273\347\273\237", nullptr));
        statusLabel->setText(QCoreApplication::translate("putong", "DC\344\275\234\345\223\201", nullptr));
        pushButton->setText(QCoreApplication::translate("putong", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("putong", "\350\200\203\350\257\225\350\257\255\351\237\263\346\214\207\344\273\244\347\263\273\347\273\237\357\274\210\346\231\256\351\200\232\346\250\241\345\274\217\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("putong", "\350\257\267\351\200\211\346\213\251\350\200\203\350\257\225\347\247\221\347\233\256\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("putong", "\350\257\255\346\226\207", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("putong", "\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("putong", "\346\200\235\346\203\263\346\224\277\346\262\273", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("putong", "\345\244\226\350\257\255", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("putong", "\347\211\251\347\220\206/\345\216\206\345\217\262", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("putong", "\344\277\241\346\201\257/\351\200\232\347\224\250\346\212\200\346\234\257", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("putong", "\345\214\226\345\255\246/\345\234\260\347\220\206", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("putong", "\345\234\260\347\220\206", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("putong", "\347\224\237\347\211\251", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("putong", "\347\211\251\347\220\206", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("putong", "\345\216\206\345\217\262", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("putong", "\344\277\241\346\201\257\346\212\200\346\234\257", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("putong", "\351\200\232\347\224\250\346\212\200\346\234\257", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("putong", "\345\205\266\344\273\226", nullptr));

        label_3->setText(QCoreApplication::translate("putong", "\350\200\203\350\257\225\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("putong", "\350\200\203\350\257\225\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", nullptr));
        startTime->setDisplayFormat(QCoreApplication::translate("putong", "HH:mm:ss", nullptr));
        endTime->setDisplayFormat(QCoreApplication::translate("putong", "HH:mm:ss", nullptr));
    } // retranslateUi

};

namespace Ui {
    class putong: public Ui_putong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUTONG_H
