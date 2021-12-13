/********************************************************************************
** Form generated from reading UI file 'total_score.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTAL_SCORE_H
#define UI_TOTAL_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Total_score
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *usernameLable;
    QTableWidget *paperTable;

    void setupUi(QWidget *Total_score)
    {
        if (Total_score->objectName().isEmpty())
            Total_score->setObjectName(QString::fromUtf8("Total_score"));
        Total_score->resize(400, 300);
        verticalLayout = new QVBoxLayout(Total_score);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usernameLable = new QLabel(Total_score);
        usernameLable->setObjectName(QString::fromUtf8("usernameLable"));
        usernameLable->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(usernameLable);

        paperTable = new QTableWidget(Total_score);
        paperTable->setObjectName(QString::fromUtf8("paperTable"));

        verticalLayout->addWidget(paperTable);


        retranslateUi(Total_score);

        QMetaObject::connectSlotsByName(Total_score);
    } // setupUi

    void retranslateUi(QWidget *Total_score)
    {
        Total_score->setWindowTitle(QCoreApplication::translate("Total_score", "Form", nullptr));
        usernameLable->setText(QCoreApplication::translate("Total_score", "\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Total_score: public Ui_Total_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTAL_SCORE_H
