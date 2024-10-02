#include "file.h"
#include "ui_file.h"

File::File(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::File)
{
    ui->setupUi(this);
    m_model = new QFileSystemModel;

    //设置要显示的根目录
    m_model->setRootPath(QDir::currentPath());

    //设置数据源
    ui->treeView->setModel(m_model);

    //设置树形视图的根节点
    //ui->treeView->setRootIndex(m_model->index(QDir::currentPath()));
    ui->treeView->setRootIndex(m_model->index("D:"));
    connect(ui->treeView,&QTreeView::clicked,this,&File::TreeClicked);

}

File::~File()
{
    delete ui;
}

void File::TreeClicked(const QModelIndex &index)
{
    //获取被点击的文件的信息并显示
    QString strShow = m_model->isDir(index)? "selected is dir: ":"selected is file: ";
    strShow.append(m_model->fileName(index));
    ui->textBrowser->append(strShow);

}

void File::on_buttonBox_accepted()
{
    ui->~File();
}


void File::on_buttonBox_rejected()
{
    ui->~File();
}

