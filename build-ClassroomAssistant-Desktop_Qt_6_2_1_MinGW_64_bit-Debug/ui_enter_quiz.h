/********************************************************************************
** Form generated from reading UI file 'enter_quiz.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_QUIZ_H
#define UI_ENTER_QUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter_quiz
{
public:

    void setupUi(QWidget *Enter_quiz)
    {
        if (Enter_quiz->objectName().isEmpty())
            Enter_quiz->setObjectName(QString::fromUtf8("Enter_quiz"));
        Enter_quiz->resize(400, 300);

        retranslateUi(Enter_quiz);

        QMetaObject::connectSlotsByName(Enter_quiz);
    } // setupUi

    void retranslateUi(QWidget *Enter_quiz)
    {
        Enter_quiz->setWindowTitle(QCoreApplication::translate("Enter_quiz", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enter_quiz: public Ui_Enter_quiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_QUIZ_H
