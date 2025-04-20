#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "adddialog.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Add_pushButton_clicked();
    void OnAddBook(const QString &name, const QString &price);

private:
    Ui::MainWindow *ui;
    AddDialog *AddBox;
};
#endif // MAINWINDOW_H
