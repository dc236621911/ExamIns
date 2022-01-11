#ifndef SHOWINFO_H
#define SHOWINFO_H

#include <QDialog>
#include <QTime>
#include <QTableWidgetItem>
#include "data.h"
#include "Mylog/mylog.h"
namespace Ui {
class showInfo;
}

class showInfo : public QDialog
{
    Q_OBJECT

public:
    explicit showInfo(QWidget *parent = nullptr);
    void setData(QVector<sound>    s,QTime st,QTime et);//设置属性
    void showData();//表格中显示属性
    ~showInfo();

private:
    Ui::showInfo *ui;

    QVector<sound>    soundData;    //指令数据列表
    QTime startTime;
    QTime endTime;
    QTime playTime;
};

#endif // SHOWINFO_H
