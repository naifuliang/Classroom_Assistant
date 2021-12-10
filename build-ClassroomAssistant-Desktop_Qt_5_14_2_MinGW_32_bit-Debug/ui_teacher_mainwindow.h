/********************************************************************************
** Form generated from reading UI file 'teacher_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_MAINWINDOW_H
#define UI_TEACHER_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher_MainWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Teacher_MainWindow)
    {
        if (Teacher_MainWindow->objectName().isEmpty())
            Teacher_MainWindow->setObjectName(QString::fromUtf8("Teacher_MainWindow"));
        Teacher_MainWindow->resize(800, 600);
        menubar = new QMenuBar(Teacher_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Teacher_MainWindow->setMenuBar(menubar);
        centralwidget = new QWidget(Teacher_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Teacher_MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Teacher_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Teacher_MainWindow->setStatusBar(statusbar);

        retranslateUi(Teacher_MainWindow);

        QMetaObject::connectSlotsByName(Teacher_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Teacher_MainWindow)
    {
        Teacher_MainWindow->setWindowTitle(QCoreApplication::translate("Teacher_MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher_MainWindow: public Ui_Teacher_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_MAINWINDOW_H
