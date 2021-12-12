/********************************************************************************
** Form generated from reading UI file 'quiz_score.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZ_SCORE_H
#define UI_QUIZ_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quiz_score
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *classnameLable;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *pageTable;

    void setupUi(QWidget *Quiz_score)
    {
        if (Quiz_score->objectName().isEmpty())
            Quiz_score->setObjectName(QString::fromUtf8("Quiz_score"));
        Quiz_score->resize(530, 373);
        verticalLayout = new QVBoxLayout(Quiz_score);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Quiz_score);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        classnameLable = new QLabel(widget);
        classnameLable->setObjectName(QString::fromUtf8("classnameLable"));
        classnameLable->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(classnameLable);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Quiz_score);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pageTable = new QTableWidget(widget_2);
        pageTable->setObjectName(QString::fromUtf8("pageTable"));

        horizontalLayout->addWidget(pageTable);


        verticalLayout->addWidget(widget_2);


        retranslateUi(Quiz_score);

        QMetaObject::connectSlotsByName(Quiz_score);
    } // setupUi

    void retranslateUi(QWidget *Quiz_score)
    {
        Quiz_score->setWindowTitle(QCoreApplication::translate("Quiz_score", "Form", nullptr));
        classnameLable->setText(QCoreApplication::translate("Quiz_score", "class_name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quiz_score: public Ui_Quiz_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZ_SCORE_H
