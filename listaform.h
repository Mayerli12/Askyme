#ifndef LISTAFORM_H
#define LISTAFORM_H

#include <QDialog>
#include <QTableWidget>
#include <QWidget>

#include <asignatura.h>

namespace Ui {
class ListaForm;
}

class ListaForm : public QWidget
{
    Q_OBJECT

public:
    explicit ListaForm(QWidget *parent = nullptr);
    void setAsignaturas(QList<Asignatura *> *asignaturas);
    void cargarAsignaturas();
    void cargarInfo(QString asignatura);
    void limpiar();
    ~ListaForm();

private slots:
    void cargarTemas();

private:
    Ui::ListaForm *ui;
    QList<Asignatura *> *m_asignaturas;
};
#endif
