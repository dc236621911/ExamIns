/********************************************************************************
** Form generated from reading UI file 'showinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWINFO_H
#define UI_SHOWINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_showInfo
{
public:
    QTableWidget *tableWidget;
    QLabel *statusLabel;

    void setupUi(QDialog *showInfo)
    {
        if (showInfo->objectName().isEmpty())
            showInfo->setObjectName(QString::fromUtf8("showInfo"));
        showInfo->resize(400, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(showInfo->sizePolicy().hasHeightForWidth());
        showInfo->setSizePolicy(sizePolicy);
        showInfo->setMaximumSize(QSize(400, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/Administrator/Desktop/logo-dc/logo128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        showInfo->setWindowIcon(icon);
        showInfo->setToolTipDuration(0);
        tableWidget = new QTableWidget(showInfo);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(221, 221, 221));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(221, 221, 221));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(221, 221, 221));
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 380, 770));
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(380, 770));
        tableWidget->setMaximumSize(QSize(380, 770));
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        statusLabel = new QLabel(showInfo);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(230, 780, 155, 20));
        sizePolicy.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy);
        statusLabel->setMaximumSize(QSize(300, 500));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(7);
        statusLabel->setFont(font);
        statusLabel->setToolTipDuration(3);
        statusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(showInfo);

        QMetaObject::connectSlotsByName(showInfo);
    } // setupUi

    void retranslateUi(QDialog *showInfo)
    {
        showInfo->setWindowTitle(QCoreApplication::translate("showInfo", "\346\214\207\344\273\244\350\257\246\346\203\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("showInfo", "\346\226\207\344\273\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("showInfo", "\346\214\207\344\273\244\345\206\205\345\256\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("showInfo", "\346\222\255\346\224\276\346\227\266\351\227\264", nullptr));
        statusLabel->setText(QCoreApplication::translate("showInfo", "DC\344\275\234\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showInfo: public Ui_showInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWINFO_H
