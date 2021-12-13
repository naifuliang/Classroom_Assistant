#include "teacherclassinfo.h"
#include "ui_teacherclassinfo.h"

TeacherClassInfo::TeacherClassInfo(const QJsonObject &NewClass,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeacherClassInfo)
{
    ui->setupUi(this);
    resize(600,400);
    Class = &NewClass;
    classname="",username="";//此处获取老师的名字和课程的名字
    //显示课堂详细信息
    setWindowTitle(Class->value("className").toString());
    ui->classIDLabel->setText(QString::number(Class->value("id").toInt()));
    ui->classNameLabel->setText(Class->value("className").toString());
    student_manage = new Student_manage(username,classname);
    connect(ui->StudentManageButton, &QPushButton::clicked, student_manage, &Student_manage::show);
}

TeacherClassInfo::~TeacherClassInfo()
{
    delete ui;
}

void TeacherClassInfo::closeEvent(QCloseEvent *event){
    emit TchCLassInfoClosed();
}

void TeacherClassInfo::on_QuizButton_clicked()
{
    extern QWidget *mainwindowptr;
    insertpaper = new InsertPaper;
    connect(insertpaper,&InsertPaper::InsertPaperClosed,mainwindowptr,[=](){
        delete insertpaper;
        qDebug()<<"insertpaper指针已删除";
    });
    insertpaper->show();
}

