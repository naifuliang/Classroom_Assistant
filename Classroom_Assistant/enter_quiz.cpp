#include "enter_quiz.h"
#include "ui_enter_quiz.h"

Enter_quiz::Enter_quiz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Enter_quiz)
{
    ui->setupUi(this);
}

Enter_quiz::~Enter_quiz()
{
    delete ui;
}
