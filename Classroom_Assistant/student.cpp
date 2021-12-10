#include "student.h"
#include "ui_student.h"

Student::Student(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    resize(800,600);
}

Student::~Student()
{
    delete ui;
}

void Student::setattribute(int ui, QString pss, QString nam)
{
    Uid = ui;
    Password = pss;
    Name = nam;
}
