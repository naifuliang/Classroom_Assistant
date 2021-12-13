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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *NameLabel;
    QLabel *label_3;
    QLabel *SidLabel;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QPushButton *GradesCheckButton;
    QPushButton *EnterClassButton;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *LogoutButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QString::fromUtf8("Student"));
        Student->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Student);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_3 = new QWidget(Student);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        NameLabel = new QLabel(widget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        gridLayout->addWidget(NameLabel, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        SidLabel = new QLabel(widget);
        SidLabel->setObjectName(QString::fromUtf8("SidLabel"));

        gridLayout->addWidget(SidLabel, 1, 1, 1, 1);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        GradesCheckButton = new QPushButton(widget_2);
        GradesCheckButton->setObjectName(QString::fromUtf8("GradesCheckButton"));
        GradesCheckButton->setAutoExclusive(false);

        gridLayout_2->addWidget(GradesCheckButton, 0, 0, 1, 1);

        EnterClassButton = new QPushButton(widget_2);
        EnterClassButton->setObjectName(QString::fromUtf8("EnterClassButton"));

        gridLayout_2->addWidget(EnterClassButton, 1, 0, 1, 1);


        horizontalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(Student);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        LogoutButton = new QPushButton(widget_4);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));

        horizontalLayout_2->addWidget(LogoutButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_4);


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
        GradesCheckButton->setText(QCoreApplication::translate("Student", "\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
        EnterClassButton->setText(QCoreApplication::translate("Student", "\350\277\233\345\205\245\350\257\276\345\240\202", nullptr));
        LogoutButton->setText(QCoreApplication::translate("Student", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
