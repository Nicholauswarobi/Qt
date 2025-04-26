#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QStringList"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , incomeBox(new IncomeDialog(this))
{
    ui->setupUi(this);
    connect(ui->Income_pushButton, &QPushButton::clicked, this,
            &MainWindow::on_Income_Fun);

    connect(incomeBox, &IncomeDialog::getIncomeValue, this,
            &MainWindow::OnGetIncome);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete incomeBox;
}

void MainWindow::on_Income_Fun()
{
    incomeBox.show();
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

