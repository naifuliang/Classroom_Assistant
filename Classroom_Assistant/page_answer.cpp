#include "page_answer.h"
#include "ui_page_answer.h"

Page_answer::Page_answer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_answer)
{
    ui->setupUi(this);
}

Page_answer::~Page_answer()
{
    delete ui;
}
