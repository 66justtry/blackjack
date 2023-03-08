#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "round.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    unique_ptr<Round> round;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SetSpinBox(int);

private slots:
    void on_button1_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
