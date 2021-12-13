#include "quizresult.h"
#include "ui_quizresult.h"

QuizResult::QuizResult(const QString &username,const QString &id,const QString &title,QWidget *parent) :
    QWidget(parent),username(username),id(id),title(title),
    ui(new Ui::QuizResult)
{
    ui->setupUi(this);
    setWindowTitle("查看结果");
    ui->TitleLabel->setText(title);
    //这里处理学生完成情况并显示

}

QuizResult::~QuizResult()
{
    delete ui;
}

void QuizResult::closeEvent(QCloseEvent *event){
    emit QuizResult::QuizResultClosed();
}

void QuizResult::on_FinishQuizButton_clicked()
{
    emit QuizFinished(username , id ,title);
    qDebug()<<"Quiz结束信号已发出";
}

