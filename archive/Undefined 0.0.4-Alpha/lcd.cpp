#include "lcd.h"
#include "ui_lcd.h"

#include <QInputDialog>

LCD::LCD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LCD)
{
    ui->setupUi(this);
}

LCD::~LCD()
{
    delete ui;
}

void LCD::on_Set_clicked()
{
    bool bOk = false;
    int Age = QInputDialog::getInt(this,
                                   "SetNum",
                                   "请输入一个数字：",
                                   2315,
                                   0,
                                   99999,
                                   1,
                                   &bOk);
    if (bOk && Age >= 0) {
        ui->lcdNumber->display(Age);
    }
}

