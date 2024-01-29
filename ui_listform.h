/********************************************************************************
** Form generated from reading UI file 'listform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTFORM_H
#define UI_LISTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListForm
{
public:
    QLabel *label;
    QComboBox *cmbAsignaturas;
    QLabel *label_2;
    QTableWidget *tblTermino;
    QLabel *label_3;
    QTableWidget *tblConcepto;
    QDialogButtonBox *btnGuardar;

    void setupUi(QWidget *ListForm)
    {
        if (ListForm->objectName().isEmpty())
            ListForm->setObjectName(QString::fromUtf8("ListForm"));
        ListForm->resize(400, 362);
        label = new QLabel(ListForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 21));
        cmbAsignaturas = new QComboBox(ListForm);
        cmbAsignaturas->setObjectName(QString::fromUtf8("cmbAsignaturas"));
        cmbAsignaturas->setGeometry(QRect(120, 10, 251, 22));
        label_2 = new QLabel(ListForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 71, 21));
        tblTermino = new QTableWidget(ListForm);
        tblTermino->setObjectName(QString::fromUtf8("tblTermino"));
        tblTermino->setGeometry(QRect(120, 50, 256, 121));
        label_3 = new QLabel(ListForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 180, 61, 21));
        tblConcepto = new QTableWidget(ListForm);
        tblConcepto->setObjectName(QString::fromUtf8("tblConcepto"));
        tblConcepto->setGeometry(QRect(120, 180, 256, 131));
        btnGuardar = new QDialogButtonBox(ListForm);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(210, 320, 156, 24));
        btnGuardar->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ListForm);

        QMetaObject::connectSlotsByName(ListForm);
    } // setupUi

    void retranslateUi(QWidget *ListForm)
    {
        ListForm->setWindowTitle(QCoreApplication::translate("ListForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ListForm", "Asignatura", nullptr));
        label_2->setText(QCoreApplication::translate("ListForm", "Terminos", nullptr));
        label_3->setText(QCoreApplication::translate("ListForm", "Conceptos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListForm: public Ui_ListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTFORM_H
