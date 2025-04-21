#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , submitBox(new SubmitDialog(this))
{
    ui->setupUi(this);
    // Connect to Submit button
    connect(ui->Submit_pushButton, &QPushButton::clicked, this,
            &MainWindow::on_SubmitFun);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete submitBox;
}

void MainWindow::on_SubmitFun()
{

}

