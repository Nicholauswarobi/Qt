#ifndef SUBMITDIALOG_H
#define SUBMITDIALOG_H

#include <QDialog>

namespace Ui {
class SubmitDialog;
}

class SubmitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SubmitDialog(QWidget *parent = nullptr);
    ~SubmitDialog();

private slots:
    void on_Submit_Fee_Fun();

private:
    Ui::SubmitDialog *ui;
};

#endif // SUBMITDIALOG_H
