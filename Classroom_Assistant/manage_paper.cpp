#include "manage_paper.h"
#include "ui_manage_paper.h"

Manage_paper::Manage_paper(QString username,QWidget *parent) :
    QWidget(parent),teachername(username),
    ui(new Ui::Manage_paper)
{
    ui->setupUi(this);
    resize(600,400);
    setWindowTitle(teachername+"老师的试卷");
    ui->paperTable->setHorizontalHeaderLabels(QStringList() << "试卷名" << "问题数" << "是否发布" << "操作");
    for(int i=0;i<100;i++) mpp[i] = new Manage_paper_part;
    for(int i=0;i<100;i++)
    {
        connect(mpp[i], &Manage_paper_part::changeBtn_clicked, this, [=](){
            changeBtn_event(i);
        });
        connect(mpp[i], &Manage_paper_part::deleteBtn_clicked, this, [=](){
            deleteBtn_event(i);
        });
        connect(mpp[i], &Manage_paper_part::copyBtn_clicked, this, [=](){
            copyBtn_event(i);
        });
    }
    put_in_paper(QJsonObject());
    insert_paper = new InsertPaper(teachername);
    connect(ui->addBtn, &QPushButton::clicked, insert_paper, &InsertPaper::show);
    connect(insert_paper, &InsertPaper::InsertPaperDone, this, &Manage_paper::put_in_paper);
    //把InsertPaperSuccecced信号改为了InsertPaperDone，包含参数const QJsonObject&
}

Manage_paper::~Manage_paper()
{
    delete ui;
}

void Manage_paper::put_in_paper(const QJsonObject &PaperInfo)
{
    name_list.clear();
    num_list.clear();
    release_list.clear();
    id_list.clear();
    //此处把试卷信息放到vector里,name_list,num_list,release_list,id_list,不需要id_list的话可以不管它
    //以下为测试代码
    name_list.push_back("Chinese");
    num_list.push_back(QString::number(10));
    release_list.push_back("Yes");
    id_list.push_back("");
    name_list.push_back("English");
    num_list.push_back(QString::number(10));
    id_list.push_back("");
    release_list.push_back("Yes");
    name_list.push_back("Math");
    num_list.push_back(QString::number(10));
    id_list.push_back("");
    release_list.push_back("No");
    //测试代码结束
    change_items();
}

void Manage_paper::change_items()
{
//    ui->paperTable->clearContents();
    int size=name_list.size();
    ui->paperTable->setColumnCount(4);
    ui->paperTable->setRowCount(size);
    ui->paperTable->setHorizontalHeaderLabels(QStringList() << "试卷名" << "问题数" << "是否发布" << "操作");
    for (int i=0;i<size;i++) {
        ui->paperTable->setItem(i,0,new QTableWidgetItem(name_list[i]));
        ui->paperTable->setItem(i,1,new QTableWidgetItem(num_list[i]));
        ui->paperTable->setItem(i,2,new QTableWidgetItem(release_list[i]));
        ui->paperTable->setCellWidget(i,3,mpp[i]);
    }
}

void Manage_paper::changeBtn_event(int x)
{

}

void Manage_paper::copyBtn_event(int x)
{
    //我不知道会发生什么,试卷名字是name_list[x],id是id_list
}

void Manage_paper::deleteBtn_event(int x)
{
    QString delete_id = id_list[x];
    //此处把id为delete_id的试卷从数据库里删除
    name_list.erase(name_list.begin()+x);
    release_list.erase(release_list.begin()+x);
    num_list.erase(num_list.begin()+x);
    id_list.erase(id_list.begin()+x);
    change_items();
}

void Manage_paper::on_addBtn_clicked()
{

}

