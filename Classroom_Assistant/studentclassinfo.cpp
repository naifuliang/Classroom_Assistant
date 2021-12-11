#include "studentclassinfo.h"
#include "ui_studentclassinfo.h"

StudentClassInfo::StudentClassInfo(const QJsonObject &NewClass,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentClassInfo)
{
    ui->setupUi(this);
    Class = &NewClass;
    //显示课堂详细信息
    quiz_score = new Quiz_score(username,classname);
    setWindowTitle(Class->value("className").toString());
    ui->classIDLabel->setText(QString::number(Class->value("id").toInt()));
    ui->classNameLabel->setText(Class->value("className").toString());
    ui->teacherNameLabel->setText(Class->value("teacherName").toString());
    ui->signupLabel->setText(QString::number(Class->value("sign_up").toInt())+"/"+QString::number(Class->value("sign_up_total").toInt()));
    connect(ui->QuizScoreBtn, &QPushButton::clicked, quiz_score, &Quiz_score::show);
}

StudentClassInfo::~StudentClassInfo()
{
    delete ui;
}

void StudentClassInfo::closeEvent(QCloseEvent *event){
    emit StuCLassInfoClosed();
}
