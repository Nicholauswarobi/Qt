#include "mainwindow.h"
#include "./ui_mainwindow.h"

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



void MainWindow::OnGetIncome(const QString &Itype, const QString &IAmount){

}

