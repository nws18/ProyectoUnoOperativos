#ifndef HILO_H
#define HILO_H

#include <QObject>
#include <QThread>

class Hilo : public QThread {
    Q_OBJECT

public:
    explicit Hilo(QObject *parent = nullptr);
    Hilo(int valorIncremento, int tiempo);

    //Métodos para manejar el hilo
    void run();
    void stop();
    void restart();

    int getIncremento();
    void setIncremento(int);
    void setMilisegundos(int);

//Señales del hilo
signals:
    void signalHilo(int);

public slots:
private:
    bool estaEjecutandose;
    int incremento;
    int milisegundos;

};

#endif // HILO_H
