#include "ventanasimulacion.h"
#include "ui_ventanasimulacion.h"
#include "escena.h"
#include "hilo.h"
#include <QPrinter>
#include <QPainter>
#include "escena.h"
#define SEC 10

ventanaSimulacion::ventanaSimulacion(QWidget *parent):QDialog(parent), ui(new Ui::ventanaSimulacion) {
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowMinimizeButtonHint);
    ui->lbl_reporte->setVisible(false);
    MiEscena = new escena(this);
    ui->graphicsView->setScene(MiEscena);

     hilo = new Hilo(this);
     connect(hilo, &Hilo::already, [&] () {
     emit update();
     });

     connect(this, &ventanaSimulacion::update, MiEscena, &escena::actualizar);
     hilo->start(SEC, QThread::NormalPriority);

}

ventanaSimulacion::~ventanaSimulacion() {
    delete ui;
}

void ventanaSimulacion::on_pushButton_clicked() {
    this->close();
    MainWindow *ventana = new MainWindow;
    ventana->show();
}
 /*
  * Crea un reporte en formato pdf
  */
int ventanaSimulacion::on_btnReporte_clicked() {
   ui->lbl_reporte->setVisible(true);
   QPrinter printer;
   printer.setOutputFormat(QPrinter::PdfFormat);
   printer.setOutputFileName("reporte.pdf");
   QPainter painter;
   if (! painter.begin(&printer)) { // failed to open file
       qWarning("failed to open file, is it writable?");
        return 1;
    }
    painter.drawText(10, 10, "hola");
    if (! printer.newPage()) {
        qWarning("failed in flushing page to disk, disk full?");
        return 1;
     }
     //painter.drawText(10, 10, "Test 2");
     painter.end();
}
