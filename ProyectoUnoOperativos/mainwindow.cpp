#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    //Solo mostrar botón de minimizar
    this->setWindowFlags(Qt::WindowMinimizeButtonHint);
    //Posición ventana
    this->move(375,45);
}

/*MainWindow::~MainWindow(){
    delete ui;
}*/

void MainWindow::on_botonSalir_clicked(){
    ventanaConfirmarSalida *ventana = new ventanaConfirmarSalida;
    ventana->show();
}

void MainWindow::on_botonIniciar_clicked(){
    this->close();
    ventanaSimulacion *ventana = new ventanaSimulacion;
    ventana->show();
}


void MainWindow::on_btnCreditos_clicked() {
    this->close();
    ventanaCreditos *ventana = new ventanaCreditos;
    ventana->show();
}
