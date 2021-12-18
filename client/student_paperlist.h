#ifndef STUDENT_PAPERLIST_H
#define STUDENT_PAPERLIST_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QStringListModel>

#include <socket.h>
#include <student_quiz.h>

namespace Ui {
class student_paperlist;
}

class student_paperlist : public QMainWindow
{
    Q_OBJECT

public:
    explicit student_paperlist(QWidget *parent = nullptr,socket *tcp=NULL,int classid =0);
    ~student_paperlist();
    void get_paper_list();
    int get_score(int classid);

public slots:
    void on_start_clicked();

private:
    Ui::student_paperlist *ui;
    int classid;
    socket *tcp;
};

#endif // STUDENT_PAPERLIST_H
