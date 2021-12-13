#ifndef PUBLISHQUIZ_H
#define PUBLISHQUIZ_H

#include <QWidget>

namespace Ui {
class PublishQuiz;
}

class PublishQuiz : public QWidget
{
    Q_OBJECT

public:
    explicit PublishQuiz(QWidget *parent = nullptr);
    ~PublishQuiz();

    void QuizFinished();//Quiz结束的槽函数

signals:
    void QuizPublished();//Quiz发布的信号

private:
    Ui::PublishQuiz *ui;
};

#endif // PUBLISHQUIZ_H
