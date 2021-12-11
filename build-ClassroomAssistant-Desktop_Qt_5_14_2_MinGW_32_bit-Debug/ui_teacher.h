/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher
{
public:

    void setupUi(QWidget *Teacher)
    {
        if (Teacher->objectName().isEmpty())
            Teacher->setObjectName(QString::fromUtf8("Teacher"));
        Teacher->resize(400, 300);

        retranslateUi(Teacher);

        QMetaObject::connectSlotsByName(Teacher);
    } // setupUi

    void retranslateUi(QWidget *Teacher)
    {
        Teacher->setWindowTitle(QCoreApplication::translate("Teacher", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher: public Ui_Teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
