#include "files.h"
#include "ui_files.h"

Files::Files(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Files)
{
    ui->setupUi(this);
}

Files::~Files()
{
    delete ui;
}
