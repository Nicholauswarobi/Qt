#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Submit_pushButton, SIGNAL(clicked()),
            this, SLOT(on_Submit_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Submit_pushButton_clicked()
{
    QString username = "Nungu";
    QString password = "Nungu123";
    int balance = 10000;


    QString userUI = ui->lineEdit_username->text();
    QString userUIPassword = ui->lineEdit_password->text();
    QString amount = ui->lineEdit_amount->text();
    int User_Amount = amount.toInt();


        if(username == userUI && password == userUIPassword){
            if (balance >=User_Amount){
                balance -= User_Amount;

                QString msg = "Username: " + userUI + "\n"
                              + "Amount: " + QString::number(User_Amount)
                              + "\n" + "Remain Balance: " + QString::number(balance);

                QMessageBox::information(this, "Success Message", msg, QMessageBox::Ok);

            }

            else{
                QString msg = "Low Balance!!";
                QMessageBox::warning(this, "Error Message", msg, QMessageBox::Ok);

        }
    }

    else{
            QString msg = "Invalid username or password!!";
            QMessageBox::warning(this, "Error Message", msg, QMessageBox::Ok);

    }
}

