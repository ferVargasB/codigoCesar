/********************************************************************************
** Form generated from reading UI file 'aplicacion.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APLICACION_H
#define UI_APLICACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Aplicacion
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonIzq;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEditIzq;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonDerecha;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEditDere;
    QPlainTextEdit *texto;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonCifrar;
    QPushButton *pushButtonDescifrar;

    void setupUi(QDialog *Aplicacion)
    {
        if (Aplicacion->objectName().isEmpty())
            Aplicacion->setObjectName(QStringLiteral("Aplicacion"));
        Aplicacion->resize(690, 474);
        gridLayout = new QGridLayout(Aplicacion);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButtonIzq = new QRadioButton(Aplicacion);
        radioButtonIzq->setObjectName(QStringLiteral("radioButtonIzq"));

        horizontalLayout->addWidget(radioButtonIzq);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        lineEditIzq = new QLineEdit(Aplicacion);
        lineEditIzq->setObjectName(QStringLiteral("lineEditIzq"));

        horizontalLayout->addWidget(lineEditIzq);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButtonDerecha = new QRadioButton(Aplicacion);
        radioButtonDerecha->setObjectName(QStringLiteral("radioButtonDerecha"));

        horizontalLayout_2->addWidget(radioButtonDerecha);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        lineEditDere = new QLineEdit(Aplicacion);
        lineEditDere->setObjectName(QStringLiteral("lineEditDere"));

        horizontalLayout_2->addWidget(lineEditDere);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        texto = new QPlainTextEdit(Aplicacion);
        texto->setObjectName(QStringLiteral("texto"));

        gridLayout->addWidget(texto, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonCifrar = new QPushButton(Aplicacion);
        pushButtonCifrar->setObjectName(QStringLiteral("pushButtonCifrar"));

        horizontalLayout_3->addWidget(pushButtonCifrar);

        pushButtonDescifrar = new QPushButton(Aplicacion);
        pushButtonDescifrar->setObjectName(QStringLiteral("pushButtonDescifrar"));

        horizontalLayout_3->addWidget(pushButtonDescifrar);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(Aplicacion);

        QMetaObject::connectSlotsByName(Aplicacion);
    } // setupUi

    void retranslateUi(QDialog *Aplicacion)
    {
        Aplicacion->setWindowTitle(QApplication::translate("Aplicacion", "Aplicacion", 0));
        radioButtonIzq->setText(QApplication::translate("Aplicacion", "Izquierda", 0));
        radioButtonDerecha->setText(QApplication::translate("Aplicacion", "Derecha", 0));
        pushButtonCifrar->setText(QApplication::translate("Aplicacion", "Cifrar", 0));
        pushButtonDescifrar->setText(QApplication::translate("Aplicacion", "Descifrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Aplicacion: public Ui_Aplicacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APLICACION_H
