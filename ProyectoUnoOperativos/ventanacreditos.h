#ifndef VENTANACREDITOS_H
#define VENTANACREDITOS_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class ventanaCreditos;
}

class ventanaCreditos : public QDialog {
    Q_OBJECT

public:
    explicit ventanaCreditos(QWidget *parent = 0);
    ~ventanaCreditos();

private slots:
    void on_btnSalir_clicked();

private:
    Ui::ventanaCreditos *ui;
};

#endif // VENTANACREDITOS_H
