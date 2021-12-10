#include "chooserole.h"
#include "ui_chooserole.h"

ChooseRole::ChooseRole(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseRole)
{
    ui->setupUi(this);
    connect(ui->studentBtn, &QPushButton::clicked, this, [=](){
        //选择学生登录注册
        this->done(1);
    });
    connect(ui->teacherBtn, &QPushButton::clicked, this, [=](){
        //选择教师登录注册
        this->done(0);
    });
}

ChooseRole::~ChooseRole()
{
    delete ui;
}
