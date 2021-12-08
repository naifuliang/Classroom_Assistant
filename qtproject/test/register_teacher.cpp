#include "register_teacher.h"
#include "ui_register_teacher.h"

Register_Teacher::Register_Teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_Teacher)
{
    ui->setupUi(this);
}

Register_Teacher::~Register_Teacher()
{
    delete ui;
}
