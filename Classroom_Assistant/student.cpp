#include "student.h"
#include "ui_student.h"

Student::Student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
}

Student::~Student()
{
    delete ui;
}

void Student::setattribute(int ui, QString pss, QString cla)
{
    Uid = ui;
    Password = pss;
    Class = cla;
}
