#ifndef BOFANG_H
#define BOFANG_H

#include <QObject>
#include <QThread>
#include <QMediaPlayer>

#include "Mylog/mylog.h"
class bofang : public QObject
{
    Q_OBJECT
public:
    explicit bofang(QString filePath = "",QObject *parent = nullptr);
    ~bofang();
    void playMp3();
    void stopPlay();
    void setFilePath(QString filepath);

signals:
    void over();

public slots:
    void changeStatus(QMediaPlayer::State state);
private:
    bool status = 0;
    QString fPath = "";
    QMediaPlayer *player;
    QThread *newThread;
};

#endif // BOFANG_H
