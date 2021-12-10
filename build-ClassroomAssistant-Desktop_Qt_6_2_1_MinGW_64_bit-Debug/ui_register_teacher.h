/********************************************************************************
** Form generated from reading UI file 'register_teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_TEACHER_H
#define UI_REGISTER_TEACHER_H

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

class Ui_Register_Teacher
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *usernameLine;
    QLabel *label_3;
    QLineEdit *passwordLine;
    QLineEdit *repeatLine;
    QLabel *label_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *registerBtn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *closeBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Register_Teacher)
    {
        if (Register_Teacher->objectName().isEmpty())
            Register_Teacher->setObjectName(QString::fromUtf8("Register_Teacher"));
        Register_Teacher->resize(230, 246);
        verticalLayout = new QVBoxLayout(Register_Teacher);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Register_Teacher);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Register_Teacher);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        usernameLine = new QLineEdit(widget_2);
        usernameLine->setObjectName(QString::fromUtf8("usernameLine"));

        gridLayout->addWidget(usernameLine, 0, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        passwordLine = new QLineEdit(widget_2);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));

        gridLayout->addWidget(passwordLine, 1, 1, 1, 1);

        repeatLine = new QLineEdit(widget_2);
        repeatLine->setObjectName(QString::fromUtf8("repeatLine"));

        gridLayout->addWidget(repeatLine, 3, 1, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(Register_Teacher);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        registerBtn = new QPushButton(widget_3);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));

        horizontalLayout->addWidget(registerBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        closeBtn = new QPushButton(widget_3);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));

        horizontalLayout->addWidget(closeBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);


        retranslateUi(Register_Teacher);

        QMetaObject::connectSlotsByName(Register_Teacher);
    } // setupUi

    void retranslateUi(QDialog *Register_Teacher)
    {
        Register_Teacher->setWindowTitle(QCoreApplication::translate("Register_Teacher", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register_Teacher", "\346\263\250\345\206\214", nullptr));
        label_2->setText(QCoreApplication::translate("Register_Teacher", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Register_Teacher", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Register_Teacher", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        registerBtn->setText(QCoreApplication::translate("Register_Teacher", "\346\263\250\345\206\214", nullptr));
        closeBtn->setText(QCoreApplication::translate("Register_Teacher", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register_Teacher: public Ui_Register_Teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_TEACHER_H
