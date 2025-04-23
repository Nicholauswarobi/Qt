#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QStringList"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , submitBox(new SubmitDialog(this))
{
    ui->setupUi(this);
    // Connect to Submit button
    connect(ui->Submit_pushButton, &QPushButton::clicked, this,
            &MainWindow::on_SubmitFun);

    connect(submitBox, &SubmitDialog::getFeeValue, this,
            &MainWindow::OnGetFee);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete submitBox;
}

void MainWindow::on_SubmitFun()
{
    submitBox->show();
}


// Lists
QStringList RollNoList =  {"100", "101", "102", "103"};
QStringList FeeList = {"4000", "5000", "3000", "2000"};

void MainWindow::OnGetFee(const QString &roll, const QString &fAmount){

}

