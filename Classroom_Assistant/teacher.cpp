#include "teacher.h"
#include "ui_teacher.h"

Teacher::Teacher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    resize(800,600);
}

Teacher::~Teacher()
{
    delete ui;
}

void Teacher::setattribute(int ui, QString pss, QString nam)
{
    Uid = ui;
    Password = pss;
    Name = nam;
}
