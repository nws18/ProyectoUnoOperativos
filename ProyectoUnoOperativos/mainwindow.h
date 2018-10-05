#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ventanasimulacion.h>
#include <ventanaconfirmarsalida.h>
#include <ventanacreditos.h>

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

    void on_MainWindow_toolButtonStyleChanged(const Qt::ToolButtonStyle &toolButtonStyle);

    void on_btnCreditos_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
