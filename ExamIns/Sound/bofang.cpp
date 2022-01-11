#include "bofang.h"
#include <QDir>
#include <QFile>
#include <QCoreApplication>

LOG4QT_DECLARE_STATIC_LOGGER(logger, bofang)

bofang::bofang(QString filePath, QObject *parent):
    QObject(parent)
{
    player = new QMediaPlayer();
    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(changeStatus(QMediaPlayer::State)));
    newThread = new QThread();
    if(status){//如正有音频播放则，返回
        return;
    }

    fPath = filePath;
    logger()->info()<<QStringLiteral("当前运行目录：")<<QCoreApplication::applicationDirPath();
}

bofang::~bofang()
{

}

void bofang::playMp3()
{
    logger()->info()<<"QFile::exists::"<<QFile::exists(fPath)<<";  QDir::currentPath()::"<<QDir::currentPath()<<"    QUrl::fromLocalFile::"<<QUrl::fromLocalFile(fPath).toString();
    if(!QFile::exists(fPath)){
        logger()->info()<<QStringLiteral("音频文件不存在：")<<fPath;
        return;
    }
    player->setMedia(QUrl::fromLocalFile(fPath));
    player->setVolume(100);

    player->moveToThread(newThread);
    newThread->start();

    player->play();

}
//停止播放
void bofang::stopPlay()
{
    logger()->info()<<"newThread->isRunning::"<<newThread->isRunning();
    logger()->info()<<"player->state::"<<player->state();
    if(newThread->isRunning()){
        newThread->exit();      //退出线程
    }
    if(player->state() == 1){
        player->stop();
    }
    logger()->info()<<QStringLiteral("停止播放！");
}

void bofang::setFilePath(QString filepath)
{
    if(filepath == ""){
        return;
    }
    fPath = filepath;
}

void bofang::changeStatus(QMediaPlayer::State state)
{
    logger()->info()<<QStringLiteral("player改变前status：")<<status;
    if(state == 0){
        status =  0;
        logger()->info()<<QStringLiteral("指令播放结束，文件地址为：")<<QUrl::fromLocalFile(fPath).toString();
        emit over();
    }else if(state == 1){
        status = 1;
        logger()->info()<<QStringLiteral("成功播放，文件地址为：")<<QUrl::fromLocalFile(fPath).toString();
    }
    logger()->info()<<QStringLiteral("player改变后status：")<<status;
    logger()->info()<<QStringLiteral("*****************changeStatus状态改变分割线*****************");
}
