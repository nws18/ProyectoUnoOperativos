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


#endif // HILO_H
