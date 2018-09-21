#include "ventanareportes.h"
#include "ui_ventanareportes.h"

ventanaReportes::ventanaReportes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaReportes)
{
    ui->setupUi(this);
}

ventanaReportes::~ventanaReportes()
{
    delete ui;
}
