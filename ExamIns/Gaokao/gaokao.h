#ifndef GAOKAO_H
#define GAOKAO_H

#include <QDialog>
#include <QTime>

#include "Mylog/mylog.h"

namespace Ui {
class gaokao;
}

class gaokao : public QDialog
{
    Q_OBJECT

public:
    explicit gaokao(QWidget *parent = nullptr);
    ~gaokao();

private slots:
    void on_pushButton_clicked();


private:
    Ui::gaokao *ui;
};

#endif // GAOKAO_H
