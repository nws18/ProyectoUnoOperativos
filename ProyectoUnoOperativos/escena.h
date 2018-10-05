#ifndef ESCENA_H
#define ESCENA_H

#include <QGraphicsScene>

class imagen;
class escena : public QGraphicsScene
{
    Q_OBJECT
public:
    escena(QObject *parent = nullptr);
public slots:
    void actualizar();
private:
    imagen *carro;
};

#endif // ESCENA_H
