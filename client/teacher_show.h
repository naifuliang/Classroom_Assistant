#ifndef TEACHER_SHOW_H
#define TEACHER_SHOW_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QtDebug>

#include <socket.h>


namespace Ui {
class teacher_show;
}

class teacher_show : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacher_show(QWidget *parent = nullptr,socket *tcp=NULL,int paperid=0);
    ~teacher_show();
    void showscore();

private:
    Ui::teacher_show *ui;
    socket *tcp;
    int paperid;
};

#endif // TEACHER_SHOW_H
