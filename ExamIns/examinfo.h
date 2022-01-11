#ifndef EXAMINFO_H
#define EXAMINFO_H

#include <QDialog>
#include <QTime>
#include <QTimer>
#include <QMessageBox>

//#include "windows.h"
#include "data.h"
#include "bofang.h"
#include "gaokao.h"
#include "putong.h"
#include "showinfo.h"

#include "Mylog/mylog.h"
namespace Ui {
class ExamInfo;
}
class ExamInfo : public QDialog
{
    Q_OBJECT

public:
    explicit ExamInfo(int i=0,QString k="",QString t="",QWidget *parent = nullptr);
    ~ExamInfo();
    void setStartTime(QTime start);
    void setEndTime(QTime end);
    void init();//全局数据初始化

private:
    void initInfo();                //初始化考试信息
    void initIns();                 //初始化指令信息
    void playIns(QTime currTime);   //播放指令类容
    void playMp3(QString filePath); //播放音频

    //bool ​nativeEvent(const QByteArray & eventType, void * message, long * result);

private:
    Ui::ExamInfo *ui;

    int index;                      //科目索引
    QString kemu;                   //科目
    QString type;                   //考试类型

    QTime   startTime;              //考试开始时间
    QTime   endTime;                //考试结束时间
    QTime   playTime;           //当前指令播放时间
    int     currtIndex;         //当前指令索引

    QTimer *timer2;                 //系统同步整秒触发器

    sounddata        insData;      //指令数据

    QVector<sound>    soundData;    //指令数据列表
    QVector<QTime>    playTimeList; //单纯播放时间队列

    bofang *newPlayer;              //播放类

private slots:
    void on_inslist_clicked();
    void on_stop_clicked();

    void nextIns();//展示下一条指令
};

#endif // EXAMINFO_H
