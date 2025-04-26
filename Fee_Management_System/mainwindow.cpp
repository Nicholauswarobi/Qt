#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QStringList"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , submitBox(new SubmitDialog(this))
{
    ui->setupUi(this);
    // Connect to Submit button
    connect(ui->Submit_pushButton, &QPushButton::clicked, this,
            &MainWindow::on_SubmitFun);

    // Connection from Submit dialog fun
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
QStringList PaidList = {"0", "0", "0", "0"};
QStringList PendingList = {"4000", "5000", "3000", "2000"};
bool found = false;

void MainWindow::OnGetFee(const QString &roll, const QString &fAmount){
    for(int i = 0; i < RollNoList.length(); i++){
        if(roll == RollNoList[i]){
            found = true;

            int fAmount_int = fAmount.toInt();
            int PaidList_int = PaidList[i].toInt();
            int totalPaid = PaidList_int + fAmount_int;
            PaidList[i] = QString::number(totalPaid);

            int PendingList_int = PendingList[i].toInt();
            int totalPending = PendingList_int + fAmount_int;
            PendingList[i] = QString::number(totalPending);


            break;
        }

    }

}

