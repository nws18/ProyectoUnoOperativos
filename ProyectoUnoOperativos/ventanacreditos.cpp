#include "ventanacreditos.h"
#include "ui_ventanacreditos.h"

ventanaCreditos::ventanaCreditos(QWidget *parent) : QDialog(parent), ui(new Ui::ventanaCreditos) {
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowMinimizeButtonHint);
}

ventanaCreditos::~ventanaCreditos() {
    delete ui;
}

void ventanaCreditos::on_btnSalir_clicked() {
    this->close();
    MainWindow *ventana = new MainWindow;
    ventana->show();
}
