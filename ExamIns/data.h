#ifndef DATA_H
#define DATA_H

#include <QTime>
#include <QVector>

struct sound{
    qint32  playTime;       //播放时间差值,时间分整数
    QString playIns;        //播放指令内容
    QString playFile;       //指令音频文件
    bool    b;              //true为考前指令，false为考后指令
};

class sounddata
{
public:
    sounddata(QString type="");         //type 取值为高考模式=gk，普通模式=pt
    ~sounddata();
    void setSound();            //设置指令数据
    void setType(QString type="");//设置考试类型
    QVector<sound> getSound();//返回指令数据

private:
    void initSoundData(sound s);        //初始化考试指令数据

private:
    QVector<sound>  soundData1;      //详细指令数据
    QString         examType = "";       //考试类型
};

#endif // DATA_H
