#ifndef ESCENA_H
#define ESCENA_H

#include <QGraphicsScene>
#include <imagen.h>
class Imagen;
class escena : public QGraphicsScene
{
    Q_OBJECT
public:
    escena(QObject *parent = nullptr);
public slots:
    void actualizar();
private:
    Imagen *carro;
};

#endif // ESCENA_H
