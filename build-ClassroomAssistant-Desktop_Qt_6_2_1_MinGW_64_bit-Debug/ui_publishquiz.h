/********************************************************************************
** Form generated from reading UI file 'publishquiz.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLISHQUIZ_H
#define UI_PUBLISHQUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PublishQuiz
{
public:
    QListWidget *listWidget;
    QPushButton *CheckoutPaper;
    QLabel *label;
    QPushButton *PublishQuizButton;

    void setupUi(QWidget *PublishQuiz)
    {
        if (PublishQuiz->objectName().isEmpty())
            PublishQuiz->setObjectName(QString::fromUtf8("PublishQuiz"));
        PublishQuiz->resize(439, 378);
        listWidget = new QListWidget(PublishQuiz);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(90, 70, 256, 192));
        CheckoutPaper = new QPushButton(PublishQuiz);
        CheckoutPaper->setObjectName(QString::fromUtf8("CheckoutPaper"));
        CheckoutPaper->setGeometry(QRect(110, 290, 80, 31));
        label = new QLabel(PublishQuiz);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 40, 54, 12));
        PublishQuizButton = new QPushButton(PublishQuiz);
        PublishQuizButton->setObjectName(QString::fromUtf8("PublishQuizButton"));
        PublishQuizButton->setGeometry(QRect(240, 290, 80, 31));

        retranslateUi(PublishQuiz);

        QMetaObject::connectSlotsByName(PublishQuiz);
    } // setupUi

    void retranslateUi(QWidget *PublishQuiz)
    {
        PublishQuiz->setWindowTitle(QCoreApplication::translate("PublishQuiz", "Form", nullptr));
        CheckoutPaper->setText(QCoreApplication::translate("PublishQuiz", "\346\237\245\347\234\213\350\257\225\345\215\267\345\206\205\345\256\271", nullptr));
        label->setText(QCoreApplication::translate("PublishQuiz", "\350\257\225\345\215\267\345\210\227\350\241\250", nullptr));
        PublishQuizButton->setText(QCoreApplication::translate("PublishQuiz", "\345\217\221\345\270\203Quiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PublishQuiz: public Ui_PublishQuiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLISHQUIZ_H
