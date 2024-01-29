#include "resultadoform.h"
#include "ui_resultadoform.h"

ResultadoForm::ResultadoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ResultadoForm)
{
    ui->setupUi(this);
}

ResultadoForm::~ResultadoForm()
{
    delete ui;
}

void ResultadoForm::setCuestionario(Cuestionario *newCuestionario)
{
    m_cuestionario = newCuestionario;

        cargarDatos();
}


void ResultadoForm::cargarDatos()
{
    float score = m_cuestionario->score();
    QString tema = m_cuestionario->nombreTema();

    QString porcentaje = QString::number(score, 'f', 2) + "%";

    ui->lblScore->setText(porcentaje);
    ui->lblTema->setText(tema);

    QList<Pregunta *> preguntas = m_cuestionario->preguntas();

    ui->tblResultados->setRowCount(preguntas.size());
    ui->tblResultados->setColumnCount(2);

    ui->tblResultados->setHorizontalHeaderLabels({"Término", "Contestada Correctamente"});

    // Llenar la tabla con los datos de las preguntas
    for (int i = 0; i < preguntas.size(); ++i)
    {
        QTableWidgetItem *terminoItem = new QTableWidgetItem(preguntas[i]->apunte()->termino());
        QTableWidgetItem *correctaItem = new QTableWidgetItem(preguntas[i]->correcta() ? "Correcto" : "Falso");

        ui->tblResultados->setItem(i, 0, terminoItem);
        ui->tblResultados->setItem(i, 1, correctaItem);
    }
}

void ResultadoForm::on_btnCerrar_released()
{
    this->parentWidget()->close();
}

