#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>

namespace Ui {
class Welcome;
}

class Welcome : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();
    void fixhide();

signals:
    void login_register();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
