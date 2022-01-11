#include "gaokao.h"
#include "ui_gaokao.h"
#include "examinfo.h"
#include <QDebug>

LOG4QT_DECLARE_STATIC_LOGGER(logger, gaokao)

gaokao::gaokao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gaokao)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);    // 去掉问号，只保留关闭
    //setAttribute(Qt::WA_DeleteOnClose);//关闭即删除
}

gaokao::~gaokao()
{
    delete ui;
}
//确定按钮处理槽
void gaokao::on_pushButton_clicked()
{
    //qDebug()<<"current index:"<<ui->comboBox->currentIndex();
    //qDebug()<<"current index text:"<<this->ui->comboBox->currentText();

    logger()->info()<<QStringLiteral("高考模式设置，科目：")<<this->ui->comboBox->currentText()<<QStringLiteral("，科目索引值：")<<this->ui->comboBox->currentIndex();

    int i = this->ui->comboBox->currentIndex();
    QString k = this->ui->comboBox->currentText();
    ExamInfo *info = new ExamInfo(i,k,"gk",nullptr);

    this->close();
    info->init();
    info->show();
}
