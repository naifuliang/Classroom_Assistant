#ifndef PUBLISHQUIZ_H
#define PUBLISHQUIZ_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>
#include"insertpaper.h"
#include"quizresult.h"

//教师端Quiz发布界面
//含有参数教师名称、课堂ID
//按钮查看试卷可以查看试卷详情，
//发布Quiz按钮将会发射信号QuizPublished(const QString &username,const QString &id,const QString &title)

namespace Ui {
class PublishQuiz;
}

class PublishQuiz : public QWidget
{
    Q_OBJECT

public:
    explicit PublishQuiz(const QString &Newusername,const QString &Newid,QWidget *parent = nullptr);
    ~PublishQuiz();

    void closeEvent(QCloseEvent *event);

    void QuizFinished(const QString &username,const QString &id,const QString &title);//Quiz结束的槽函数

signals:
    void PublishQuizClosed();//窗口关闭信号


    void QuizPublished(const QString &username,const QString &id,const QString &title);//Quiz发布的信号
    //参数为 教师名字 课程id 试卷标题

private slots:
    void on_CheckoutPaper_clicked();

private:
    QString id,username;//课堂ID和教师名字
    QJsonArray Papers;
    InsertPaper *paperinfo;
    bool Quizing;
    QuizResult *quizresult;
    Ui::PublishQuiz *ui;
};

#endif // PUBLISHQUIZ_H
