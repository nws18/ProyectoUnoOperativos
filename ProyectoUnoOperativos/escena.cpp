#include "escena.h"
#include "imagen.h"
#include <iostream>
#include "mainwindow.h"
#define POSX 0.0
#define POSY 0.0
#define WIDTH 1121.0
#define HEIGHT 590.0

using namespace std;

//Lista declarada en mainwindow con datos de la configuración
extern QList<int> lista;

escena::escena(QObject *parent) : QGraphicsScene(POSX, POSY, WIDTH, HEIGHT, parent) {

    double xVertical = 0.0;
    double yVertical = 0.0;
    double xHorizontal = 0.0;
    double yHorizontal = 0.0;
    int cantidadCarriles = lista.at(1);
    int j;

    for(j = 0; j < cantidadCarriles; j++) {
        int random = rand() % 2;

        if(cantidadCarriles % 2 == 0) {
            //Calle vertical
            Imagen *calleVertical = new Imagen();
            calleVertical->setPosicion(QPointF(xVertical+=450.0,yVertical+=5.0));
            calleVertical->setTamano(QSizeF(150.0,1250.0));
            calleVertical->setFileName(":road.png");
            addItem(calleVertical);

            //Calle horizontal
            Imagen *calleHorizontal = new Imagen();
            calleHorizontal->setPosicion(QPointF(xHorizontal,yHorizontal+=155.0));
            calleHorizontal->setTamano(QSizeF(1250,150));
            calleHorizontal->setFileName(":road2.png");
            addItem(calleHorizontal);
            j++;
        }
        else {
            if (random == 0) {
                cout << random;
                //Calle vertical
                Imagen *calleVertical = new Imagen();
                calleVertical->setPosicion(QPointF(xVertical+=450.0,yVertical+=5.0));
                calleVertical->setTamano(QSizeF(150.0,1250.0));
                calleVertical->setFileName(":road.png");
                addItem(calleVertical);
            } else if(random == 1) {
                cout << random;
                //Calle horizontal
                Imagen *calleHorizontal = new Imagen();
                calleHorizontal->setPosicion(QPointF(xHorizontal,yHorizontal+=155.0));
                calleHorizontal->setTamano(QSizeF(1250.0,150.0));
                calleHorizontal->setFileName(":road2.png");
                addItem(calleHorizontal);
            }
        }
    }
    double xVehiculo = 0.0;
    double yVehiculo = 0.0;
    int cantidadVehiculos = lista.at(0);
    int i;
    for (i = 0; i < cantidadVehiculos; i++) {
        //Tipo de vehículo que se va a mostrar
        int random = rand() % 6;
        if (random == 0) {
            Imagen *vehiculo = new Imagen();
            vehiculo->setVelocidad(QPointF(1.0,1.0));
            vehiculo->setTamano(QSizeF(157.0,62.0));
            vehiculo->setFileName(":carro1.png");
            if (cantidadCarriles == 1 || cantidadCarriles == 2) {
               vehiculo->setPosicion(QPointF(xHorizontal, yHorizontal));
               addItem(vehiculo);
            } else if (cantidadCarriles == 3) {
                vehiculo->setPosicion(QPointF(xHorizontal, yHorizontal-155.0));
                addItem(vehiculo);
            }
        } else if(random == 1) {
            Imagen *camion = new Imagen();
            camion->setVelocidad(QPointF(1.0,1.0));
            camion->setTamano(QSizeF(157.0,62.0));
            camion->setFileName(":camion2.png");
            if (cantidadCarriles == 1) {
               camion->setPosicion(QPointF(xHorizontal,yHorizontal));
               addItem(camion);
            } else if (cantidadCarriles == 2 || cantidadCarriles == 3) {
                camion->setPosicion(QPointF(xVertical,yVertical));
                addItem(camion);
            }
        } else if(random == 2) {
            Imagen *furgon = new Imagen();
            furgon->setVelocidad(QPointF(1.0,1.0));
            furgon->setTamano(QSizeF(157.0,62.0));
            furgon->setFileName(":camion.png");
            if(cantidadCarriles == 1 || cantidadCarriles == 2) {
                furgon->setPosicion(QPointF(xHorizontal,yHorizontal));
                addItem(furgon);
            } else if (cantidadCarriles == 3) {
                furgon->setPosicion(QPointF(xHorizontal,yHorizontal));
                addItem(furgon);
            }
       } else if(random == 3) {
            Imagen *moto = new Imagen();
            moto->setVelocidad(QPointF(1.0,1.0));
            moto->setTamano(QSizeF(157.0,62.0));
            moto->setFileName(":motoSinFondo.png");
            addItem(moto);
            if (cantidadCarriles == 1) {
              moto->setPosicion(QPointF(xHorizontal,yHorizontal));
              addItem(moto);
            } else if (cantidadCarriles == 2 || cantidadCarriles == 3) {
                moto->setPosicion(QPointF(xVertical,yVertical));
                addItem(moto);
            }
       } else if(random == 4) {
            Imagen *bus = new Imagen();
            bus->setVelocidad(QPointF(1.0,1.0));
            bus->setTamano(QSizeF(157.0,62.0));
            bus->setFileName(":bus.png");
            if (cantidadCarriles == 1 || cantidadCarriles == 2) {
              bus->setPosicion(QPointF(xHorizontal,yHorizontal));
              addItem(bus);
            } else if (cantidadCarriles == 3) {
                bus->setPosicion(QPointF(xHorizontal,yHorizontal-155.0));
                addItem(bus);
            }
       }
    }
}

/*
 * Actualiza la posición de los vehículos
 */
void escena::actualizar() {

//    int x = vehiculo1->posicion().x();
//    int y = vehiculo1->posicion().y();
//    int xVel= vehiculo1->velocidad().x();
//    int yVel = vehiculo1->velocidad().y();

//    if(x < 950) {
//        x+= xVel;
//        xVel += 0.3;
//    }

//    vehiculo1->setPosicion(QPointF(x,y));
//    vehiculo1->setVelocidad(QPointF(xVel,yVel));
//    update();

}


