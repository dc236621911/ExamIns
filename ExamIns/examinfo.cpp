#include "examinfo.h"
#include "ui_examinfo.h"
#include <QDebug>

LOG4QT_DECLARE_STATIC_LOGGER(logger, ExamInfo)

ExamInfo::ExamInfo(qint32 i,QString k,QString t,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExamInfo)
{
    ui->setupUi(this);
    //setAttribute(Qt::WA_DeleteOnClose,true);     //关闭即删除
    //setAttribute(Qt::WA_QuitOnClose,false);     //关闭即删除
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);    // 去掉问号，只保留关闭

    newPlayer = new bofang();

    index = i;      //科目索引
    kemu  = k;
    type  = t;

    if(t == "gk"){//高考模式
        if(index == 0 || index == 2){
            startTime.setHMS(9,0,0);
            endTime.setHMS(11,30,0);
        }else if(index == 1 || index == 3){
            startTime.setHMS(15,0,0);
            endTime.setHMS(17,0,0);
        }
    }
    if(t == "pt"){//普通模式
        startTime = QTime();
        endTime   = QTime();
    }
    playTime = QTime();

    insData =  sounddata();

    soundData = QVector<sound>();
    playTimeList = QVector<QTime>();

    currtIndex = 0;
    //跟随系统毫秒数同步整秒触发
    timer2 = new QTimer(this);

    connect(timer2,&QTimer::timeout,this,[this](){
        QTime t = QTime::currentTime();

        if(t.msec() == 0){//毫秒数为0，更新界面
            this->ui->systemtime->setText(t.toString());
            if(t.second() == 0){//秒数为0时择，则检测播放列表
                //logger()->info()<<"connect QTime t currentTime::"<<t.toString("HH:mm:ss.zzz");
                playIns(t);
            }
        }
    });

    connect(newPlayer,SIGNAL(over()),this,SLOT(nextIns()));
    logger()->info()<<QStringLiteral("当前考试科目：")<<kemu;
}

ExamInfo::~ExamInfo()
{
    delete ui;

    newPlayer->stopPlay();  //停止播放，主要是退出线程

    delete timer2;
    delete newPlayer;

    soundData.clear();
    playTimeList.clear();

    qDebug()<<"~ExamInfo";

}

void ExamInfo::setStartTime(QTime start)
{
    this->startTime = start;
}

void ExamInfo::setEndTime(QTime end)
{
    this->endTime = end;
}

