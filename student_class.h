#ifndef STUDENT_CLASS_H
#define STUDENT_CLASS_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QtDebug>

#include <socket.h>
#include <student_paperlist.h>

namespace Ui {
class student_class;
}

class student_class : public QMainWindow
{
    Q_OBJECT

public:
    explicit student_class(QWidget *parent = nullptr,socket *tcp=NULL);
    void get_class();
    ~student_class();

private slots:
    void on_attend_clicked();

    void on_enter_clicked();

private:
    Ui::student_class *ui;
    socket *tcp;
};

#endif // STUDENT_CLASS_H
