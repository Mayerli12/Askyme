#ifndef RESULTADOSFORM_H
#define RESULTADOSFORM_H

#include <QDialog>

#include <cuestionario.h>

namespace Ui {
class ResultadosForm;
}

class ResultadosForm : public QDialog
{
    Q_OBJECT

public:
    explicit ResultadosForm(QDialog *parent = nullptr);
    ~ResultadosForm();
    void setDatos(Cuestionario *cuestionario);

private:
    Ui::ResultadosForm *ui;

    Cuestionario *m_cuestionario;

    void cargarDatos();
};

#endif // RESULTADOSFORM_H
