#include "total_score.h"
#include "ui_total_score.h"

Total_score::Total_score(QString user,QWidget *parent) :
    QWidget(parent),username(user),
    ui(new Ui::Total_score)
{
    ui->setupUi(this);
    QVector <QString> name_list,score_list,time_list,class_list;
    resize(600,400);
    setWindowTitle("成绩查询");
    ui->usernameLable->setText(username+"的成绩");
    ui->paperTable->setColumnCount(4);
    ui->paperTable->setHorizontalHeaderLabels(QStringList() << "试卷名" << "课程" << "试卷发布时间" << "试卷成绩");
    ui->paperTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //以下为测试
    name_list.push_back("Writing");
    class_list.push_back("Chinese");
    time_list.push_back("2021 6 6");
    score_list.push_back("150");
    name_list.push_back("Listening");
    class_list.push_back("English");
    time_list.push_back("2021 6 8");
    score_list.push_back("150");
    name_list.push_back("Drawing");
    class_list.push_back("Math");
    time_list.push_back("2021 6 6");
    score_list.push_back("150");
    name_list.push_back("Droping");
    class_list.push_back("Physic");
    time_list.push_back("2021 6 7");
    score_list.push_back("100");
    //测试结束
    //在数据库里根据username获取该学生考试的信息
    //分别放到上面三个list里，时间早的后丢到vector里
    //三个list的size应相同
    int size = name_list.size();
    ui->paperTable->setRowCount(size);
    for (int i=0;i<size;i++) {
        ui->paperTable->setItem(i,0,new QTableWidgetItem(name_list[i]));
        ui->paperTable->setItem(i,1,new QTableWidgetItem(class_list[i]));
        ui->paperTable->setItem(i,2,new QTableWidgetItem(time_list[i]));
        ui->paperTable->setItem(i,3,new QTableWidgetItem(score_list[i]));
    }
}

Total_score::~Total_score()
{
    delete ui;
}
