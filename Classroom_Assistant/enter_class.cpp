#include "enter_class.h"
#include "ui_enter_class.h"

Enter_class::Enter_class(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Enter_class)
{
    ui->setupUi(this);
}

Enter_class::~Enter_class()
{
    delete ui;
}
