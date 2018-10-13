#ifndef ESCENA_H
#define ESCENA_H

#include <QGraphicsScene>
#include <imagen.h>
#include <iostream>
#include <QList>
#include <QVector>

using namespace std;

class Imagen;
class escena : public QGraphicsScene {
    Q_OBJECT
public:
    escena(QObject *parent = nullptr);
public slots:
    void actualizar();
private:
    Imagen *vehiculo1;
    Imagen *vehiculo2;
    Imagen *vehiculo3;
    Imagen *vehiculo4;
    Imagen *vehiculo5;
    Imagen *vehiculo6;
    Imagen *vehiculo7;
    Imagen *vehiculo8;
    //Imagen *vector[];
};

#endif // ESCENA_H
