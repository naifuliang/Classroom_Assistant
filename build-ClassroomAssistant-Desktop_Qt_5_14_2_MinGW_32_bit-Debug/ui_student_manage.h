/********************************************************************************
** Form generated from reading UI file 'student_manage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_MANAGE_H
#define UI_STUDENT_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student_manage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *classLable;
    QTableWidget *studentTable;

    void setupUi(QWidget *Student_manage)
    {
        if (Student_manage->objectName().isEmpty())
            Student_manage->setObjectName(QString::fromUtf8("Student_manage"));
        Student_manage->resize(400, 300);
        verticalLayout = new QVBoxLayout(Student_manage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Student_manage);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        classLable = new QLabel(widget);
        classLable->setObjectName(QString::fromUtf8("classLable"));
        classLable->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(classLable);


        verticalLayout->addWidget(widget);

        studentTable = new QTableWidget(Student_manage);
        studentTable->setObjectName(QString::fromUtf8("studentTable"));

        verticalLayout->addWidget(studentTable);


        retranslateUi(Student_manage);

        QMetaObject::connectSlotsByName(Student_manage);
    } // setupUi

    void retranslateUi(QWidget *Student_manage)
    {
        Student_manage->setWindowTitle(QCoreApplication::translate("Student_manage", "Form", nullptr));
        classLable->setText(QCoreApplication::translate("Student_manage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_manage: public Ui_Student_manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_MANAGE_H
