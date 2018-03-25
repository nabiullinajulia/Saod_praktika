#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int listPos;
    void PrintList();
    void PrintInfo();


private:
    Ui::MainWindow *ui;

private slots:
    void on_pushSearch_clicked();
    void on_pushDelete_clicked();
    void on_pushAdd1_clicked();
    void on_pushAdd2_clicked();
    void on_pushSave_clicked();
    void on_pushLoad_clicked();
};

#endif // MAINWINDOW_H
