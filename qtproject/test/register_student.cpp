#include "register_student.h"
#include "ui_register_student.h"

Register_Student::Register_Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_Student)
{
    ui->setupUi(this);
}

Register_Student::~Register_Student()
{
    delete ui;
}
