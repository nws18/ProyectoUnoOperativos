#ifndef IMAGEN_H
#define IMAGEN_H

#include <QObject>
#include <qgraphicsitem.h>
#include <QPointF>
#include <QSizeF>
#include <QImage>
#include <imagen.h>
#include <iostream>
using namespace std;

class Imagen : public QGraphicsItem {

public:
    Imagen(QGraphicsItem *parent = nullptr);
    inline void setPosicion(const QPointF &pos);
    inline void setVelocidad(const QPointF &vel);
    inline void setTamano(const QSizeF &tam);
    inline void setFileName(const QString &fileName);

    inline QPointF posicion() const;
    inline QPointF velocidad() const;
    inline QSizeF tamano() const;
    inline QString filename() const;

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget=0);

private:
    QPointF ObjPos; //Posición en "x" y "y"
    QPointF ObjVel; // Velocidad en "x" y "y"
    QSizeF ObjTam; // Tamaño del objeto
    QString ObjFilename; //Nombre del archivo
};

void Imagen::setPosicion(const QPointF &pos){
    ObjPos = pos;
}

void Imagen::setVelocidad(const QPointF &vel){
    ObjVel = vel;
}

void Imagen::setTamano(const QSizeF &size){
    ObjTam = size;
}

void Imagen::setFileName(const QString &fileName) {
    ObjFilename = fileName;
}

QPointF Imagen::posicion() const {
    return ObjPos;
}

QPointF Imagen::velocidad() const {
    return ObjVel;
}

QSizeF Imagen::tamano() const {
    return ObjTam;
}

QString Imagen::filename() const {
    return ObjFilename;
}

#endif
