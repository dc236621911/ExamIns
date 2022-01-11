#include "showinfo.h"
#include "ui_showinfo.h"

LOG4QT_DECLARE_STATIC_LOGGER(logger, showInfo)

showInfo::showInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showInfo)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);//退出时自动删除
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);    // 去掉问号，只保留关闭

    this->ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//不能对表格内容进行编辑
    this->ui->tableWidget->setColumnWidth(0,65);
    this->ui->tableWidget->setColumnWidth(1,216);
    this->ui->tableWidget->setColumnWidth(2,80);

    this->ui->tableWidget->verticalHeader()->setVisible(false);//隐藏垂直表头
    this->ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:rgb(231,231,231);}");//表头背景颜色
    this->ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);//表头固定宽度
    this->ui->tableWidget->horizontalHeader()->setSectionsClickable(false);//禁止表头鼠标左键点击
    //this->ui->tableWidget->resizeRowsToContents();//根据内容调整行高
    connect(ui->tableWidget,SIGNAL(itemChanged(QTableWidgetItem*)),
                ui->tableWidget,SLOT(resizeRowsToContents()) );//行内容自动换行，根据内容调整行高
}

void showInfo::setData(QVector<sound> s, QTime st, QTime et)
{
    soundData = s;
    startTime = st;
    endTime   = et;
}

void showInfo::showData()
{
    if(soundData.count()<=0){
        return;
    }
    this->ui->tableWidget->setRowCount(soundData.count());
    int i = 0;
    //遍历指令数组
    QVector<sound>::iterator iter;
    for(iter = soundData.begin(); iter != soundData.end(); iter++){
        if(iter->b){
            playTime = startTime.addSecs(iter->playTime*(-60));
        }else{
            playTime = endTime.addSecs(iter->playTime*(-60));
        }
        QTableWidgetItem *newItem1 = new QTableWidgetItem(iter->playFile);
        QTableWidgetItem *newItem2 = new QTableWidgetItem(iter->playIns);
        QTableWidgetItem *newItem3 = new QTableWidgetItem(playTime.toString("hh:mm:ss"));

        newItem1->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        newItem3->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

        newItem1->setFlags(Qt::ItemIsAutoTristate);
        newItem2->setFlags(Qt::ItemIsAutoTristate);
        newItem3->setFlags(Qt::ItemIsAutoTristate);

        newItem1->setForeground(QColor(8,8,8));
        newItem2->setForeground(QColor(8,8,8));
        newItem3->setForeground(QColor(8,8,8));

        this->ui->tableWidget->setItem(i,0,newItem1);
        this->ui->tableWidget->setItem(i,1,newItem2);
        this->ui->tableWidget->setItem(i,2,newItem3);

        i++;
    }

    logger()->info()<<QStringLiteral("查看指令详情！");

}

showInfo::~showInfo()
{
    delete ui;
}
