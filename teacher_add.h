#ifndef TEACHER_ADD_H
#define TEACHER_ADD_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QtDebug>

#include <socket.h>

namespace Ui {
class teacher_add;
}

class teacher_add : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacher_add(QWidget *parent = nullptr,socket *tcp=NULL,int classid=0);
    ~teacher_add();

signals:
    void submitDone();

private slots:
    void on_submit_clicked();

private:
    Ui::teacher_add *ui;
    socket *tcp;
    int classid;
};

#endif // TEACHER_ADD_H
