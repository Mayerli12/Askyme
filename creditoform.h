#ifndef CREDITOFORM_H
#define CREDITOFORM_H

#include <QWidget>
#include <QList>
#include <QDesktopServices>
#include <QListWidget>

#include <contribuidores.h>

namespace Ui {
class CreditoForm;
}

class CreditoForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreditoForm(QWidget *parent = nullptr);
    ~CreditoForm();

    void agregarContribuidores(const Contribuidores &contribuidor);


private slots:

    void on_listC_itemClicked(QListWidgetItem *item);

private:
    Ui::CreditoForm *ui;
    QList<Contribuidores> contribuidores;


};

#endif
