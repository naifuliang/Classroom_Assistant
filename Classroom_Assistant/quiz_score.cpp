#include "quiz_score.h"
#include "ui_quiz_score.h"

//按钮“考试成绩”，点击按钮后进入子页面显示“列表包含试卷名，
//试卷发布时间，试卷成绩（考试成绩/总成绩）”。

Quiz_score::Quiz_score(QString usernam,QString classnam,QWidget *parent) :
    QWidget(parent),username(usernam),classname(classnam),
    ui(new Ui::Quiz_score)
{
    ui->setupUi(this);
    QVector <QString> name_list,score_list,time_list;
    setWindowTitle(username+"的"+classname+"成绩");
    ui->classnameLable->setText(classname);
    ui->pageTable->setColumnCount(3);
    ui->pageTable->setHorizontalHeaderLabels(QStringList() << "试卷名" << "试卷发布时间" << "试卷成绩");
    ui->pageTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //以下为测试
    name_list.push_back("Chinese");
    time_list.push_back("2021 6 6");
    score_list.push_back("150");
    name_list.push_back("English");
    time_list.push_back("2021 6 8");
    score_list.push_back("150");
    name_list.push_back("Math");
    time_list.push_back("2021 6 6");
    score_list.push_back("150");
    name_list.push_back("Physic");
    time_list.push_back("2021 6 7");
    score_list.push_back("100");
    //测试结束
    //在数据库里根据username和classname获取该学生该课程考试的信息
    //分别放到上面三个list里，时间早的后丢到vector里
    //三个list的size应相同
    int size = name_list.size();
    ui->pageTable->setRowCount(size);
    for (int i=0;i<size;i++) {
        ui->pageTable->setItem(i,0,new QTableWidgetItem(name_list[i]));
        ui->pageTable->setItem(i,1,new QTableWidgetItem(time_list[i]));
        ui->pageTable->setItem(i,2,new QTableWidgetItem(score_list[i]));
    }
}

Quiz_score::~Quiz_score()
{
    delete ui;
}
