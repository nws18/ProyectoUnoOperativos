#include "mainwindow.h"
#include "ui_mainwindow.h"

QList <int> lista; //Lista que contiene los datos de la configuración

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
    //Cerrar ventana actual
    this->close();

    //Datos de la configuración inicial
    lista << ui->cantidadVehiculos->value();
    lista << ui->cantidadCarriles->value();
    lista << ui->PasosDesnivelSuperior->value();
    lista << ui->pasosDesnvielInferior->value();
    lista << ui->intersecciones->value();
    lista << ui->cantidadEntradas->value();
    lista << ui->cantidaSalidas->value();

    //Mostrar ventana simulación
    ventanaSimulacion *ventana = new ventanaSimulacion;
    ventana->show();
}

void MainWindow::on_btnCreditos_clicked() {
    this->close();
    ventanaCreditos *ventana = new ventanaCreditos;
    ventana->show();
}
