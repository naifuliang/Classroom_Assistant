/********************************************************************************
** Form generated from reading UI file 'student_manage_part.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_MANAGE_PART_H
#define UI_STUDENT_MANAGE_PART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student_manage_part
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *scoreBtn;

    void setupUi(QWidget *Student_manage_part)
    {
        if (Student_manage_part->objectName().isEmpty())
            Student_manage_part->setObjectName(QString::fromUtf8("Student_manage_part"));
        Student_manage_part->resize(98, 38);
        horizontalLayout = new QHBoxLayout(Student_manage_part);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scoreBtn = new QPushButton(Student_manage_part);
        scoreBtn->setObjectName(QString::fromUtf8("scoreBtn"));

        horizontalLayout->addWidget(scoreBtn);


        retranslateUi(Student_manage_part);

        QMetaObject::connectSlotsByName(Student_manage_part);
    } // setupUi

    void retranslateUi(QWidget *Student_manage_part)
    {
        Student_manage_part->setWindowTitle(QCoreApplication::translate("Student_manage_part", "Form", nullptr));
        scoreBtn->setText(QCoreApplication::translate("Student_manage_part", "\346\237\245\347\234\213\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_manage_part: public Ui_Student_manage_part {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_MANAGE_PART_H
