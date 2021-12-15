#ifndef STUDENT_LOGIN_H
#define STUDENT_LOGIN_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>

#include <socket.h>
#include <student_class.h>

namespace Ui {
class student_login;
}

class student_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit student_login(QWidget *parent = nullptr,socket *tcp=NULL);
    ~student_login();

private slots:
    void on_login_clicked();

    void on_register_2_clicked();

private:
    Ui::student_login *ui;
    socket *tcp;
};

#endif // STUDENT_LOGIN_H
