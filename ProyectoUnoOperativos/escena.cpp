#include "escena.h"
#include "imagen.h"

#define POSX 0.0
#define POSY 0.0
#define WIDTH 600.0
#define HEIGHT 600.0

escena::escena(QObject *parent) : QGraphicsScene(POSX, POSY, WIDTH, HEIGHT, parent) {

    /*carro = new imagen(":/automovil.png");
    carro->setPosicion(QPointF(0.0,0.0));
    carro->setVelocidad(QPointF(1.0,1.0));
    carro->setTamano(QSizeF(20.0,20.0));
    addItem(carro);
    */

}

void escena::actualizar() {
    /*int x = carro->posicion().x;
    int y = carro->posicion().y;
    int xVel= carro->velocidad().x;
    int yVel = carro->velocidad().y;

    x+= xVel;
    y += yVel;
    yVel += 0.5;

    carro->setPosicion(QPoint(x,y));
    carro->setVelocidad(QPoint(xVel,yVel));
    update();
    */
}
