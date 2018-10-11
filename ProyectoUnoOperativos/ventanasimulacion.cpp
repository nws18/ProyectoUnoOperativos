#include "ventanasimulacion.h"
#include "ui_ventanasimulacion.h"
#include "configuracion.h"
#include "escena.h"
#include "hilo.h"
#define SEC 10

ventanaSimulacion::ventanaSimulacion(QWidget *parent):QDialog(parent), ui(new Ui::ventanaSimulacion){
    ui->setupUi(this);

    MiEscena = new escena(this);
     //hilo = new Hilo(this);
     ui->graphicsView->setScene(MiEscena);
     /*
     connect(hilo, &Hilo::already, [&] () {
     emit update();
     });

    connect(this, &ventanaSimulacion::update, MiEscena, &escena::actualizar);
    hilo->start(SEC, QThread::HighestPriority);
*/
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

