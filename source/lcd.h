#ifndef LCD_H
#define LCD_H

#include <QDialog>

namespace Ui {
class LCD;
}

class LCD : public QDialog
{
    Q_OBJECT

public:
    explicit LCD(QWidget *parent = nullptr);
    ~LCD();

private slots:

    void on_Set_clicked();

private:
    Ui::LCD *ui;
};

#endif // LCD_H
