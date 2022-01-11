#include "putong.h"
#include "ui_putong.h"
#include <QMessageBox>

LOG4QT_DECLARE_STATIC_LOGGER(logger, putong)

putong::putong(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::putong)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);    // 去掉问号，只保留关闭

    //setAttribute(Qt::WA_DeleteOnClose);//关闭即删除
}

putong::~putong()
{
    delete ui;
}

QTime putong::getStartTime()
{
    return startTime;
}

QTime putong::getEndTime()
{
    return endTime;
}

QString putong::getKeMu()
{
    return kemu;
}
/*科目索引  科目  开始时间   结束时间
0   语文          8：00       10：30
1   数学          8：00        10：00
2   思想政治       10：20        11：50
3   外语          8：00        10：00
4   物理/历史       2：00        3：30
5   信息/通用技术    3:50         4:50
6   化学/地理       2:00        3:30
7   地理          3:50        5:20
8   生物          2:00        3:30
9   物理          2:00        3:30
10  历史          2:00        3:30
11  信息技术       3:50         4:50
12  通用技术        3:50        4:50
13  其他          0:00        0:00
*/
//下拉列表框值变化
void putong::on_comboBox_currentIndexChanged(int index)
{
    kemu = ui->comboBox->currentText();
    this->ui->startTime->clear();
    this->ui->endTime->clear();
    logger()->info()<<QStringLiteral("科目改变，索引-科目")<<index<<"   "<<kemu;
    if(index == 0){
        ui->startTime->setTime(QTime::fromString("08:00:00"));
        ui->endTime->setTime(QTime::fromString("10:30:00"));
    }

      if(index == 1){
          ui->startTime->setTime(QTime::fromString("08:00:00"));
          ui->endTime->setTime(QTime::fromString("10:00:00"));
      }
     if(index == 2){
         ui->startTime->setTime(QTime::fromString("10:20:00"));
         ui->endTime->setTime(QTime::fromString("11:50:00"));
     }
     if(index == 3){qDebug()<<"wy3";
         ui->startTime->setTime(QTime::fromString("08:00:00"));
         ui->endTime->setTime(QTime::fromString("10:00:00"));
     }
      if(index == 4){
          ui->startTime->setTime(QTime::fromString("14:00:00"));
          ui->endTime->setTime(QTime::fromString("15:30:00"));
      }
      if(index == 5){
          ui->startTime->setTime(QTime::fromString("15:50:00"));
          ui->endTime->setTime(QTime::fromString("16:50:00"));
      }
      if(index == 6){
          ui->startTime->setTime(QTime::fromString("14:00:00"));
          ui->endTime->setTime(QTime::fromString("15:30:00"));
      }
      if(index == 7){
          ui->startTime->setTime(QTime::fromString("15:50:00"));
          ui->endTime->setTime(QTime::fromString("17:20:00"));
      }
       if(index == 8){
           ui->startTime->setTime(QTime::fromString("14:00:00"));
           ui->endTime->setTime(QTime::fromString("15:30:00"));
       }
        if(index == 9){
            ui->startTime->setTime(QTime::fromString("14:00:00"));
            ui->endTime->setTime(QTime::fromString("15:30:00"));
        }
       if(index == 10){
           ui->startTime->setTime(QTime::fromString("14:00:00"));
           ui->endTime->setTime(QTime::fromString("15:30:00"));
       }
        if(index == 11){
            ui->startTime->setTime(QTime::fromString("15:50:00"));
            ui->endTime->setTime(QTime::fromString("16:50:00"));
        }
        if(index == 12){
            ui->startTime->setTime(QTime::fromString("15:50:00"));
            ui->endTime->setTime(QTime::fromString("16:50:00"));
        }
        if(index == 13){
            ui->startTime->setTime(QTime::fromString("00:00:00"));
            ui->endTime->setTime(QTime::fromString("00:00:00"));
        }
}
//确定进入考试信息页面
void putong::on_pushButton_clicked()
{
    int i = this->ui->comboBox->currentIndex();
    QString  k = this->ui->comboBox->currentText();

    QTime t1 = this->ui->startTime->time();
    QTime t2 = this->ui->endTime->time();
    if(t1 >= t2){
        QMessageBox::warning(this,"错误","考试时间配置错误，请重新配置！");
        logger()->info()<<QStringLiteral("考试时间配置错误，考试开始时间大于结束时间！");
        return;
    }
    if((t2.hour() - t1.hour()) < 1){
        QMessageBox::warning(this,"错误","考试时间间隔太短，不符合考试要求！");
        logger()->info()<<QStringLiteral("考试时间配置错误，考试时间间隔太短，不符合考试要求！");
        return;
    }

    logger()->info()<<QStringLiteral("普通模式设置确定，科目：")<<k<<QStringLiteral(";索引值：")<<i<<QStringLiteral("；考试开始结束时间：")<<t1.toString()<<"-"<<t2.toString();


    ExamInfo *newExam = new ExamInfo(i,k,"pt");//堆

    newExam->setStartTime(t1);
    newExam->setEndTime(t2);
    newExam->init();

    this->close();
    newExam->show();
}
