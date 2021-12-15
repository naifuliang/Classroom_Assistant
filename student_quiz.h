#ifndef STUDENT_QUIZ_H
#define STUDENT_QUIZ_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QStringListModel>

#include <socket.h>


namespace Ui {
class student_quiz;
}

class student_quiz : public QMainWindow
{
    Q_OBJECT

public:
    explicit student_quiz(QWidget *parent = nullptr,socket *tcp=NULL,int paperid=0);
    ~student_quiz();
    void showqestions();
    void submit(int score);

private slots:
    void on_submit_clicked();

private:
    Ui::student_quiz *ui;
    socket *tcp;
    int paperid;
};

#endif // STUDENT_QUIZ_H
