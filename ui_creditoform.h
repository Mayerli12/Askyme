/********************************************************************************
** Form generated from reading UI file 'creditoform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOFORM_H
#define UI_CREDITOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditoForm
{
public:
    QLabel *label;

    void setupUi(QWidget *CreditoForm)
    {
        if (CreditoForm->objectName().isEmpty())
            CreditoForm->setObjectName(QString::fromUtf8("CreditoForm"));
        CreditoForm->resize(400, 300);
        label = new QLabel(CreditoForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 61, 31));

        retranslateUi(CreditoForm);

        QMetaObject::connectSlotsByName(CreditoForm);
    } // setupUi

    void retranslateUi(QWidget *CreditoForm)
    {
        CreditoForm->setWindowTitle(QCoreApplication::translate("CreditoForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("CreditoForm", "Creditos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditoForm: public Ui_CreditoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOFORM_H
