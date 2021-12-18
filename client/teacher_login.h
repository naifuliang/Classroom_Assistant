#ifndef TEACHER_LOGIN_H
#define TEACHER_LOGIN_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>

#include <socket.h>

namespace Ui {
class teacher_login;
}

class teacher_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacher_login(QWidget *parent = nullptr,socket *tcp=NULL);
    ~teacher_login();

private slots:
    void on_login_clicked();

    void on_register_2_clicked();

private:
    Ui::teacher_login *ui;
    socket *tcp;
};

#endif // TEACHER_LOGIN_H
