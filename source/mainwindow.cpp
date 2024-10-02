#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "a1.h"
#include "file.h"
#include "what.h"
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->about, SIGNAL(triggered()), this, SLOT(on_actionAbout_clicked()));
    connect(ui->check, SIGNAL(triggered()), this, SLOT(on_check_clicked()));
    connect(ui->what, SIGNAL(triggered()), this, SLOT(on_what_clicked()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_clicked()
{
    a1 *about;
    about = new a1();
    about->show();
}

void MainWindow::on_check_clicked()
{
    File *check;
    check = new File();
    check->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}

void MainWindow::on_what_clicked()
{
    What *what;
    what = new What();
    what->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    bool bOk = false;
    int Age = QInputDialog::getInt(this,
                                   "SetNum",
                                   "请输入一个数字：",
                                   2315,
                                   0,
                                   9999,
                                   1,
                                   &bOk);
    if (bOk && Age >= 0) {
        ui->lcd->display(Age);
    }
}

