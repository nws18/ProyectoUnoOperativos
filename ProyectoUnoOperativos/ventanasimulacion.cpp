#include "ventanasimulacion.h"
#include "ui_ventanasimulacion.h"

ventanaSimulacion::ventanaSimulacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaSimulacion)
{
    ui->setupUi(this);
}

ventanaSimulacion::~ventanaSimulacion()
{
    delete ui;
}

void ventanaSimulacion::on_pushButton_clicked()
{
    this->close();
    MainWindow *ventana = new MainWindow;
    ventana->show();
}
