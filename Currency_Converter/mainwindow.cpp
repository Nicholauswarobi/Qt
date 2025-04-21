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
    int Dollar = 50;
    int Euro = 30;
    int Pound = 20;


    QString ULocal = ui->Local_lineEdit->text();
    int Ulocal_INT = ULocal.toInt();
    QString UInternational = ui->International_lineEdit->text();

    if (UInternational == "Dollar"){

        int result = Ulocal_INT / Dollar;

    }
}

