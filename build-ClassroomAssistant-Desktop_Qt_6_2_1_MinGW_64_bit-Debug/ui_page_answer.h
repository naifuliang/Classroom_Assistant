/********************************************************************************
** Form generated from reading UI file 'page_answer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_ANSWER_H
#define UI_PAGE_ANSWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_answer
{
public:

    void setupUi(QWidget *Page_answer)
    {
        if (Page_answer->objectName().isEmpty())
            Page_answer->setObjectName(QString::fromUtf8("Page_answer"));
        Page_answer->resize(400, 300);

        retranslateUi(Page_answer);

        QMetaObject::connectSlotsByName(Page_answer);
    } // setupUi

    void retranslateUi(QWidget *Page_answer)
    {
        Page_answer->setWindowTitle(QCoreApplication::translate("Page_answer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_answer: public Ui_Page_answer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_ANSWER_H
