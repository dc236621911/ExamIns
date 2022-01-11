#include "dialog.h"
#include "ui_dialog.h"

#include "gaokao.h"
#include "putong.h"

LOG4QT_DECLARE_STATIC_LOGGER(logger, QDialog)

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // 去掉问号，只保留关闭
    //setAttribute(Qt::WA_DeleteOnClose);     //关闭即删除
    /*
        注：在多界面程序中初始过程界面不能使用次属性，否则会造成后续界面运行时内存越界，只能在最后界面使用此属性！
    */

    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_startExam_clicked()
{
    this->close();//关闭原对话框
    if(this->ui->gaokao->isChecked()){
        logger()->info()<<QStringLiteral("高考模式被选中！");
        gaokao g1;
        g1.exec();
    }else if(this->ui->putong->isChecked()){
        logger()->info()<<QStringLiteral("普通模式被选中！");
        putong p1;
        p1.exec();
    }
}
