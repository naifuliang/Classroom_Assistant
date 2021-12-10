/********************************************************************************
** Form generated from reading UI file 'student_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_MAINWINDOW_H
#define UI_STUDENT_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *sid;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *StuName;
    QPushButton *LogoutButton;
    QPushButton *EnterClassButton;
    QPushButton *GradesCheckButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Student_MainWindow)
    {
        if (Student_MainWindow->objectName().isEmpty())
            Student_MainWindow->setObjectName(QString::fromUtf8("Student_MainWindow"));
        Student_MainWindow->resize(800, 600);
        centralwidget = new QWidget(Student_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(80, 60, 160, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        sid = new QLabel(verticalLayoutWidget);
        sid->setObjectName(QString::fromUtf8("sid"));

        horizontalLayout_2->addWidget(sid);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        StuName = new QLabel(verticalLayoutWidget);
        StuName->setObjectName(QString::fromUtf8("StuName"));

        horizontalLayout->addWidget(StuName);


        verticalLayout->addLayout(horizontalLayout);

        LogoutButton = new QPushButton(centralwidget);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));
        LogoutButton->setGeometry(QRect(120, 120, 80, 20));
        EnterClassButton = new QPushButton(centralwidget);
        EnterClassButton->setObjectName(QString::fromUtf8("EnterClassButton"));
        EnterClassButton->setGeometry(QRect(320, 60, 80, 20));
        GradesCheckButton = new QPushButton(centralwidget);
        GradesCheckButton->setObjectName(QString::fromUtf8("GradesCheckButton"));
        GradesCheckButton->setGeometry(QRect(320, 90, 80, 20));
        Student_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Student_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Student_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Student_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Student_MainWindow->setStatusBar(statusbar);

        retranslateUi(Student_MainWindow);

        QMetaObject::connectSlotsByName(Student_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Student_MainWindow)
    {
        Student_MainWindow->setWindowTitle(QCoreApplication::translate("Student_MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("Student_MainWindow", "SID:", nullptr));
        sid->setText(QString());
        label->setText(QCoreApplication::translate("Student_MainWindow", "Name:", nullptr));
        StuName->setText(QString());
        LogoutButton->setText(QCoreApplication::translate("Student_MainWindow", "Log out", nullptr));
        EnterClassButton->setText(QCoreApplication::translate("Student_MainWindow", "\350\277\233\345\205\245\350\257\276\345\240\202", nullptr));
        GradesCheckButton->setText(QCoreApplication::translate("Student_MainWindow", "\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_MainWindow: public Ui_Student_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_MAINWINDOW_H
