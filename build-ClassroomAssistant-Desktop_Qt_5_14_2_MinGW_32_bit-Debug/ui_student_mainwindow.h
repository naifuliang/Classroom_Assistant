/********************************************************************************
** Form generated from reading UI file 'student_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_MAINWINDOW_H
#define UI_STUDENT_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *logoutBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Student_MainWindow)
    {
        if (Student_MainWindow->objectName().isEmpty())
            Student_MainWindow->setObjectName(QString::fromUtf8("Student_MainWindow"));
        Student_MainWindow->resize(800, 600);
        centralwidget = new QWidget(Student_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logoutBtn = new QPushButton(centralwidget);
        logoutBtn->setObjectName(QString::fromUtf8("logoutBtn"));
        logoutBtn->setGeometry(QRect(470, 0, 80, 20));
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
        logoutBtn->setText(QCoreApplication::translate("Student_MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_MainWindow: public Ui_Student_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_MAINWINDOW_H
