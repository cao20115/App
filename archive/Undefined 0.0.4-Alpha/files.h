#ifndef FILES_H
#define FILES_H

#include <QDialog>

namespace Ui {
class Files;
}

class Files : public QDialog
{
    Q_OBJECT

public:
    explicit Files(QWidget *parent = nullptr);
    ~Files();

private:
    Ui::Files *ui;
};

#endif // FILES_H
