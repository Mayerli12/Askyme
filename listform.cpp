#include "listform.h"
#include "ui_listform.h"

ListForm::ListForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListForm),
    m_asignaturas(nullptr)
{
    ui->setupUi(this);
    connect(ui->cmbAsignaturas, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(cargarTemas()));
    connect(ui->tblTermino, SIGNAL(cellClicked(int, int)), this, SLOT(cargarTerminos(int, int)));
    ui->tblTermino->setColumnCount(1);
    ui->tblConcepto->setColumnCount(2);
    QStringList cabecera, cabecera2;
    cabecera << "Temas";
    ui->tblTermino->setHorizontalHeaderLabels(cabecera);
    cabecera2 << "Conceptos";
    ui->tblTermino->setHorizontalHeaderLabels(cabecera2);
    cargarAsignaturas();
    // Conectar la señal itemClicked de tblTermino al slot cargarConceptos

}

ListForm::~ListForm()
{
    delete ui;
}



void ListForm::cargarTemas()
{
    ui->tblTermino->rowCount();

    QString nombreAsignatura = ui->cmbAsignaturas->currentText();
    cargarInfo(nombreAsignatura);

   if (m_asignaturas)
    {
        Asignatura *asignaturaSeleccionada = nullptr;
        foreach (Asignatura *a, *m_asignaturas)
        {
            if (a->nombre() == nombreAsignatura)
            {
                asignaturaSeleccionada = a;
                break;
            }
        }

        if (asignaturaSeleccionada)
        {
            QList<Tema *> temas = asignaturaSeleccionada->temas();

            int fila = 0;
            foreach (Tema *t, temas)
            {
                ui->tblTermino->insertRow(fila);
                ui->tblTermino->setItem(fila, 0, new QTableWidgetItem(t->nombre()));
                fila++;
            }
        }
    }

    ui->tblConcepto->clearContents();
    ui->tblConcepto->setRowCount(0);
}

void ListForm::setAsignaturas(QList<Asignatura *> *asignaturas)
{
    m_asignaturas = asignaturas;
}

void ListForm::cargarAsignaturas()
{
    ui->cmbAsignaturas->clear();

    if (m_asignaturas)
    {
        foreach(Asignatura *a, *m_asignaturas)
        {
            ui->cmbAsignaturas->addItem(a->nombre());
        }
    }
}

void ListForm::cargarInfo(QString nombreAsignatura)
{
    limpiar();

}

void ListForm::cargarConceptos(int fila, int columna)
{
    ui->tblConcepto->clearContents();
    ui->tblConcepto->setRowCount(0);
    if (fila >= 0 && columna >= 0)
    {
        QString nombreAsignatura = ui->cmbAsignaturas->currentText();
        QString nombreTema = ui->tblTermino->item(fila, columna)->text();

        if (m_asignaturas)
        {
            Asignatura *asignaturaSeleccionada = nullptr;
            foreach (Asignatura *a, *m_asignaturas)
            {
                if (a->nombre() == nombreAsignatura)
                {
                    asignaturaSeleccionada = a;
                    break;
                }
            }

            if (asignaturaSeleccionada)
            {
                QList<Tema *> temas = asignaturaSeleccionada->temas();
                foreach (Tema *t, temas)
                {
                    if (t->nombre() == nombreTema)
                    {
                        QList<Apunte *> apuntes = t->apuntes();
                        int filaTerminos = 0;
                        foreach (Apunte *ap, apuntes)
                        {
                            ui->tblConcepto->insertRow(filaTerminos);
                            ui->tblConcepto->setItem(filaTerminos, 0, new QTableWidgetItem(ap->termino()));
                            filaTerminos++;
                        }
                        break;
                    }
                }
            }
        }
    }
}

void ListForm::limpiar()
{
    ui->tblTermino->clearContents();
    ui->tblTermino->setRowCount(0);

    ui->tblConcepto->clearContents();
    ui->tblConcepto->setRowCount(0);
    ui->tblConcepto->clear();
}

void ListForm::on_tblTermino_cellClicked(int row, int column)
{
    // Limpiar contenido de la tabla de Conceptos
    ui->tblConcepto->clearContents();
    ui->tblConcepto->setRowCount(0);

    // Obtener la asignatura y tema seleccionados
    QString nombreAsignatura = ui->cmbAsignaturas->currentText();
    QString nombreTema = ui->tblTermino->item(row, column)->text();

    // Buscar el tema en la lista de asignaturas
    if (m_asignaturas) {
        Asignatura *asignaturaSeleccionada = nullptr;
        foreach (Asignatura *a, *m_asignaturas) {
            if (a->nombre() == nombreAsignatura) {
                asignaturaSeleccionada = a;
                break;
            }
        }

        // Llenar la tabla de Conceptos
        if (asignaturaSeleccionada) {
            QList<Tema *> temas = asignaturaSeleccionada->temas();
            foreach (Tema *t, temas) {
                if (t->nombre() == nombreTema) {
                    QList<Apunte *> apuntes = t->apuntes();
                    int filaTerminos = 0;
                    foreach (Apunte *ap, apuntes) {
                        ui->tblConcepto->insertRow(filaTerminos);
                        ui->tblConcepto->setItem(filaTerminos, 0, new QTableWidgetItem(ap->termino()));
                        ui->tblConcepto->setItem(filaTerminos, 1, new QTableWidgetItem(ap->concepto()));
                        filaTerminos++;
                    }
                    break;
                }
            }
        }
    }
}


void ListForm::on_cmbAsignaturas_currentIndexChanged(int index)
{
    // Limpiar contenido de las tablas
    ui->tblTermino->clearContents();
    ui->tblTermino->setRowCount(0);
    ui->tblConcepto->clearContents();
    ui->tblConcepto->setRowCount(0);

    // Obtener la asignatura seleccionada
    Asignatura *a = m_asignaturas->at(index);

    // Llenar la tabla de Temas
    int fila = 0;
    foreach (Tema *t, a->temas()) {
        QString tema = t->nombre();
        foreach (Apunte *ap, t->apuntes()) {
            ui->tblTermino->insertRow(fila);
            ui->tblTermino->setItem(fila, 0, new QTableWidgetItem(tema));
            ui->tblConcepto->setColumnWidth(1, 400);
            ui->tblTermino->setColumnWidth(0, 200);
            ui->tblTermino->setItem(fila, 1, new QTableWidgetItem(ap->termino()));
            fila++;
        }
    }
}

