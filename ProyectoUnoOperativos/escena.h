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

};

#endif // ESCENA_H
