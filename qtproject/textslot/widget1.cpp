#include "widget1.h"
#include "ui_widget1.h"

widget1::widget1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget1)
{
    ui->setupUi(this);
}

widget1::~widget1()
{
    delete ui;
}
