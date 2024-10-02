#ifndef WHAT_H
#define WHAT_H

#include <QDialog>

namespace Ui {
class What;
}

class What : public QDialog
{
    Q_OBJECT

public:
    explicit What(QWidget *parent = nullptr);
    ~What();

private slots:
    void on_pushButton_clicked();

private:
    Ui::What *ui;
};

#endif // WHAT_H
