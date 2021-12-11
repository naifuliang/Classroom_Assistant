#include "check_page.h"
#include "ui_check_page.h"

Check_page::Check_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Check_page)
{
    ui->setupUi(this);
}

Check_page::~Check_page()
{
    delete ui;
}
