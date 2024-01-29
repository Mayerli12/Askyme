#ifndef RESULTADOFORM_H
#define RESULTADOFORM_H

#include <QWidget>
#include <QMessageBox>

#include <cuestionario.h>

namespace Ui {
class ResultadoForm;
}

class ResultadoForm : public QWidget
{
    Q_OBJECT

public:
    explicit ResultadoForm(QWidget *parent = nullptr);
    ~ResultadoForm();
    void setCuestionario(Cuestionario *newCuestionario);

private slots:
    void on_btnCerrar_released();

private:
    Ui::ResultadoForm *ui;

    Cuestionario *m_cuestionario;

    void cargarDatos();
};

#endif // RESULTADOFORM_H
