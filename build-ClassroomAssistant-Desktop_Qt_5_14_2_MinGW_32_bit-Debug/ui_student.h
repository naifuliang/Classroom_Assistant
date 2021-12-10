/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QPushButton *logout;

    void setupUi(QWidget *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QString::fromUtf8("Student"));
        Student->resize(400, 300);
        logout = new QPushButton(Student);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(280, 20, 80, 20));

        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QWidget *Student)
    {
        Student->setWindowTitle(QCoreApplication::translate("Student", "Form", nullptr));
        logout->setText(QCoreApplication::translate("Student", "logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
