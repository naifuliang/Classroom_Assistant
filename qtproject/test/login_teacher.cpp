#include "login_teacher.h"
#include "ui_login_teacher.h"

Login_teacher::Login_teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_teacher)
{
    ui->setupUi(this);
}

Login_teacher::~Login_teacher()
{
    delete ui;
}
