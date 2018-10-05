#include "configuracion.h"

Configuracion::Configuracion(QObject *parent) : QObject(parent){

}

Configuracion::Configuracion(int vehiculos, int carriles, int pasosDesnivel, int intersecciones, int entradas, int salidas):
                             cantidadVehiculos(vehiculos), cantidadCarriles(carriles), cantidadPasosDesnivel(pasosDesnivel),
                             cantidadIntersecciones(intersecciones), cantidadEntradas(entradas), cantidadSalidas(salidas) {

}

void Configuracion::setConfiguracion(int valorVehiculos){
    cantidadVehiculos = valorVehiculos;
}

int Configuracion::getConfiguracion() {
    return cantidadVehiculos;
}

