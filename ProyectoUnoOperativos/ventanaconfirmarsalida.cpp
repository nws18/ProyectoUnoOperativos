#include "ventanaconfirmarsalida.h"
#include "ui_ventanaconfirmarsalida.h"

ventanaConfirmarSalida::ventanaConfirmarSalida(QWidget *parent) : QDialog(parent), ui(new Ui::ventanaConfirmarSalida) {
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowMinimizeButtonHint);
}

ventanaConfirmarSalida::~ventanaConfirmarSalida() {
    delete ui;
}

void ventanaConfirmarSalida::on_btnSi_clicked() {
    exit(0);
}

void ventanaConfirmarSalida::on_btnNo_clicked() {
    this->setVisible(false);
}
