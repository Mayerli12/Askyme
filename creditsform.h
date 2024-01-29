#ifndef CREDITSFORM_H
#define CREDITSFORM_H

#include <QWidget>
#include <QList>
#include <QDesktopServices>
#include <QListWidgetItem>
#include <QUrl>

#include <contribuidores.h>

namespace Ui {
class CreditsForm;
}

class CreditsForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreditsForm(QWidget *parent = nullptr);
    ~CreditsForm();

    void agregarContribuidores(const Contribuidores &contribuidor);
    void agregarContribuidores2(const Contribuidores &contribuidor);
    const QString &getNombre() const;

private slots:
    void on_listCreditos_itemClicked(QListWidgetItem *item);



    //void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::CreditsForm *ui;
    QList<Contribuidores> contribuidores;
    QList<Contribuidores> contribuidores2;

};

#endif // CREDITOSFORM_H
