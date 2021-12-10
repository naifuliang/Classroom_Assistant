/********************************************************************************
** Form generated from reading UI file 'login_teacher.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_TEACHER_H
#define UI_LOGIN_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_teacher
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *usernameLable;
    QLineEdit *usernameLine;
    QLineEdit *passwordLine;
    QLabel *passwordLable;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginBtn;
    QPushButton *registerBtn;
    QPushButton *closeBtn;

    void setupUi(QDialog *Login_teacher)
    {
        if (Login_teacher->objectName().isEmpty())
            Login_teacher->setObjectName(QString::fromUtf8("Login_teacher"));
        Login_teacher->resize(190, 229);
        verticalLayout_2 = new QVBoxLayout(Login_teacher);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(Login_teacher);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(Login_teacher);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        usernameLable = new QLabel(widget_2);
        usernameLable->setObjectName(QString::fromUtf8("usernameLable"));

        gridLayout->addWidget(usernameLable, 0, 0, 1, 1);

        usernameLine = new QLineEdit(widget_2);
        usernameLine->setObjectName(QString::fromUtf8("usernameLine"));

        gridLayout->addWidget(usernameLine, 0, 1, 1, 1);

        passwordLine = new QLineEdit(widget_2);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));

        gridLayout->addWidget(passwordLine, 1, 1, 1, 1);

        passwordLable = new QLabel(widget_2);
        passwordLable->setObjectName(QString::fromUtf8("passwordLable"));

        gridLayout->addWidget(passwordLable, 1, 0, 1, 1);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(Login_teacher);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loginBtn = new QPushButton(widget_3);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));

        horizontalLayout->addWidget(loginBtn);

        registerBtn = new QPushButton(widget_3);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));

        horizontalLayout->addWidget(registerBtn);

        closeBtn = new QPushButton(widget_3);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));

        horizontalLayout->addWidget(closeBtn);


        verticalLayout_2->addWidget(widget_3);


        retranslateUi(Login_teacher);

        QMetaObject::connectSlotsByName(Login_teacher);
    } // setupUi

    void retranslateUi(QDialog *Login_teacher)
    {
        Login_teacher->setWindowTitle(QCoreApplication::translate("Login_teacher", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login_teacher", "\347\231\273\345\275\225", nullptr));
        usernameLable->setText(QCoreApplication::translate("Login_teacher", "\345\247\223\345\220\215\357\274\232", nullptr));
        passwordLable->setText(QCoreApplication::translate("Login_teacher", "\345\257\206\347\240\201\357\274\232", nullptr));
        loginBtn->setText(QCoreApplication::translate("Login_teacher", "\347\231\273\345\275\225", nullptr));
        registerBtn->setText(QCoreApplication::translate("Login_teacher", "\346\263\250\345\206\214", nullptr));
        closeBtn->setText(QCoreApplication::translate("Login_teacher", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_teacher: public Ui_Login_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_TEACHER_H
