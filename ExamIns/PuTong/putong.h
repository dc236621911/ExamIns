#ifndef PUTONG_H
#define PUTONG_H

#include <QDialog>
#include <QTime>
#include "examinfo.h"

#include "Mylog/mylog.h"

namespace Ui {
class putong;
}

class putong : public QDialog
{
    Q_OBJECT

public:
    explicit putong(QWidget *parent = nullptr);
    ~putong();

    QTime getStartTime();
    QTime getEndTime();
    QString getKeMu();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::putong *ui;

    QTime startTime;
    QTime endTime;

    QString kemu;

};

#endif // PUTONG_H
