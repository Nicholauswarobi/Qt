#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Convert_pushButton, &QPushButton::clicked, &MainWindow::on_Convert_pushButton_clicked);
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
    QString UInternational = ui->International_lineEdit->text();
}

