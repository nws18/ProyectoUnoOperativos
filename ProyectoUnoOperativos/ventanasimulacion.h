#ifndef VENTANASIMULACION_H
#define VENTANASIMULACION_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class ventanaSimulacion;
}

class ventanaSimulacion : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaSimulacion(QWidget *parent = nullptr);
    ~ventanaSimulacion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ventanaSimulacion *ui;
};

#endif // VENTANASIMULACION_H
