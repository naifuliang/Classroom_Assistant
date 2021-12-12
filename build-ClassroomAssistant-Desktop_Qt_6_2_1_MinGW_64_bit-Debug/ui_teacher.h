/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *UidLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *NameLabel;
    QPushButton *LogoutButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Teacher)
    {
        if (Teacher->objectName().isEmpty())
            Teacher->setObjectName(QString::fromUtf8("Teacher"));
        Teacher->resize(400, 300);
        verticalLayoutWidget = new QWidget(Teacher);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 80, 160, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        UidLabel = new QLabel(verticalLayoutWidget);
        UidLabel->setObjectName(QString::fromUtf8("UidLabel"));

        horizontalLayout_2->addWidget(UidLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        NameLabel = new QLabel(verticalLayoutWidget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        horizontalLayout->addWidget(NameLabel);


        verticalLayout->addLayout(horizontalLayout);

        LogoutButton = new QPushButton(Teacher);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));
        LogoutButton->setGeometry(QRect(90, 140, 80, 20));
        pushButton = new QPushButton(Teacher);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 80, 80, 31));
        pushButton_2 = new QPushButton(Teacher);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 120, 80, 31));

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
        LogoutButton->setText(QCoreApplication::translate("Teacher", "Logout", nullptr));
        pushButton->setText(QCoreApplication::translate("Teacher", "\350\257\276\345\240\202\347\256\241\347\220\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Teacher", "\350\257\225\345\215\267\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher: public Ui_Teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
