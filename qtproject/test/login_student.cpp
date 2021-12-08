#include "login_student.h"
#include "ui_login_student.h"

Login_student::Login_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_student)
{
    ui->setupUi(this);
}

Login_student::~Login_student()
{
    delete ui;
}
