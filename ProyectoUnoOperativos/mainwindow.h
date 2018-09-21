#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <indiceventanasimulacion.h>
#include <ventanasimulacion.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_botonSalir_clicked();

    void on_botonIniciar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
