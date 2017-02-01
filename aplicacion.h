#ifndef APLICACION_H
#define APLICACION_H

#include <QDialog>

namespace Ui {
class Aplicacion;
}

class Aplicacion : public QDialog
{
    Q_OBJECT

public:
    explicit Aplicacion(QWidget *parent = 0);
    ~Aplicacion();

    QString getTextoSinCifrar() const;
    void setTextoSinCifrar(const QString &value);

private slots:
    void on_pushButtonCifrar_clicked();

    void on_pushButtonDescifrar_clicked();

private:
    Ui::Aplicacion *ui;
    int numeroIzq;
    int numeroDere;
    QString textoSinCifrar;
    QString textoCifrado;

    void realizarCifrado();
    void iniciarTextos();
};

#endif // APLICACION_H
