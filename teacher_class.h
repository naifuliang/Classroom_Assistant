#ifndef TEACHER_CLASS_H
#define TEACHER_CLASS_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QtDebug>

#include <socket.h>
#include <teacher_paperlist.h>

namespace Ui {
class teacher_class;
}

class teacher_class : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacher_class(QWidget *parent = nullptr,socket *tcp=NULL);
    ~teacher_class();
    void get_class();

private slots:
    void on_create_clicked();

    void on_enter_clicked();

private:
    Ui::teacher_class *ui;
    socket *tcp;
};

#endif // TEACHER_CLASS_H
