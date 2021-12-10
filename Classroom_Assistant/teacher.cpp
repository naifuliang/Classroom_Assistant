#include "teacher.h"
#include "ui_teacher.h"

Teacher::Teacher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
}

Teacher::~Teacher()
{
    delete ui;
}

void Teacher::setattribute(int ui, QString pss, QString cla)
{
    Uid = ui;
    Password = pss;
    Class = cla;
}
