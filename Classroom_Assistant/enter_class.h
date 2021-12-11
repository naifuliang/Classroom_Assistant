#ifndef ENTER_CLASS_H
#define ENTER_CLASS_H

#include <QWidget>
//显示课堂界面，根据服务端返回数据显示“已加入课程列表”，
//点击对应课程后进入相应界面，相应界面包括“课程信息”“课堂签到”“进入答题”。
//课程信息盒子里包括课程名称，授课教师名称，签到信息（“已签到次数 / 总发布次数”），
//按钮“考试成绩”，点击按钮后进入子页面显示“列表包含试卷名，试卷发布时间，试卷成绩（考试成绩/总成绩）”。
//若老师未发布签到，则课程签到显示为灰色；若已发布签到，点击后显示签到的模态对话框。

namespace Ui {
class Enter_class;
}

class Enter_class : public QWidget
{
    Q_OBJECT

public:
    explicit Enter_class(QWidget *parent = nullptr);
    ~Enter_class();

private:
    Ui::Enter_class *ui;
};

#endif // ENTER_CLASS_H
