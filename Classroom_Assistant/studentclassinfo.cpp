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
    paper_id = 0;//这里获取试卷的编号，如果没有试卷请把它设为-1
    paper = new Page_answer(paper_id);
    setWindowTitle(Class->value("className").toString());
    ui->classIDLabel->setText(QString::number(Class->value("id").toInt()));
    ui->classNameLabel->setText(Class->value("className").toString());
    ui->teacherNameLabel->setText(Class->value("teacherName").toString());
    ui->signupLabel->setText(QString::number(Class->value("sign_up").toInt())+"/"+QString::number(Class->value("sign_up_total").toInt()));
    connect(ui->QuizScoreBtn, &QPushButton::clicked, quiz_score, &Quiz_score::show);
    connect(ui->enterquizBtn, &QPushButton::clicked ,this ,[=](){
        if(paper_id == -1) QMessageBox::information(this, "试卷不存在", "暂时没有试卷哦，小可爱可以划水啦");
        else paper->show();
    });
}

StudentClassInfo::~StudentClassInfo()
{
    delete ui;
}

void StudentClassInfo::closeEvent(QCloseEvent *event){
    emit StuCLassInfoClosed();
}
