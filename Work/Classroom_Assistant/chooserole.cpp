#include "chooserole.h"
#include "ui_chooserole.h"

ChooseRole::ChooseRole(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseRole)
{
    ui->setupUi(this);
    connect(ui->studentBtn, &QPushButton::clicked, this, [=](){
        this->done(1);
    });
    connect(ui->teacherBtn, &QPushButton::clicked, this, [=](){
        this->done(0);
    });
}

ChooseRole::~ChooseRole()
{
    delete ui;
}
