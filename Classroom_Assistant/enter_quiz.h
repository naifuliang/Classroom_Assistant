#ifndef ENTER_QUIZ_H
#define ENTER_QUIZ_H

#include <QWidget>
//进入答题后弹窗显示该课程的测试列表，
//排在前面的是可答题的试卷，包括“试卷名称”“剩余时间”，按钮“答题”，
//排在后面的是是已经交卷的试卷，包括“试卷名称”“试卷分数”，按钮“查看试卷”，
//分别按照发布时间逆序排序。

namespace Ui {
class Enter_quiz;
}

class Enter_quiz : public QWidget
{
    Q_OBJECT

public:
    explicit Enter_quiz(QWidget *parent = nullptr);
    ~Enter_quiz();

private:
    Ui::Enter_quiz *ui;
};

#endif // ENTER_QUIZ_H
