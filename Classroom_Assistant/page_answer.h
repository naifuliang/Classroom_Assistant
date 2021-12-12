#ifndef PAGE_ANSWER_H
#define PAGE_ANSWER_H

#include <QWidget>
#include <QMessageBox>
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
    explicit Page_answer(int id,QWidget *parent = nullptr);
    ~Page_answer();

signals:
    void paper_submit();

public slots:
    void check_A1();
    void check_B1();
    void check_C1();
    void check_D1();
    void check_A2();
    void check_B2();
    void check_C2();
    void check_D2();
    void check_A3();
    void check_B3();
    void check_C3();
    void check_D3();
    void check_A4();
    void check_B4();
    void check_C4();
    void check_D4();
    void check_A5();
    void check_B5();
    void check_C5();
    void check_D5();
    void check_A6();
    void check_B6();
    void check_C6();
    void check_D6();
    void check_A7();
    void check_B7();
    void check_C7();
    void check_D7();
    void check_A8();
    void check_B8();
    void check_C8();
    void check_D8();
    void check_A9();
    void check_B9();
    void check_C9();
    void check_D9();
    void check_A10();
    void check_B10();
    void check_C10();
    void check_D10();

private:
    int page_id;
    QString page_name;
    Ui::Page_answer *ui;
};

#endif // PAGE_ANSWER_H
