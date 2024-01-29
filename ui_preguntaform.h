/********************************************************************************
** Form generated from reading UI file 'preguntaform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREGUNTAFORM_H
#define UI_PREGUNTAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreguntaForm
{
public:
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *lblTema;
    QLabel *label;
    QTextEdit *txtConcepto;
    QLabel *label_2;
    QComboBox *cmbTerminos;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *PreguntaForm)
    {
        if (PreguntaForm->objectName().isEmpty())
            PreguntaForm->setObjectName(QString::fromUtf8("PreguntaForm"));
        PreguntaForm->resize(260, 173);
        formLayout = new QFormLayout(PreguntaForm);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(PreguntaForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lblTema = new QLabel(PreguntaForm);
        lblTema->setObjectName(QString::fromUtf8("lblTema"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblTema);

        label = new QLabel(PreguntaForm);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        txtConcepto = new QTextEdit(PreguntaForm);
        txtConcepto->setObjectName(QString::fromUtf8("txtConcepto"));
        txtConcepto->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtConcepto);

        label_2 = new QLabel(PreguntaForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        cmbTerminos = new QComboBox(PreguntaForm);
        cmbTerminos->setObjectName(QString::fromUtf8("cmbTerminos"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cmbTerminos);

        buttonBox = new QDialogButtonBox(PreguntaForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonBox);


        retranslateUi(PreguntaForm);

        QMetaObject::connectSlotsByName(PreguntaForm);
    } // setupUi

    void retranslateUi(QWidget *PreguntaForm)
    {
        PreguntaForm->setWindowTitle(QCoreApplication::translate("PreguntaForm", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("PreguntaForm", "Tema:", nullptr));
        lblTema->setText(QCoreApplication::translate("PreguntaForm", "Desconocido", nullptr));
        label->setText(QCoreApplication::translate("PreguntaForm", "Concepto:", nullptr));
        label_2->setText(QCoreApplication::translate("PreguntaForm", "T\303\251rmino:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreguntaForm: public Ui_PreguntaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREGUNTAFORM_H
