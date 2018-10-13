#include <hilo.h>

Hilo::Hilo(QObject *parent) : QThread(parent) {
    mRunning = false;
    mMsec = 0;
}

void Hilo::start(int msec,QThread::Priority p) {
    mMsec = msec;
    mRunning = true;
    QThread::start(p);
}

void Hilo::run() {
    while(mRunning) {
        emit already();
        msleep(mMsec);

    }
}

/*Hilo::Hilo(int valorIncremento, int tiempo): estaEjecutandose(true), incremento(valorIncremento), milisegundos(tiempo) {
    QThread::setObjectName("Hilo");
    milisegundos = tiempo;
}

void Hilo::run() {
    while(true) {
        msleep(milisegundos);
        if(!estaEjecutandose) break;
        emit signalHilo(incremento);
    }
}

void Hilo::stop(){
    estaEjecutandose = false;
    wait();
}

void Hilo::restart(){
    estaEjecutandose = true;
    QThread::start();
}

int Hilo::getIncremento(){
    return incremento;
}

void Hilo::setIncremento(int valor) {
    incremento = valor;
}

void Hilo::setMilisegundos(int milisegundos){
   Hilo:: milisegundos = milisegundos;
}
*/

