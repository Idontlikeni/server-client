#ifndef ENTERDIALOG_H
#define ENTERDIALOG_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class EnterDialog;
}

class EnterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EnterDialog(QWidget *parent = nullptr);
    ~EnterDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EnterDialog *ui;
    MainWindow* mainw;
};

#endif // ENTERDIALOG_H
