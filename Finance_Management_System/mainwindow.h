#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "incomedialog.h"
#include "expensedialog.h"

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

    void on_ExpenseFun();
    void OnGetExpense(const QString &EType, const QString &EAmount);

    void on_BalanceFun();

private:
    Ui::MainWindow *ui;
    IncomeDialog *incomeBox;
    ExpenseDialog *expenseBox;
};
#endif // MAINWINDOW_H
