#include "imagen.h"
#include "QPainter"

Imagen::Imagen(QGraphicsItem *parent) : QGraphicsItem() {
}

QRectF Imagen::boundingRect() const {
    return QRectF(ObjPos.x(), ObjPos.y(), ObjTam.width(), ObjTam.height());
}

void Imagen::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *) {
    painter->drawPixmap(ObjPos.x(), ObjPos.y(), ObjTam.width(), ObjTam.height(), QPixmap(ObjFilename));
}
