/****************************************************************************
** Meta object code from reading C++ file 'askme.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "askme.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'askme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Askme_t {
    QByteArrayData data[16];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Askme_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Askme_t qt_meta_stringdata_Askme = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Askme"
QT_MOC_LITERAL(1, 6, 15), // "on_apunteTomado"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "Apunte*"
QT_MOC_LITERAL(4, 31, 6), // "apunte"
QT_MOC_LITERAL(5, 38, 21), // "on_cuestionarioCreado"
QT_MOC_LITERAL(6, 60, 13), // "Cuestionario*"
QT_MOC_LITERAL(7, 74, 12), // "cuestionario"
QT_MOC_LITERAL(8, 87, 23), // "on_preguntasContestadas"
QT_MOC_LITERAL(9, 111, 24), // "on_actionNuevo_triggered"
QT_MOC_LITERAL(10, 136, 26), // "on_actionGenerar_triggered"
QT_MOC_LITERAL(11, 163, 24), // "on_actionLista_triggered"
QT_MOC_LITERAL(12, 188, 24), // "on_actionSalir_triggered"
QT_MOC_LITERAL(13, 213, 24), // "on_nuevaAsignaturaCreada"
QT_MOC_LITERAL(14, 238, 11), // "Asignatura*"
QT_MOC_LITERAL(15, 250, 10) // "asignatura"

    },
    "Askme\0on_apunteTomado\0\0Apunte*\0apunte\0"
    "on_cuestionarioCreado\0Cuestionario*\0"
    "cuestionario\0on_preguntasContestadas\0"
    "on_actionNuevo_triggered\0"
    "on_actionGenerar_triggered\0"
    "on_actionLista_triggered\0"
    "on_actionSalir_triggered\0"
    "on_nuevaAsignaturaCreada\0Asignatura*\0"
    "asignatura"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Askme[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void Askme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Askme *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_apunteTomado((*reinterpret_cast< Apunte*(*)>(_a[1]))); break;
        case 1: _t->on_cuestionarioCreado((*reinterpret_cast< Cuestionario*(*)>(_a[1]))); break;
        case 2: _t->on_preguntasContestadas((*reinterpret_cast< Cuestionario*(*)>(_a[1]))); break;
        case 3: _t->on_actionNuevo_triggered(); break;
        case 4: _t->on_actionGenerar_triggered(); break;
        case 5: _t->on_actionLista_triggered(); break;
        case 6: _t->on_actionSalir_triggered(); break;
        case 7: _t->on_nuevaAsignaturaCreada((*reinterpret_cast< Asignatura*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Askme::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Askme.data,
    qt_meta_data_Askme,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Askme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Askme::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Askme.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Askme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
