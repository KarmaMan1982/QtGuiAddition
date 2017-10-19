/********************************************************************************
** Form generated from reading UI file 'QtGuiAddition.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIADDITION_H
#define UI_QTGUIADDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiAdditionClass
{
public:
    QWidget *centralWidget;
    QLabel *lbSummand1;
    QLabel *lbSummand2;
    QLabel *lbSumme;
    QLineEdit *tbSummand1;
    QLineEdit *tbSummand2;
    QLineEdit *tbSumme;
    QPushButton *btAddition;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiAdditionClass)
    {
        if (QtGuiAdditionClass->objectName().isEmpty())
            QtGuiAdditionClass->setObjectName(QStringLiteral("QtGuiAdditionClass"));
        QtGuiAdditionClass->resize(588, 362);
        centralWidget = new QWidget(QtGuiAdditionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lbSummand1 = new QLabel(centralWidget);
        lbSummand1->setObjectName(QStringLiteral("lbSummand1"));
        lbSummand1->setGeometry(QRect(50, 52, 101, 20));
        lbSummand2 = new QLabel(centralWidget);
        lbSummand2->setObjectName(QStringLiteral("lbSummand2"));
        lbSummand2->setGeometry(QRect(50, 120, 111, 16));
        lbSumme = new QLabel(centralWidget);
        lbSumme->setObjectName(QStringLiteral("lbSumme"));
        lbSumme->setGeometry(QRect(50, 230, 51, 16));
        tbSummand1 = new QLineEdit(centralWidget);
        tbSummand1->setObjectName(QStringLiteral("tbSummand1"));
        tbSummand1->setGeometry(QRect(310, 50, 201, 22));
        tbSummand2 = new QLineEdit(centralWidget);
        tbSummand2->setObjectName(QStringLiteral("tbSummand2"));
        tbSummand2->setGeometry(QRect(310, 115, 201, 22));
        tbSumme = new QLineEdit(centralWidget);
        tbSumme->setObjectName(QStringLiteral("tbSumme"));
        tbSumme->setGeometry(QRect(310, 227, 201, 22));
        btAddition = new QPushButton(centralWidget);
        btAddition->setObjectName(QStringLiteral("btAddition"));
        btAddition->setGeometry(QRect(50, 170, 461, 28));
        QtGuiAdditionClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiAdditionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiAdditionClass->setStatusBar(statusBar);

        retranslateUi(QtGuiAdditionClass);

        QMetaObject::connectSlotsByName(QtGuiAdditionClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiAdditionClass)
    {
        QtGuiAdditionClass->setWindowTitle(QApplication::translate("QtGuiAdditionClass", "QtGuiAddition", Q_NULLPTR));
        lbSummand1->setText(QApplication::translate("QtGuiAdditionClass", "Erster Summand", Q_NULLPTR));
        lbSummand2->setText(QApplication::translate("QtGuiAdditionClass", "Zweiter Summand", Q_NULLPTR));
        lbSumme->setText(QApplication::translate("QtGuiAdditionClass", "Summe", Q_NULLPTR));
        btAddition->setText(QApplication::translate("QtGuiAdditionClass", "Zusammenz\303\244hlen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiAdditionClass: public Ui_QtGuiAdditionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIADDITION_H
