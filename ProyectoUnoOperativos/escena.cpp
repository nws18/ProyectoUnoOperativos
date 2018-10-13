#include "escena.h"
#include "imagen.h"
#include <iostream>

#define POSX 0.0
#define POSY 0.0
#define WIDTH 1121.0
#define HEIGHT 590.0

using namespace std;

escena::escena(QObject *parent) : QGraphicsScene(POSX, POSY, WIDTH, HEIGHT, parent) {
    //vector[1] = new Imagen[8];
    //Imagen vector[5];
    vehiculo1 = new Imagen();
    vehiculo1->setPosicion(QPointF(0.0,10.0));
    vehiculo1->setVelocidad(QPointF(1.0,1.0));
    vehiculo1->setTamano(QSizeF(157.0,62.0));
    vehiculo1->setFileName(":bus.png");

    vehiculo2 = new Imagen();
    vehiculo2->setPosicion(QPointF(0.0,10.0));
    vehiculo2->setVelocidad(QPointF(1.0,1.0));
    vehiculo2->setTamano(QSizeF(157.0,62.0));
    vehiculo2->setFileName(":camion.png");

    vehiculo3 = new Imagen();
    vehiculo3->setPosicion(QPointF(100.0,100.0));
    vehiculo3->setVelocidad(QPointF(1.0,1.0));
    vehiculo3->setTamano(QSizeF(157.0,62.0));
    vehiculo3->setFileName(":camion2.png");

    vehiculo4 = new Imagen();
    vehiculo4->setPosicion(QPointF(0.0,10.0));
    vehiculo4->setVelocidad(QPointF(1.0,1.0));
    vehiculo4->setTamano(QSizeF(157.0,62.0));
    vehiculo4->setFileName(":carro1.png");

    vehiculo5 = new Imagen();
    vehiculo5->setPosicion(QPointF(0.0,10.0));
    vehiculo5->setVelocidad(QPointF(1.0,1.0));
    vehiculo5->setTamano(QSizeF(157.0,62.0));
    vehiculo5->setFileName(":carro2.png");

    vehiculo6 = new Imagen();
    vehiculo6->setPosicion(QPointF(0.0,10.0));
    vehiculo6->setVelocidad(QPointF(1.0,1.0));
    vehiculo6->setTamano(QSizeF(157.0,62.0));
    vehiculo6->setFileName(":carro3.png");

    vehiculo7 = new Imagen();
    vehiculo7->setPosicion(QPointF(0.0,10.0));
    vehiculo7->setVelocidad(QPointF(1.0,1.0));
    vehiculo7->setTamano(QSizeF(157.0,62.0));
    vehiculo7->setFileName(":carro4.png");

    vehiculo8 = new Imagen();
    vehiculo8->setPosicion(QPointF(0.0,10.0));
    vehiculo8->setVelocidad(QPointF(1.0,1.0));
    vehiculo8->setTamano(QSizeF(157.0,62.0));
    vehiculo8->setFileName(":motoSinFondo.png");

/*
    vector[0] = vehiculo1;
    vector[1] = vehiculo2;
    vector[2] = vehiculo3;

    vehiculos->append(vehiculo1);
    vehiculos->append(vehiculo2);
    vehiculos->append(vehiculo3);
    vehiculos->append(vehiculo4);
    //vehiculos.append(vehiculo5);
    //vehiculos.append(vehiculo6);
    //vehiculos.append(vehiculo7);
   // vehiculos.append(vehiculo8);

int i;
    for(i = 0; i < vehiculos.size(); ++i) {
        cout << vehiculos.size();
    }

    vector[0] = vehiculo1;
    vector[1] = vehiculo2;
    //vector[2] = vehiculo3;

   vector[3] = vehiculo4;
   vector[4] = vehiculo5;
   vector[5] = vehiculo6;
   vector[6] = vehiculo7;
   vector[7] = vehiculo8;

    addItem(vector[0]);
    addItem(vector[1]);
    addItem(vehiculo3);
*/
   /*int cantidadVehiculos;
   for(cantidadVehiculos = 0; cantidadVehiculos < 8; cantidadVehiculos++) {
        addItem(vector[cantidadVehiculos]);
   }
*/
}

/*
 * Actualiza la posición de los vehículos
 */
void escena::actualizar() {

    /*int x = vehiculo1->posicion().x();
    int y = vehiculo1->posicion().y();
    int xVel= vehiculo1->velocidad().x();
    int yVel = vehiculo1->velocidad().y();

    if(x < 950) {
        x+= xVel;
        xVel += 0.3;
    }

    vehiculo1->setPosicion(QPointF(x,y));
    vehiculo1->setVelocidad(QPointF(xVel,yVel));
    update();
    */
}


