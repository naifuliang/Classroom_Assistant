#ifndef QUIZRESULT_H
#define QUIZRESULT_H

#include <QWidget>


//教师端发布Quiz以后查看结果的窗口，可以提前结束Quiz，发射信号QuizFinished(const QString &username,const QString &id,const QString &title)
namespace Ui {
class QuizResult;
}

class QuizResult : public QWidget
{
    Q_OBJECT

public:
    explicit QuizResult(const QString &username,const QString &id,const QString &title,QWidget *parent = nullptr);
    //形参为 教师名字 课程id 试卷题目
    ~QuizResult();

    void closeEvent(QCloseEvent *event);

signals:
    void QuizResultClosed();//窗口关闭信号

    void QuizFinished(const QString &username,const QString &id,const QString &title);

private slots:
    void on_FinishQuizButton_clicked();

private:
    QString username,id;
    QString title;

    Ui::QuizResult *ui;
};

#endif // QUIZRESULT_H
