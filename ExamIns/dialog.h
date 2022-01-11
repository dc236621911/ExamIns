#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include "Mylog/mylog.h"

namespace Ui {
class Dialog;
}
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_startExam_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
