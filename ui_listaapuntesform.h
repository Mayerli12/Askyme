/********************************************************************************
** Form generated from reading UI file 'listaapuntesform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAAPUNTESFORM_H
#define UI_LISTAAPUNTESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ListaApuntesForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTableWidget *tblApuntes;

    void setupUi(QDialog *ListaApuntesForm)
    {
        if (ListaApuntesForm->objectName().isEmpty())
            ListaApuntesForm->setObjectName(QString::fromUtf8("ListaApuntesForm"));
        ListaApuntesForm->resize(400, 300);
        buttonBox = new QDialogButtonBox(ListaApuntesForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ListaApuntesForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 161, 17));
        tblApuntes = new QTableWidget(ListaApuntesForm);
        tblApuntes->setObjectName(QString::fromUtf8("tblApuntes"));
        tblApuntes->setGeometry(QRect(120, 30, 256, 192));

        retranslateUi(ListaApuntesForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), ListaApuntesForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ListaApuntesForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(ListaApuntesForm);
    } // setupUi

    void retranslateUi(QDialog *ListaApuntesForm)
    {
        ListaApuntesForm->setWindowTitle(QCoreApplication::translate("ListaApuntesForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ListaApuntesForm", "Lista de APuntes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListaApuntesForm: public Ui_ListaApuntesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAAPUNTESFORM_H
