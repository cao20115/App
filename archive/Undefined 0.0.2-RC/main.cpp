#include "mainwindow.h"
#include "start.h"
#include "a1.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Start start;
    a1 about;
    QApplication::setStyle(QStyleFactory::create("Windowsvista"));
    if (start.exec() == QDialog::Accepted) {
        if (about.exec() == QDialog::Accepted) {
            w.show();
            return a.exec();
        }
        else return 0;
    }
    else return 0;
}
