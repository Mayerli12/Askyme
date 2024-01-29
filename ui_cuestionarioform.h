/********************************************************************************
** Form generated from reading UI file 'cuestionarioform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUESTIONARIOFORM_H
#define UI_CUESTIONARIOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CuestionarioForm
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cmbAsignaturas;
    QLabel *label_2;
    QComboBox *cmbTemas;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *CuestionarioForm)
    {
        if (CuestionarioForm->objectName().isEmpty())
            CuestionarioForm->setObjectName(QString::fromUtf8("CuestionarioForm"));
        CuestionarioForm->resize(268, 105);
        formLayout = new QFormLayout(CuestionarioForm);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(CuestionarioForm);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cmbAsignaturas = new QComboBox(CuestionarioForm);
        cmbAsignaturas->setObjectName(QString::fromUtf8("cmbAsignaturas"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cmbAsignaturas);

        label_2 = new QLabel(CuestionarioForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cmbTemas = new QComboBox(CuestionarioForm);
        cmbTemas->setObjectName(QString::fromUtf8("cmbTemas"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cmbTemas);

        buttonBox = new QDialogButtonBox(CuestionarioForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonBox);


        retranslateUi(CuestionarioForm);

        QMetaObject::connectSlotsByName(CuestionarioForm);
    } // setupUi

    void retranslateUi(QWidget *CuestionarioForm)
    {
        CuestionarioForm->setWindowTitle(QCoreApplication::translate("CuestionarioForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("CuestionarioForm", "Asignatura:", nullptr));
        label_2->setText(QCoreApplication::translate("CuestionarioForm", "Tema:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CuestionarioForm: public Ui_CuestionarioForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUESTIONARIOFORM_H
