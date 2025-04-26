#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QStringList"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , incomeBox(new IncomeDialog(this))
    , expenseBox(new ExpenseDialog(this))
{
    ui->setupUi(this);
    // Connecting to button
    connect(ui->Income_pushButton, &QPushButton::clicked, this,
            &MainWindow::on_Income_Fun);

    connect(ui->Expense_pushButton, &QPushButton::clicked, this,
            &MainWindow::on_ExpenseFun);

    connect(ui->Balance_pushButton, &QPushButton::clicked, this,
            &MainWindow::on_BalanceFun);

    // Connecting to dialogs
    connect(incomeBox, &IncomeDialog::getIncomeValue, this,
            &MainWindow::OnGetIncome);

    connect(expenseBox, &ExpenseDialog::getExpenseValue, this,
            &MainWindow::OnGetExpense);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete incomeBox;
    delete expenseBox;
}

void MainWindow::on_Income_Fun()
{
    incomeBox->show();
}

void MainWindow::on_ExpenseFun()
{
    expenseBox->show();
}



int totalIncome = 0;
int totalExpense = 0;
int balance = 0;

void MainWindow::OnGetIncome(const QString &Itype, const QString &IAmount){
    int income_amount = IAmount.toInt();
    totalIncome += income_amount;

    QString msg = "Amount: " + IAmount + " of " + Itype + " added successfully!!";
    QMessageBox::information(this, "Success Message", msg);

}


void MainWindow::OnGetExpense(const QString &EType, const QString &EAmount){
    int expense_amount = EAmount.toInt();
    totalExpense += expense_amount;

    QString msg = "Amount: " + EAmount + " of " + EType + " added successfully!!";
    QMessageBox::information(this, "Success Message", msg);
}

void MainWindow::on_BalanceFun()
{
    balance = totalIncome - totalExpense;
    if(balance >= 0){
        QString msg = "Total Profit: " + QString::number(balance);
        QMessageBox::information(this, "Profit", msg);
    }

    else if(balance < 0){
        QString msg = "Total Loss: " + QString::number(balance);
        QMessageBox::information(this, "Loss", msg);
    }

    else{
        QString msg = "Insufficient balance!!";
        QMessageBox::information(this, "Profit", msg);
    }
}

