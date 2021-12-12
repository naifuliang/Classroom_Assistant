#include "teacherclassinfo.h"
#include "ui_teacherclassinfo.h"

TeacherClassInfo::TeacherClassInfo(const QJsonObject &NewClass,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeacherClassInfo)
{
    ui->setupUi(this);
    Class = &NewClass;
    //显示课堂详细信息
    setWindowTitle(Class->value("className").toString());
    ui->classIDLabel->setText(QString::number(Class->value("id").toInt()));
    ui->classNameLabel->setText(Class->value("className").toString());


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

