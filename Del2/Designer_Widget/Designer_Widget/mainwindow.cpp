#include "mainwindow.h"
#include "ui_mainwindow.h"


int usr_input = 0;

int val_red = 0;
int val_blue = 0;
int val_green = 0;

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

void MainWindow::on_pushButton_clicked()
{
    if(ui->spinBox->value()!=255){
        ui->spinBox->valueChanged(ui->spinBox->value()+(ui->lineEdit->text().toInt()));
        if(ui->spinBox->value()==255) {
            QMessageBox::about(this, "Max Val", "Maximum value reached for color red: 255");
        }
    }

    if(ui->spinBox_2->value()!=255){
        ui->spinBox_2->valueChanged(ui->spinBox_2->value()+(ui->lineEdit->text().toInt()));
        if(ui->spinBox_2->value()==255) {
            QMessageBox::about(this, "Max Val", "Maximum value reached for color green: 255");
        }
    }

    if(ui->spinBox_3->value()!=255){
        ui->spinBox_3->valueChanged(ui->spinBox_3->value()+(ui->lineEdit->text().toInt()));
        if(ui->spinBox_3->value()==255) {
            QMessageBox::about(this, "Max Val", "Maximum value reached for color red:  255");
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->spinBox->value()!=0){
        ui->spinBox->valueChanged(ui->spinBox->value()-(ui->lineEdit->text().toInt()));
        if(ui->spinBox->value()==0) {
            QMessageBox::about(this, "Min Val", "Minimum value reached for color red: 0");
        }
    }


    if(ui->spinBox_2->value()!=0){
        ui->spinBox_2->valueChanged(ui->spinBox_2->value()-(ui->lineEdit->text().toInt()));
        if(ui->spinBox_2->value()==0) {
            QMessageBox::about(this, "Min Val", "Minimum value reached for color green: 0");
        }
    }

    if(ui->spinBox_3->value()!=0){
        ui->spinBox_3->valueChanged(ui->spinBox_3->value()-(ui->lineEdit->text().toInt()));
        if(ui->spinBox_3->value()==0) {
            QMessageBox::about(this, "Min Val", "Minimum value reached for color red:  0");
        }
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    MainWindow::close();
}

void MainWindow::on_verticalSlider_valueChanged(int val)
{
    val_red = val;

    if (val_red >= 255) {
        QMessageBox::about(this, "Max Val", "Maximum value reached for color red: 255");
    }

    if (val_red <= 0) {
        QMessageBox::about(this, "Max Val", "Maximum value reached for color red: 255");
    }
}

void MainWindow::on_verticalSlider_2_valueChanged(int val)
{
    val_green = val;

    if (val_green >= 255) {
        QMessageBox::about(this, "Max Val", "Maximum value reached for color green: 255");
    }

    if (val_green <= 0) {
        QMessageBox::about(this, "Max Val", "Maximum value reached for color green: 255");
    }
}

void MainWindow::on_verticalSlider_3_valueChanged(int val)
{
    val_blue = val;

    if (val_blue >= 255) {
        QMessageBox::about(this, "Max Val", "Maximum value reached for color blue: 255");
    }

    if (val_blue <= 0) {
        QMessageBox::about(this, "Max Val", "Maximum value reached for color blue: 255");
    }
}
