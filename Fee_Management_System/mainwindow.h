#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "submitdialog.h"
#include "recorddialog.h"

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
    void on_SubmitFun();
    void OnGetFee(const QString &roll, const QString &fAmount);

    void on_RecordFun();

private:
    Ui::MainWindow *ui;
    SubmitDialog *submitBox;
    RecordDialog *recordBox;

};
#endif // MAINWINDOW_H
