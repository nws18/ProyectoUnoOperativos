#ifndef VENTANASIMULACION_H
#define VENTANASIMULACION_H

#include <QDialog>
#include <mainwindow.h>
#include <QMutex>
#include <hilo.h>
#include <configuracion.h>

namespace Ui {
class ventanaSimulacion;
}
class escena;
class hilo;

class ventanaSimulacion : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaSimulacion(QWidget *parent = nullptr);
    ~ventanaSimulacion();

private slots:
    void on_pushButton_clicked();
    void setValorHilo(int);

    void on_btnIniciar_clicked();

private:
    Ui::ventanaSimulacion *ui;
    escena *MiEscena;
    Hilo hilo;
    int valorHilo;
    QMutex mutexValorHilo;

};

#endif // VENTANASIMULACION_H
