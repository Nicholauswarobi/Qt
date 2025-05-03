/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QPushButton *Income_pushButton;
    QPushButton *Expense_pushButton;
    QPushButton *Balance_pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(573, 442);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(142, 142, 212);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(230, 130, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignTop);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 376));
        frame->setMaximumSize(QSize(16777215, 376));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        Income_pushButton = new QPushButton(frame);
        Income_pushButton->setObjectName("Income_pushButton");
        Income_pushButton->setGeometry(QRect(210, 70, 161, 61));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        Income_pushButton->setFont(font1);
        Income_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(25, 167, 9);\n"
"	color: rgb(68, 51, 255);\n"
"	border: 2px solid #e735ff;\n"
"border-radius: 10px;\n"
"}"));
        Expense_pushButton = new QPushButton(frame);
        Expense_pushButton->setObjectName("Expense_pushButton");
        Expense_pushButton->setGeometry(QRect(210, 160, 161, 61));
        Expense_pushButton->setFont(font1);
        Expense_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(209, 197, 255);\n"
"	color: rgb(39, 180, 164);\n"
"	border: 2px solid #e735ff;\n"
"border-radius: 10px;\n"
"}"));
        Balance_pushButton = new QPushButton(frame);
        Balance_pushButton->setObjectName("Balance_pushButton");
        Balance_pushButton->setGeometry(QRect(210, 250, 161, 61));
        Balance_pushButton->setFont(font1);
        Balance_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(85, 85, 127);\n"
"	color: rgb(194, 16, 40);\n"
"	border: 2px solid #e735ff;\n"
"border-radius: 10px;\n"
"}"));

        verticalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "FINANCE MANAGEMENT", nullptr));
        Income_pushButton->setText(QCoreApplication::translate("MainWindow", "Income", nullptr));
        Expense_pushButton->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        Balance_pushButton->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
