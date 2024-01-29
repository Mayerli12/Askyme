#ifndef APUNTEFORM_H
#define APUNTEFORM_H

#include <QWidget>
#include <QDebug>
#include <QInputDialog>
#include <QAbstractButton>
#include <QMessageBox>

#include <asignatura.h>
#include <listform.h>

namespace Ui {
class ApunteForm;
}

class ApunteForm : public QWidget
{
    Q_OBJECT

public:
    explicit ApunteForm(QWidget *parent = nullptr);
    ~ApunteForm();

    QList<Asignatura *> &asignaturas();
    void setAsignaturas(QList<Asignatura *> &newAsignaturas);
    void cargarAsignaturas();

signals:
    void apunteTomado(Apunte *apunte);
    void nuevaAsignaturaCreada(Asignatura *nuevaAsignatura);

private slots:
    void on_btnAgregarAsignatura_released();

    void on_btnRefAsig_clicked();

    void on_cmbAsignaturas_currentIndexChanged(int index);

    void on_btnAgregarTema_released();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();



private:
    Ui::ApunteForm *ui;
    QList<Asignatura*> *m_asignaturas;
    void cargarTemas(int indice);
};

#endif // APUNTEFORM_H
