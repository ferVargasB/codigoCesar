#include "aplicacion.h"
#include "ui_aplicacion.h"

Aplicacion::Aplicacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Aplicacion)
{
    ui->setupUi(this);
    iniciarTextos();
    ui->pushButtonDescifrar->hide();
}

Aplicacion::~Aplicacion()
{
    delete ui;
}

QString Aplicacion::getTextoSinCifrar() const
{
    return textoSinCifrar;
}

void Aplicacion::setTextoSinCifrar(const QString &value)
{
    textoSinCifrar = value;
}

void Aplicacion::on_pushButtonCifrar_clicked()
{
    bool ok;
    numeroDere = ui->lineEditDere->text().toInt(&ok, 10);
    numeroIzq = ui->lineEditIzq->text().toInt(&ok, 10);
    setTextoSinCifrar( ui->texto->toPlainText() );
    realizarCifrado();
}

void Aplicacion::realizarCifrado()
{
    if ( ui->radioButtonDerecha->isChecked() ){
        for (auto i = 0; i < textoSinCifrar.size(); i++){
            QChar caracterActual = textoSinCifrar.at( i );
            int posicionDelCaracterActual = caracterActual.toLatin1();
            textoCifrado += posicionDelCaracterActual + numeroDere;
        }
    }
    if( ui->radioButtonIzq->isChecked() ){
        for (auto i = 0; i < textoSinCifrar.size(); i++){
            QChar caracterActual = textoSinCifrar.at( i );
            int posicionDelCaracterActual = caracterActual.toLatin1();
            textoCifrado += posicionDelCaracterActual - numeroIzq;
        }
    }

    ui->texto->setPlainText( textoCifrado );
    ui->pushButtonCifrar->hide();
    ui->pushButtonDescifrar->show();
}

void Aplicacion::iniciarTextos()
{
    textoSinCifrar = "";
    textoCifrado = "";
}

void Aplicacion::on_pushButtonDescifrar_clicked()
{
    if ( ui->radioButtonDerecha->isChecked() ){
        for (auto i = 0; i < textoCifrado.size(); i++){
            QChar caracterActual = textoCifrado.at( i );
            int posicionDelCaracterActual = caracterActual.toLatin1();
            textoSinCifrar[i] = posicionDelCaracterActual - numeroDere;
        }
    }
    if( ui->radioButtonIzq->isChecked() ){
        for (auto i = 0; i < textoCifrado.size(); i++){
            QChar caracterActual = textoCifrado.at( i );
            int posicionDelCaracterActual = caracterActual.toLatin1();
            textoSinCifrar[i] = posicionDelCaracterActual + numeroIzq;
        }
    }


    ui->texto->setPlainText( textoSinCifrar );
    ui->pushButtonDescifrar->hide();
    ui->pushButtonCifrar->show();
    iniciarTextos();
}
