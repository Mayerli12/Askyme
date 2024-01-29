#include "listaform.h"
#include "ui_listaform.h"

ListaForm::ListaForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListaForm)
    , m_asignaturas(nullptr)
{
    ui->setupUi(this);
    connect(ui->cmbAsignaturas,
            SIGNAL(currentIndexChanged(const QString &)),
            this,
            SLOT(cargarTemas()));
    ui->tblTermino->setColumnCount(1);
    ui->tblConcepto->setColumnCount(1);
    QStringList cabecera, cabecera2;
    cabecera << "Temas";
    ui->tblTermino->setHorizontalHeaderLabels(cabecera);
    cabecera2 << "Conceptos";
    ui->tblTermino->setHorizontalHeaderLabels(cabecera2);
    cargarAsignaturas();
}

ListaForm::~ListaForm()
{
    delete ui;
}

void ListaForm::cargarTemas()
{
    ui->tblTermino->rowCount();

    QString nombreAsignatura = ui->cmbAsignaturas->currentText();
    cargarInfo(nombreAsignatura);

    if (m_asignaturas) {
        Asignatura *asignaturaSeleccionada = nullptr;
        foreach (Asignatura *a, *m_asignaturas) {
            if (a->nombre() == nombreAsignatura) {
                asignaturaSeleccionada = a;
                break;
            }
        }

        if (asignaturaSeleccionada) {
            QList<Tema *> temas = asignaturaSeleccionada->temas();

            int fila = 0;
            foreach (Tema *t, temas) {
                ui->tblTermino->insertRow(fila);
                ui->tblTermino->setItem(fila, 0, new QTableWidgetItem(t->nombre()));
                fila++;
            }
        }
    }

    ui->tblConcepto->clearContents();
    ui->tblConcepto->setRowCount(0);
}

void ListaForm::setAsignaturas(QList<Asignatura *> *asignaturas)
{
    m_asignaturas = asignaturas;
}

void ListaForm::cargarAsignaturas()
{
    ui->cmbAsignaturas->clear();

    if (m_asignaturas) {
        foreach (Asignatura *a, *m_asignaturas) {
            ui->cmbAsignaturas->addItem(a->nombre());
        }
    }
}

void ListaForm::cargarInfo(QString nombreAsignatura)
{
    limpiar();
}

void ListaForm::limpiar()
{
    ui->tblTermino->clearContents();
    ui->tblTermino->setRowCount(0);

    ui->tblConcepto->clearContents();
    ui->tblConcepto->setRowCount(0);
    ui->tblConcepto->clear();
}
