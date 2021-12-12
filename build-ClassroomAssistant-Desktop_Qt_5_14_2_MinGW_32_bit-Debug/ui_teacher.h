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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *UidLabel;
    QLabel *label;
    QLabel *NameLabel;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *LogoutButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Teacher)
    {
        if (Teacher->objectName().isEmpty())
            Teacher->setObjectName(QString::fromUtf8("Teacher"));
        Teacher->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Teacher);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_4 = new QWidget(Teacher);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(widget_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        UidLabel = new QLabel(widget);
        UidLabel->setObjectName(QString::fromUtf8("UidLabel"));

        gridLayout->addWidget(UidLabel, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        NameLabel = new QLabel(widget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        gridLayout->addWidget(NameLabel, 1, 1, 1, 1);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(widget_4);

        widget_3 = new QWidget(Teacher);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        LogoutButton = new QPushButton(widget_3);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));

        horizontalLayout_2->addWidget(LogoutButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_3);


        retranslateUi(Teacher);

        QMetaObject::connectSlotsByName(Teacher);
    } // setupUi

    void retranslateUi(QWidget *Teacher)
    {
        Teacher->setWindowTitle(QCoreApplication::translate("Teacher", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Teacher", "Uid:", nullptr));
        UidLabel->setText(QString());
        label->setText(QCoreApplication::translate("Teacher", "Name:", nullptr));
        NameLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("Teacher", "\350\257\276\345\240\202\347\256\241\347\220\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Teacher", "\350\257\225\345\215\267\347\256\241\347\220\206", nullptr));
        LogoutButton->setText(QCoreApplication::translate("Teacher", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher: public Ui_Teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
