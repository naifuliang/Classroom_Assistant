#include "student_manage.h"
#include "ui_student_manage.h"

Student_manage::Student_manage(QString teacher,QString classn,QWidget *parent) :
    QWidget(parent),teachername(teacher),classname(classn),
    ui(new Ui::Student_manage)
{
    ui->setupUi(this);
    setWindowTitle("学生名单");
    ui->classLable->setText(teachername+"的"+classname+"课学生名单");
    for(int i=0;i<100;i++) smp[i]= new Student_manage_part;
    //此处根据teachername和classname得到这个课的学生的信息，放到studend_name,studend_id里
    //此处为测试数据
    student_name.push_back("Lisi");
    student_id.push_back(2021);
    student_name.push_back("Zhaowu");
    student_id.push_back(2022);
    student_name.push_back("Wangqi");
    student_id.push_back(2023);
    student_name.push_back("www");
    student_id.push_back(2024);
    //测试数据结束
    int size=student_name.size();
    ui->studentTable->setColumnCount(3);
    ui->studentTable->setRowCount(size);
    ui->studentTable->setHorizontalHeaderLabels(QStringList() << "学生姓名" << "学号" << "操作");
    for (int i=0;i<size;i++) {
        ui->studentTable->setItem(i,0,new QTableWidgetItem(student_name[i]));
        ui->studentTable->setItem(i,1,new QTableWidgetItem(QString::number(student_id[i])));
        ui->studentTable->setCellWidget(i,2,smp[i]);
        connect(smp[i], &Student_manage_part::check_score, this, [=](){
            student_score = new Quiz_score(student_name[i],classname);
            student_score->show();
        });
    }
}

Student_manage::~Student_manage()
{
    delete ui;
}
