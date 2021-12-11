#ifndef PAGE_ANSWER_H
#define PAGE_ANSWER_H

#include <QWidget>
//显示试卷页面，上面显示“试卷标题”，
//每道题包括“题号”“题目描述”“选项及内容”。
//侧栏显示信息“剩余时间”“题目完成情况（选了的绿色，没选的红色）”，
//下面显示按钮“交卷”，点击后警告对话框“是否提前交卷”。
//交卷或强制交卷后发送数据，接受成绩数据后显示为“查看试卷”页面。

namespace Ui {
class Page_answer;
}

class Page_answer : public QWidget
{
    Q_OBJECT

public:
    explicit Page_answer(QWidget *parent = nullptr);
    ~Page_answer();

private:
    Ui::Page_answer *ui;
};

#endif // PAGE_ANSWER_H
