#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QtDebug>

#include <student_login.h>
#include <teacher_login.h>
#include <socket.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QMainWindow
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void on_student_clicked();

    void on_teacher_clicked();
private:
    Ui::Client *ui;
    socket *tcp;
};
#endif // CLIENT_H
