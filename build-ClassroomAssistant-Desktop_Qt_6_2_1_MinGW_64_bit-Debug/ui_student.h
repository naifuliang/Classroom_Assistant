/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *NameLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *SidLabel;
    QPushButton *LogoutButton;
    QPushButton *EnterClassButton;
    QPushButton *GradesCheckButton;

    void setupUi(QWidget *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QString::fromUtf8("Student"));
        Student->resize(400, 300);
        verticalLayoutWidget = new QWidget(Student);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 100, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        NameLabel = new QLabel(verticalLayoutWidget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        horizontalLayout->addWidget(NameLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        SidLabel = new QLabel(verticalLayoutWidget);
        SidLabel->setObjectName(QString::fromUtf8("SidLabel"));

        horizontalLayout_2->addWidget(SidLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        LogoutButton = new QPushButton(Student);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));
        LogoutButton->setGeometry(QRect(100, 200, 80, 20));
        EnterClassButton = new QPushButton(Student);
        EnterClassButton->setObjectName(QString::fromUtf8("EnterClassButton"));
        EnterClassButton->setGeometry(QRect(260, 100, 80, 31));
        GradesCheckButton = new QPushButton(Student);
        GradesCheckButton->setObjectName(QString::fromUtf8("GradesCheckButton"));
        GradesCheckButton->setGeometry(QRect(260, 140, 80, 31));

        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QWidget *Student)
    {
        Student->setWindowTitle(QCoreApplication::translate("Student", "Form", nullptr));
        label->setText(QCoreApplication::translate("Student", "Name:", nullptr));
        NameLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("Student", "Sid:", nullptr));
        SidLabel->setText(QString());
        LogoutButton->setText(QCoreApplication::translate("Student", "Logout", nullptr));
        EnterClassButton->setText(QCoreApplication::translate("Student", "\350\277\233\345\205\245\350\257\276\345\240\202", nullptr));
        GradesCheckButton->setText(QCoreApplication::translate("Student", "\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
