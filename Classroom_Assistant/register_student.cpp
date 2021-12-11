#include "register_student.h"
#include "ui_register_student.h"
#include <QMessageBox>
#include <QDebug>

Register_Student::Register_Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_Student)
{
    ui->setupUi(this);
    setWindowTitle("学生端注册");
    resize(400,300);
    ui->usernameLine->setClearButtonEnabled(true);
    ui->passwordLine->setClearButtonEnabled(true);
    ui->repeatLine->setClearButtonEnabled(true);
    ui->usernameLine->setPlaceholderText("请输入您的学号");
    ui->passwordLine->setPlaceholderText("请输入数字和英文字母的组合");
    ui->repeatLine->setPlaceholderText("请再次输入您的密码");
    ui->passwordLine->setEchoMode(QLineEdit::Password);
    ui->repeatLine->setEchoMode(QLineEdit::Password);
    connect(ui->repeatLine, &QLineEdit::textChanged, this, [=](const QString &text){
        QString pw=ui->passwordLine->text();
        int p=pw.length(),t=text.length();
        if(t>p) password_fault_slot();
        else
        {
            for(int i=0;i<t;i++)
                if(pw[i] != text[i])
                {
                    password_fault_slot();
                    break;
                }
        }
    });
    connect(ui->closeBtn, &QPushButton::clicked, this, &Register_Student::close);
    connect(ui->registerBtn, &QPushButton::clicked, this, &Register_Student::Register);
    connect(this, &Register_Student::Register, this, &Register_Student::Register_slot);
    connect(this, &Register_Student::password_fault, this, &Register_Student::password_fault_slot);
}

Register_Student::~Register_Student()
{
    delete ui;
}

void Register_Student::password_fault_slot()
{
    QMessageBox::critical(this, "密码错误", "两次输入的密码不同，请检查");
}

void Register_Student::Register_slot()
{
    QString a,b,c;
    a = ui->usernameLine->text();
    b = ui->passwordLine->text();
    c = ui->repeatLine->text();
    if(b != c) emit password_fault();//两次输入的密码不同
    else
    {
        //这里把数据存到数据库里
        QMessageBox::information(this, "注册成功","恭喜你注册成功了，o(*￣︶￣*)o!!!");
        this->close();
    }
}
