#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configuracion.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_botonSalir_clicked(){
    ventanaConfirmarSalida *ventana = new ventanaConfirmarSalida;
    ventana->show();
}

void MainWindow::on_botonIniciar_clicked(){
    this->close();
    ventanaSimulacion *ventana = new ventanaSimulacion;
    ventana->show();
}

void MainWindow::on_btnCreditos_clicked()
{
    this->close();
    ventanaCreditos *ventana = new ventanaCreditos;
    ventana->show();
}
