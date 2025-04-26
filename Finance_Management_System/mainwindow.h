#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "incomedialog.h"

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
    void on_Income_Fun();
    void OnGetIncome(const QString &Itype, const QString &IAmount);

private:
    Ui::MainWindow *ui;
    IncomeDialog incomeBox;
};
#endif // MAINWINDOW_H
