/****************************************************************************
** Meta object code from reading C++ file 'apunteform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "apunteform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apunteform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApunteForm_t {
    QByteArrayData data[15];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApunteForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApunteForm_t qt_meta_stringdata_ApunteForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ApunteForm"
QT_MOC_LITERAL(1, 11, 12), // "apunteTomado"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "Apunte*"
QT_MOC_LITERAL(4, 33, 6), // "apunte"
QT_MOC_LITERAL(5, 40, 21), // "nuevaAsignaturaCreada"
QT_MOC_LITERAL(6, 62, 11), // "Asignatura*"
QT_MOC_LITERAL(7, 74, 15), // "nuevaAsignatura"
QT_MOC_LITERAL(8, 90, 32), // "on_btnAgregarAsignatura_released"
QT_MOC_LITERAL(9, 123, 21), // "on_btnRefAsig_clicked"
QT_MOC_LITERAL(10, 145, 37), // "on_cmbAsignaturas_currentInde..."
QT_MOC_LITERAL(11, 183, 5), // "index"
QT_MOC_LITERAL(12, 189, 26), // "on_btnAgregarTema_released"
QT_MOC_LITERAL(13, 216, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(14, 238, 21) // "on_buttonBox_rejected"

    },
    "ApunteForm\0apunteTomado\0\0Apunte*\0"
    "apunte\0nuevaAsignaturaCreada\0Asignatura*\0"
    "nuevaAsignatura\0on_btnAgregarAsignatura_released\0"
    "on_btnRefAsig_clicked\0"
    "on_cmbAsignaturas_currentIndexChanged\0"
    "index\0on_btnAgregarTema_released\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApunteForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,
      13,    0,   66,    2, 0x08 /* Private */,
      14,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ApunteForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApunteForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->apunteTomado((*reinterpret_cast< Apunte*(*)>(_a[1]))); break;
        case 1: _t->nuevaAsignaturaCreada((*reinterpret_cast< Asignatura*(*)>(_a[1]))); break;
        case 2: _t->on_btnAgregarAsignatura_released(); break;
        case 3: _t->on_btnRefAsig_clicked(); break;
        case 4: _t->on_cmbAsignaturas_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_btnAgregarTema_released(); break;
        case 6: _t->on_buttonBox_accepted(); break;
        case 7: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApunteForm::*)(Apunte * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApunteForm::apunteTomado)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ApunteForm::*)(Asignatura * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApunteForm::nuevaAsignaturaCreada)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ApunteForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ApunteForm.data,
    qt_meta_data_ApunteForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApunteForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApunteForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApunteForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ApunteForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ApunteForm::apunteTomado(Apunte * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ApunteForm::nuevaAsignaturaCreada(Asignatura * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
