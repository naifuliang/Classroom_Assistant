#include "teacherclassinfo.h"
#include "ui_teacherclassinfo.h"

TeacherClassInfo::TeacherClassInfo(const QJsonObject &NewClass,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeacherClassInfo)
{
    ui->setupUi(this);
    publishquiz = 0;
    resize(600,400);
    Class = &NewClass;
    classname="",username="";//此处获取老师的名字和课程的名字
    //显示课堂详细信息
    setWindowTitle(Class->value("className").toString());
    ui->classIDLabel->setText(QString::number(Class->value("id").toInt()));
    ui->classNameLabel->setText(Class->value("className").toString());
    student_manage = new Student_manage(username,classname);
    connect(ui->StudentManageButton, &QPushButton::clicked, student_manage, &Student_manage::show);
    connect(ui->QuizButton,&QPushButton::clicked,this,[=](){
        publishquiz = new PublishQuiz(username,NewClass.value("id").toString(),nullptr);
        extern QWidget *mainwindowptr;
        connect(publishquiz,&PublishQuiz::PublishQuizClosed,mainwindowptr,[=](){
            delete publishquiz;
        });
        publishquiz->show();
    });
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

}

