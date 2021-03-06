#ifndef DIALOG_H
#define DIALOG_H
#include<QSharedMemory>
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
public slots:
    void loadFromFile();
    void loadFromMemory();
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_loadFromSharedMemoryButton_clicked();

private:
    void detach();
    QSharedMemory sharedMemory;
    Ui::Dialog *ui;
};

#endif // DIALOG_H
