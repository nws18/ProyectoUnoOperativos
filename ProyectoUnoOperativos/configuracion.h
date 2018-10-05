#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QObject>

class Configuracion : public QObject
{
    Q_OBJECT
public:
    explicit Configuracion(QObject *parent = nullptr);
    Configuracion(int vehiculos, int carriles, int pasosDesnivel, int intersecciones, int entradas, int salidas);
    void setConfiguracion(int);
    int getConfiguracion();

signals:

public slots:
private:
    int cantidadVehiculos;
    int cantidadCarriles;
    int cantidadPasosDesnivel;
    int cantidadIntersecciones;
    int cantidadEntradas;
    int cantidadSalidas;

};

#endif // CONFIGURACION_H
