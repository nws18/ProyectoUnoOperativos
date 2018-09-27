#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QObject>

class Configuracion : public QObject
{
    Q_OBJECT
public:
    explicit Configuracion(QObject *parent = nullptr);
    Configuracion(int vehiculos, int carriles, int pasosDesnivel, int intersecciones, int entradas, int salidas);
    void configurarSimulacion();

signals:

public slots:
};

#endif // CONFIGURACION_H
