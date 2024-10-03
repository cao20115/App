#ifndef A1_H
#define A1_H

#include <QDialog>

namespace Ui {
class a1;
}

class a1 : public QDialog
{
    Q_OBJECT

public:
    explicit a1(QWidget *parent = nullptr);
    ~a1();

private slots:
    void on_buttonBox_rejected();

private:
    Ui::a1 *ui;
};

#endif // A1_H
