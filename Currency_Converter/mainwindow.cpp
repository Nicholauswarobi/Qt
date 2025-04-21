#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Convert_pushButton, &QPushButton::clicked, this, &MainWindow::on_Convert_pushButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Convert_pushButton_clicked()
{
    int Dollar = 2700;
    int Euro = 3100;
    int Pound = 3600;


    QString ULocal = ui->Local_lineEdit->text();
    double Ulocal_INT = ULocal.toDouble();
    QString UInternational = ui->International_lineEdit->text();

    if (UInternational == "Dollar"){

        double result = Ulocal_INT / Dollar;

        QString msg = QString("You are successfully convert") + "\n"
                      + "Your Currency is Equal to: " + QString::number(result) + "$";
        QMessageBox::information(this, "Success Message", msg, QMessageBox::Ok);

    }

    else if (UInternational == "Euro"){

        double result = Ulocal_INT / Euro;

        QString msg = QString("You are successfully convert") + "\n"
                      + "Your Currency is Equal to: " + QString::number(result) + "€";
        QMessageBox::information(this, "Success Message", msg, QMessageBox::Ok);

    }

    else if (UInternational == "Pound"){

        double result = Ulocal_INT / Pound;

        QString msg = QString("You are successfully convert") + "\n"
                      + "Your Currency is Equal to: " + QString::number(result) + "£";
        QMessageBox::information(this, "Success Message", msg, QMessageBox::Ok);

    }

    else{
        QString msg = QString("Invalid Inputs or International Currency");
        QMessageBox::warning(this, "Error Message", msg, QMessageBox::Ok);
    }


}

