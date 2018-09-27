#include "configuracion.h"

Configuracion::Configuracion(QObject *parent) : QObject(parent){

}

Configuracion::Configuracion(int vehiculos, int carriles, int pasosDesnivel, int intersecciones, int entradas, int salidas) {
    vehiculos = 1;
    carriles = 1;
    pasosDesnivel = 1;
    intersecciones = 1;
    entradas = 1;
    salidas = 1;
}

void Configuracion::configurarSimulacion(){

}
