#include "chooserole.h"
#include "ui_chooserole.h"

ChooseRole::ChooseRole(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseRole)
{
    ui->setupUi(this);
}

ChooseRole::~ChooseRole()
{
    delete ui;
}
