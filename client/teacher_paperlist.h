#ifndef TEACHER_PAPERLIST_H
#define TEACHER_PAPERLIST_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QtDebug>

#include <socket.h>
#include <teacher_show.h>
#include <teacher_add.h>

namespace Ui {
class teacher_paperlist;
}

class teacher_paperlist : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacher_paperlist(QWidget *parent = nullptr,socket *tcp=NULL,int classid=0);
    ~teacher_paperlist();
    void getlist();

private slots:
    void on_lookup_clicked();

    void on_newpaper_clicked();

private:
    Ui::teacher_paperlist *ui;
    socket *tcp;
    int classid;
};

#endif // TEACHER_PAPERLIST_H
