#ifndef VENTANACONFIRMARSALIDA_H
#define VENTANACONFIRMARSALIDA_H

#include <QDialog>

namespace Ui {
class ventanaConfirmarSalida;
}

class ventanaConfirmarSalida : public QDialog {
    Q_OBJECT

public:
    explicit ventanaConfirmarSalida(QWidget *parent = 0);
    ~ventanaConfirmarSalida();

private slots:
    void on_btnSi_clicked();
    void on_btnNo_clicked();

private:
    Ui::ventanaConfirmarSalida *ui;
};

#endif // VENTANACONFIRMARSALIDA_H
