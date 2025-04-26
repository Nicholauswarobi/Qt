#ifndef RECORDDIALOG_H
#define RECORDDIALOG_H

#include <QDialog>

namespace Ui {
class RecordDialog;
}

class RecordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RecordDialog(QWidget *parent = nullptr);
    ~RecordDialog();

private slots:
    void on_Record_Fee_Fun();

private:
    Ui::RecordDialog *ui;
};

#endif // RECORDDIALOG_H
