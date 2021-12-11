/********************************************************************************
** Form generated from reading UI file 'signin_student.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_STUDENT_H
#define UI_SIGNIN_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signin_student
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *SigninNumber;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *yesBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *noBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Signin_student)
    {
        if (Signin_student->objectName().isEmpty())
            Signin_student->setObjectName(QString::fromUtf8("Signin_student"));
        Signin_student->resize(241, 182);
        verticalLayout = new QVBoxLayout(Signin_student);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Signin_student);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Signin_student);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        SigninNumber = new QLineEdit(widget_2);
        SigninNumber->setObjectName(QString::fromUtf8("SigninNumber"));

        horizontalLayout_2->addWidget(SigninNumber);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(Signin_student);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        yesBtn = new QPushButton(widget_3);
        yesBtn->setObjectName(QString::fromUtf8("yesBtn"));

        horizontalLayout->addWidget(yesBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        noBtn = new QPushButton(widget_3);
        noBtn->setObjectName(QString::fromUtf8("noBtn"));

        horizontalLayout->addWidget(noBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);


        retranslateUi(Signin_student);

        QMetaObject::connectSlotsByName(Signin_student);
    } // setupUi

    void retranslateUi(QDialog *Signin_student)
    {
        Signin_student->setWindowTitle(QCoreApplication::translate("Signin_student", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Signin_student", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Signin_student", "\350\257\267\350\276\223\345\205\245\347\255\276\345\210\260\347\240\201\357\274\232", nullptr));
        yesBtn->setText(QCoreApplication::translate("Signin_student", "\347\241\256\345\256\232", nullptr));
        noBtn->setText(QCoreApplication::translate("Signin_student", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signin_student: public Ui_Signin_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_STUDENT_H
