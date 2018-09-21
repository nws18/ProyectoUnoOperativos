#ifndef VENTANAREPORTES_H
#define VENTANAREPORTES_H

#include <QDialog>

namespace Ui {
class ventanaReportes;
}

class ventanaReportes : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaReportes(QWidget *parent = nullptr);
    ~ventanaReportes();

private:
    Ui::ventanaReportes *ui;
};

#endif // VENTANAREPORTES_H
