/********************************************************************************
** Form generated from reading UI file 'register_student.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_STUDENT_H
#define UI_REGISTER_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_Student
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *usernameLable;
    QLineEdit *usernameLine;
    QLabel *passwordLable;
    QLineEdit *passwordLine;
    QLabel *repeatLable;
    QLineEdit *repeatLine;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *registerBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Register_Student)
    {
        if (Register_Student->objectName().isEmpty())
            Register_Student->setObjectName(QString::fromUtf8("Register_Student"));
        Register_Student->resize(293, 244);
        verticalLayout = new QVBoxLayout(Register_Student);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Register_Student);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Register_Student);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        usernameLable = new QLabel(widget_2);
        usernameLable->setObjectName(QString::fromUtf8("usernameLable"));

        gridLayout->addWidget(usernameLable, 0, 0, 1, 1);

        usernameLine = new QLineEdit(widget_2);
        usernameLine->setObjectName(QString::fromUtf8("usernameLine"));

        gridLayout->addWidget(usernameLine, 0, 1, 1, 1);

        passwordLable = new QLabel(widget_2);
        passwordLable->setObjectName(QString::fromUtf8("passwordLable"));

        gridLayout->addWidget(passwordLable, 1, 0, 1, 1);

        passwordLine = new QLineEdit(widget_2);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));

        gridLayout->addWidget(passwordLine, 1, 1, 1, 1);

        repeatLable = new QLabel(widget_2);
        repeatLable->setObjectName(QString::fromUtf8("repeatLable"));

        gridLayout->addWidget(repeatLable, 2, 0, 1, 1);

        repeatLine = new QLineEdit(widget_2);
        repeatLine->setObjectName(QString::fromUtf8("repeatLine"));

        gridLayout->addWidget(repeatLine, 2, 1, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(Register_Student);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        registerBtn = new QPushButton(widget_3);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));

        horizontalLayout->addWidget(registerBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        closeBtn = new QPushButton(widget_3);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));

        horizontalLayout->addWidget(closeBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);


        retranslateUi(Register_Student);

        QMetaObject::connectSlotsByName(Register_Student);
    } // setupUi

    void retranslateUi(QDialog *Register_Student)
    {
        Register_Student->setWindowTitle(QCoreApplication::translate("Register_Student", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register_Student", "\346\263\250\345\206\214", nullptr));
        usernameLable->setText(QCoreApplication::translate("Register_Student", "\345\255\246\345\217\267:", nullptr));
        passwordLable->setText(QCoreApplication::translate("Register_Student", "\345\257\206\347\240\201\357\274\232", nullptr));
        repeatLable->setText(QCoreApplication::translate("Register_Student", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        registerBtn->setText(QCoreApplication::translate("Register_Student", "\346\263\250\345\206\214", nullptr));
        closeBtn->setText(QCoreApplication::translate("Register_Student", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register_Student: public Ui_Register_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_STUDENT_H
