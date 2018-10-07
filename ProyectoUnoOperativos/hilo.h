#ifndef HILO_H
#define HILO_H

#include <QObject>
#include <QThread>

class Hilo : public QThread {
    Q_OBJECT

public:
    Hilo(QObject *parent = nullptr);
    void start(int msec,Priority p);
    inline bool isRunning() const;
    inline int msec() const;
signals:
    void already();
protected:
    void run();
private:
    bool mRunning;
    int mMsec;
};

bool Hilo::isRunning() const {
    return mRunning;
}

int Hilo::msec() const {
    return mMsec;
}
    /*Métodos para manejar el hilo
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
*/


#endif // HILO_H
