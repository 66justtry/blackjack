#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "round.h"
#include <memory>
#include <string>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_button1_clicked()
{
    round = make_unique<Round>(ui->spinBox1->value());
    QString qs;
    ui->label1->setText(qs.setNum(round->GetBid()));
}

void MainWindow::SetSpinBox(int max) {
    ui->spinBox1->setMinimum(0);
    ui->spinBox1->setMaximum(max);
    ui->spinBox1->setValue(0);
}
