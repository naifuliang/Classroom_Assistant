#ifndef INSERTPAPER_H
#define INSERTPAPER_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>
#include<QMessageBox>
#include<QCloseEvent>
#include <QDebug>

//教师端用于编辑与查看试卷的窗口，
//按下Done按钮后会发送信号InsertPaperDone(const QJsonObject &PaperInfo)。

namespace Ui {
class InsertPaper;
}

class InsertPaper : public QWidget
{
    Q_OBJECT

public:
    explicit InsertPaper(QString teachernam="",QWidget *parent = nullptr);
    ~InsertPaper();

    void closeEvent(QCloseEvent *event);

    void ChangeQuestionNum(const QString &num);

    void setPaperInfo(const QJsonObject &NewPaperInfo);//设置试卷信息

    void setReadOnly();//设置为只读模式

signals:
    void InsertPaperClosed();//关闭信号

    void InsertPaperDone(const QJsonObject &PaperInfo);//保存信号

private slots:
    void on_DoneButton_clicked();

    //void InsertPaperSucceed();


private:
    QString teachername;
    Ui::InsertPaper *ui;
    QJsonObject PaperInfo;
    QJsonArray questions;
    int previousK;
};

#endif // INSERTPAPER_H
