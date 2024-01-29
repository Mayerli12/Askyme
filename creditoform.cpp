#include "creditoform.h"
#include "ui_creditoform.h"

CreditoForm::CreditoForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CreditoForm)
{
    ui->setupUi(this);
    Contribuidores c1("Ing. Rodrigo Tufiño", QUrl("https://github.com/rtufino"));
    Contribuidores c2("Mateo Espinosa", QUrl("https://github.com/EonSoulCout"));
    Contribuidores c3("David Ramos", QUrl("https://github.com/defaultdavr21"));
    Contribuidores c4("Joseph Uyana", QUrl("https://github.com/Hayai01"));
    Contribuidores c5("Fabian Izquierdo", QUrl("https://github.com/FLiamTech"));
    Contribuidores c6("Ariel Flores", QUrl("https://github.com/ArielFLores5"));
    Contribuidores c7("Luis Pillajo", QUrl("https://github.com/LuisCOD369"));
    Contribuidores c8("Mayerli Campuez", QUrl("https://github.com/Mayerli12"));

    agregarContribuidores(c1);
    agregarContribuidores(c2);

}

CreditoForm::~CreditoForm()
{
    delete ui;
}

void CreditoForm::agregarContribuidores(const Contribuidores &contribuidor)
{
    contribuidores.append(contribuidor);
    ui->label->addItem(contribuidor.getNombre());
}

void CreditoForm::on_listC_itemClicked(QListWidgetItem *item)
{
    // Obtener items
    int index = ui->->row(item);

    // Obtener el URL del contribuidor y abrir en el navegador
    if (index >= 0 && index < contribuidores.size())
    {
        QDesktopServices::openUrl(contribuidores[index].getUrl());
    }
}