void ExamInfo::init()
{
    initIns();      //初始化指令信息
    initInfo();     //初始科目信息并建立时间轮询事件
    if(!playTimeList.isEmpty()){
        timer2->start(1);
        logger()->info()<<QStringLiteral("Timer2 started;定时器开启！");
    }
}
//初始化考试信息
void ExamInfo::initInfo()
{
    this->ui->kemu->setText(kemu);
    this->ui->starttime->setText(startTime.toString());
    this->ui->endtime->setText(endTime.toString());
    this->ui->systemtime->setText(QTime::currentTime().toString());
    logger()->info()<<QStringLiteral("考试信息界面初始化完毕！");
}
//初始化指令信息
void ExamInfo::initIns()
{
    insData.setType(type);
    insData.setSound();                     //设置指令数据
    soundData = insData.getSound();         //获取指令数据

    //遍历指令数组,组建播放时间队列
    playTimeList.clear();
    QVector<sound>::iterator iter;
    for(iter = soundData.begin(); iter != soundData.end(); iter++){
        if(iter->b){
            playTime = startTime.addSecs(iter->playTime*(-60));
        }else{
            playTime = endTime.addSecs(iter->playTime*(-60));
        }
        playTimeList.append(playTime);      //完成播放队列
    }
    qDebug()<<"ExamInfo initIns 指令播放时间队列 playTimeList::"<<playTimeList;
    //最后一条指令界面提示，并返回
    QTime temp = QTime::currentTime();

    if(temp > playTimeList.last()){//已过最后一条指令，返回，，，，，调试期间关闭，正式发布时开启
        this->ui->ins->setText("播放时间：到播放队列尾！");
        logger()->info()<<QStringLiteral("已到播放队列尾！");
        return;
    }

    if(temp < playTimeList.first()){
        //展示下条指令相关内容
        logger()->info()<<QStringLiteral("展示即将播放的指令相关内容！");
        this->ui->ins->setText("即将播放指令时间："+playTimeList[currtIndex].toString());
        this->ui->inscontent->setText(soundData[currtIndex].playIns);
        return;
    }
    //如不是最后一条指令，择取出下一条播放指令
    for(int j=0;j<playTimeList.count();j++){
        if(temp > playTimeList[j]){
            continue;
        }else{
            currtIndex = j;
            break;
        }
    }
    //展示下条指令相关内容
    logger()->info()<<QStringLiteral("展示下一条即将播放的指令相关内容！");
    this->ui->ins->setText("下条指令播放时间："+playTimeList[currtIndex].toString());
    this->ui->inscontent->setText(soundData[currtIndex].playIns);

    logger()->info()<<QStringLiteral("指令播放列表初始化完毕，初始界面初始化结束！指令开始、结束时间：")<<playTimeList.first().toString()<<QStringLiteral("——")<<playTimeList.last().toString();
}
//播放指令
void ExamInfo::playIns(QTime currTime)
{
    if(playTimeList.isEmpty()){
        QMessageBox::information(this,"播放队列错误","播放队列为空！",QMessageBox::NoButton);
        logger()->info()<<QStringLiteral("播放队列错误，播放队列为空！");
        return;
    }
    if(playTimeList.count() != soundData.count()){
        QMessageBox::information(this,"指令数据错误","指令队列和播放队列长度不一直！",QMessageBox::NoButton);
        logger()->info()<<QStringLiteral("指令数据错误，指令原始队列和播放队列长度不一直！");
        return;
    }

    int msec = currTime.msec();//取出当前时间的毫秒数
    if(msec != 0){
        currTime = currTime.addMSecs(-1*msec);  //确保当前时间毫秒数始终为0
    }

    logger()->info()<<"playIns QTime currTime:: "<<currTime.toString("HH:mm:ss.zzz");

    if(playTimeList.contains(currTime)){

        int index = playTimeList.indexOf(currTime);
        if(index == -1){
            QMessageBox::information(this,"错误","播放队列错误！",QMessageBox::NoButton);
            return;
        }
        currtIndex = index;
        sound currentData = soundData[index];

        this->ui->ins->setText("播放时间："+currTime.toString());
        this->ui->inscontent->setText(currentData.playIns);

        logger()->info()<<QStringLiteral("当前指令索引：")<<index<<QStringLiteral("；播放时间：")<<currTime.toString()<<QStringLiteral("；指令内容：")<<currentData.playIns<<QStringLiteral("；音频文件：")<<currentData.playFile;
        //qDebug()<<"当前指令索引："<<index<<"；播放时间："<<currTime.toString()<<"；指令内容："<<currentData.playIns<<"；音频文件："<<currentData.playFile;

        playMp3("Mp3/"+currentData.playFile);//播放音频
    }
}
//播放音频
void ExamInfo::playMp3(QString filePath)
{
    logger()->info()<<"ExamInfo playMp3 filePath::"<<filePath;
    if(filePath == ""){
        QMessageBox::critical(this,"错误","音频文件错误！",QMessageBox::NoButton);
        return;
    }
    newPlayer->setFilePath(filePath);
    newPlayer->playMp3();
}
//检测系统唤醒事件
//bool ExamInfo::​nativeEvent(const QByteArray &eventType, void *message, long *result)
//{

//}

//显示详细指令信息
void ExamInfo::on_inslist_clicked()
{
    showInfo *sInfo;
    sInfo = new showInfo();

    sInfo->setData(soundData,startTime,endTime);
    sInfo->showData();
    sInfo->show();//非模态状态，用指针
}
//停止当前页面运行
void ExamInfo::on_stop_clicked()
{
    newPlayer->stopPlay();//停止播放器线程
    timer2->stop();
    delete timer2;
    delete newPlayer;

    soundData.clear();
    playTimeList.clear();

    this->close();

    if(this->type == "gk"){
        logger()->info()<<QStringLiteral("高考模式对话框重启,重新选择科目！");
        gaokao g2;
        g2.exec();
    }else if(this->type == "pt"){
        logger()->info()<<QStringLiteral("普通模式对话框重启,重新选择科目！");
        putong p2;
        p2.exec();
    }

}
//展示下一条指令
void ExamInfo::nextIns()
{
    if(currtIndex+1 == playTimeList.count()){
        this->ui->ins->setText("指令播放结束！");
        this->ui->inscontent->setText("");
    }else{
        this->ui->ins->setText("下条指令播放时间："+playTimeList[currtIndex+1].toString());
        this->ui->inscontent->setText(soundData[currtIndex+1].playIns);
    }
}
