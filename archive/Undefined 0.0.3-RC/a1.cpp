#include "a1.h"
#include "ui_a1.h"

a1::a1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::a1)
{
    ui->setupUi(this);
}

a1::~a1()
{
    delete ui;
}

void a1::on_buttonBox_rejected()
{
    ui->~a1();
}

