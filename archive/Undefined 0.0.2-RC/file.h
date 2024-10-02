#ifndef FILE_H
#define FILE_H

#include <QDialog>
#include <QFileSystemModel>

namespace Ui {
class File;
}

class File : public QDialog
{
    Q_OBJECT

public:
    explicit File(QWidget *parent = nullptr);
    ~File();


public slots:
    //文件列表被单击时，调用此函数
    void TreeClicked(const QModelIndex &index);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::File *ui;
    QFileSystemModel *m_model;
};

#endif // FILE_H
