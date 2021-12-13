#include "publishquiz.h"
#include "ui_publishquiz.h"

PublishQuiz::PublishQuiz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PublishQuiz)
{
    ui->setupUi(this);
}

PublishQuiz::~PublishQuiz()
{
    delete ui;
}

void PublishQuiz::QuizFinished(){
    ui->PublishQuizButton->setText("发布Quiz");
}
