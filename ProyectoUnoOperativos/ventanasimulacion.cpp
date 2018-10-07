#include "ventanasimulacion.h"
#include "ui_ventanasimulacion.h"
#include "configuracion.h"
#include "escena.h"
#include "hilo.h"
#define SEC 10
ventanaSimulacion::ventanaSimulacion(QWidget *parent):QDialog(parent), ui(new Ui::ventanaSimulacion){
    ui->setupUi(this);

    MiEscena = new escena(this);
    hilo = new Hilo(this);
    ui->graphicsView->setScene(MiEscena);
    connect(hilo, &Hilo::already, [&] () {
      emit update();

    });
    connect(this, &ventanaSimulacion::update, MiEscena, &escena::actualizar);
    hilo->start(SEC, QThread::HighestPriority);
    //Conectar hilo con señal
    //connect(&hilo, SIGNAL(signalHilo(int)), this, SLOT(setValorHilo(int)));
}

ventanaSimulacion::~ventanaSimulacion()
{
    delete ui;
}

/*void ventanaSimulacion::setValorHilo(int valorIncremento) {
    QMutexLocker ml(&mutexValorHilo);
    ui->pruebaHilo->setText(QString:: number(valorHilo+=valorIncremento));

}
*/
void ventanaSimulacion::on_pushButton_clicked()
{
    this->close();
    MainWindow *ventana = new MainWindow;
    ventana->show();

}

void ventanaSimulacion::on_btnIniciar_clicked()
{
    /*Para que el hilo empiece a correr
    if(hilo.isRunning()){
        hilo.stop();
    } else {
        //Iniciamos o reiniciamos el hilo
        hilo.restart(); //Si no ha iniciado, se inicia. De otra forma continua
    }

}
*/
}
