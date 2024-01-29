/********************************************************************************
** Form generated from reading UI file 'resultadoform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADOFORM_H
#define UI_RESULTADOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultadoForm
{
public:
    QLabel *label;
    QLabel *lblAsignatura;
    QLabel *label_3;
    QLabel *lblTema;
    QLabel *label_5;
    QLabel *lblScore;
    QPushButton *btnCerrar;
    QTableWidget *tblResultados;

    void setupUi(QWidget *ResultadoForm)
    {
        if (ResultadoForm->objectName().isEmpty())
            ResultadoForm->setObjectName(QString::fromUtf8("ResultadoForm"));
        ResultadoForm->resize(400, 300);
        label = new QLabel(ResultadoForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 61, 21));
        lblAsignatura = new QLabel(ResultadoForm);
        lblAsignatura->setObjectName(QString::fromUtf8("lblAsignatura"));
        lblAsignatura->setGeometry(QRect(140, 10, 71, 21));
        label_3 = new QLabel(ResultadoForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 40, 49, 16));
        lblTema = new QLabel(ResultadoForm);
        lblTema->setObjectName(QString::fromUtf8("lblTema"));
        lblTema->setGeometry(QRect(140, 40, 81, 21));
        label_5 = new QLabel(ResultadoForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 220, 49, 16));
        lblScore = new QLabel(ResultadoForm);
        lblScore->setObjectName(QString::fromUtf8("lblScore"));
        lblScore->setGeometry(QRect(140, 220, 49, 16));
        btnCerrar = new QPushButton(ResultadoForm);
        btnCerrar->setObjectName(QString::fromUtf8("btnCerrar"));
        btnCerrar->setGeometry(QRect(290, 260, 75, 24));
        tblResultados = new QTableWidget(ResultadoForm);
        tblResultados->setObjectName(QString::fromUtf8("tblResultados"));
        tblResultados->setGeometry(QRect(130, 60, 256, 141));

        retranslateUi(ResultadoForm);

        QMetaObject::connectSlotsByName(ResultadoForm);
    } // setupUi

    void retranslateUi(QWidget *ResultadoForm)
    {
        ResultadoForm->setWindowTitle(QCoreApplication::translate("ResultadoForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ResultadoForm", "Asignatura", nullptr));
        lblAsignatura->setText(QCoreApplication::translate("ResultadoForm", "Desconocido", nullptr));
        label_3->setText(QCoreApplication::translate("ResultadoForm", "Tema", nullptr));
        lblTema->setText(QCoreApplication::translate("ResultadoForm", "Desconocido", nullptr));
        label_5->setText(QCoreApplication::translate("ResultadoForm", "Score", nullptr));
        lblScore->setText(QCoreApplication::translate("ResultadoForm", "000%", nullptr));
        btnCerrar->setText(QCoreApplication::translate("ResultadoForm", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultadoForm: public Ui_ResultadoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOFORM_H
