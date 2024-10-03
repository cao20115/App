#include "what.h"
#include "ui_what.h"

What::What(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::What)
{
    ui->setupUi(this);
}

What::~What()
{
    delete ui;
}

void What::on_pushButton_clicked()
{
    ui->~What();
}

