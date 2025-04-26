#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Income_pushButton, &QPushButton::clicked, &MainWindow::on_Income_Fun);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Income_Fun()
{

}

