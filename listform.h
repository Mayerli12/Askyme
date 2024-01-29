#ifndef LISTFORM_H
#define LISTFORM_H

#include <QWidget>
#include <QTableWidget>
#include <QDebug>

#include <asignatura.h>
#include <tema.h>


    namespace Ui {
    class ListForm;
    }

    class ListForm : public QWidget
    {
        Q_OBJECT

    public:
        explicit ListForm(QWidget *parent = nullptr);
        void setAsignaturas(QList<Asignatura *> *asignaturas);
        void cargarAsignaturas();
        void cargarInfo(QString asignatura);
        void cargarConceptos(int fila, int columna);
        void limpiar();
        ~ListForm();

    private:
        Ui::ListForm *ui;
        QList<Asignatura *> *m_asignaturas;


    private slots:
        void cargarTemas();



        void on_tblTermino_cellClicked(int row, int column);
        void on_cmbAsignaturas_currentIndexChanged(int index);
    };

#endif // LISTFORM_H

