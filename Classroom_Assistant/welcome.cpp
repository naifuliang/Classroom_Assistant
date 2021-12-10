#include "welcome.h"
#include "ui_welcome.h"

Welcome::Welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
    resize(800,600);
    connect(ui->login_registerBtn, &QPushButton::clicked, this, &Welcome::login_register);
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::fixhide()
{
    ui->label->hide();
    ui->login_registerBtn->hide();
}
