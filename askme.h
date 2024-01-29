#ifndef ASKME_H
#define ASKME_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QDebug>
#include <QWidget>
#include <QList>
#include <QDesktopServices>
#include <QListWidgetItem>

#include <creditsform.h>

#include "apunteform.h"
#include "cuestionarioform.h"
#include "preguntaform.h"
#include "resultadoform.h"
#include "listaform.h"

#include "asignatura.h"
#include "tema.h"
#include "apunte.h"
#include "contribuidores.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Askme; }
QT_END_NAMESPACE

class Askme : public QMainWindow
{
    Q_OBJECT

public:
    Askme(QWidget *parent = nullptr);
    ~Askme();



public slots:
    void on_apunteTomado(Apunte *apunte);
    void on_cuestionarioCreado(Cuestionario *cuestionario);
    void on_cuestionarioFinalizado(Cuestionario *cuestionario);

private slots:
    void on_actionNuevo_triggered();

    void on_actionGenerar_triggered();

    void on_actionSalir_triggered();

    void on_actionLista_triggered();

    void on_actionCreditos_triggered();

private:
    Ui::Askme *ui;
    void cargarSubVentana(QWidget *ventana);
    void cargarDatos();
    void guardarDatos();
    void datosPrueba();

    QList<Asignatura*> m_asignaturas;
    QString m_path;
    QString m_archivo;
    bool m_normal = true;
    QList<Contribuidores*> contribuidores;
    QList<Contribuidores*> contribuidores2;

};
#endif // ASKME_H
