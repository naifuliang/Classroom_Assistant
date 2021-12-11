#ifndef CHECK_PAGE_H
#define CHECK_PAGE_H

#include <QWidget>
//上面显示“试卷标题”“试卷分数 xx / xx”，
//每道题包括“题号（正确为绿，错误为宏）”
//“题目描述”“选项及内容”“您的选择：xx ，正确选项：xx”。

namespace Ui {
class Check_page;
}

class Check_page : public QWidget
{
    Q_OBJECT

public:
    explicit Check_page(QWidget *parent = nullptr);
    ~Check_page();

private:
    Ui::Check_page *ui;
};

#endif // CHECK_PAGE_H
