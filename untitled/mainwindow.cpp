#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Ensure the button is connected (if not already done in .ui file)
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("mydatabase.db"); // Creates the DB file in the working directory

    if (!db.open()) {
        qDebug() << "SQLite database open error:" << db.lastError().text();
        return;
    }

    qDebug() << "SQLite connected successfully!";

    // Optional: Create a table if it doesn't exist
    QSqlQuery query;
    QString createTable = "CREATE TABLE IF NOT EXISTS students ("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                          "name TEXT, "
                          "age INTEGER)";

    if (!query.exec(createTable)) {
        qDebug() << "Table creation error:" << query.lastError().text();
    } else {
        qDebug() << "Table 'students' ready.";
    }
}


