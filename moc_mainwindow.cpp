/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_btnAstroid_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_btnCycloid_clicked"
QT_MOC_LITERAL(4, 56, 21), // "on_btnHuygens_clicked"
QT_MOC_LITERAL(5, 78, 18), // "on_btnHypo_clicked"
QT_MOC_LITERAL(6, 97, 25), // "on_btnFutureCurve_clicked"
QT_MOC_LITERAL(7, 123, 18), // "on_btnLine_clicked"
QT_MOC_LITERAL(8, 142, 25), // "on_spinScale_valueChanged"
QT_MOC_LITERAL(9, 168, 4), // "arg1"
QT_MOC_LITERAL(10, 173, 28), // "on_spinInterval_valueChanged"
QT_MOC_LITERAL(11, 202, 25), // "on_spinCount_valueChanged"
QT_MOC_LITERAL(12, 228, 29), // "on_btnBackgroundColor_clicked"
QT_MOC_LITERAL(13, 258, 23), // "on_btnLineColor_clicked"
QT_MOC_LITERAL(14, 282, 37), // "on_cboCurveSelect_currentInde..."
QT_MOC_LITERAL(15, 320, 5) // "index"

    },
    "MainWindow\0on_btnAstroid_clicked\0\0"
    "on_btnCycloid_clicked\0on_btnHuygens_clicked\0"
    "on_btnHypo_clicked\0on_btnFutureCurve_clicked\0"
    "on_btnLine_clicked\0on_spinScale_valueChanged\0"
    "arg1\0on_spinInterval_valueChanged\0"
    "on_spinCount_valueChanged\0"
    "on_btnBackgroundColor_clicked\0"
    "on_btnLineColor_clicked\0"
    "on_cboCurveSelect_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      10,    1,   83,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAstroid_clicked(); break;
        case 1: _t->on_btnCycloid_clicked(); break;
        case 2: _t->on_btnHuygens_clicked(); break;
        case 3: _t->on_btnHypo_clicked(); break;
        case 4: _t->on_btnFutureCurve_clicked(); break;
        case 5: _t->on_btnLine_clicked(); break;
        case 6: _t->on_spinScale_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_spinInterval_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_spinCount_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_btnBackgroundColor_clicked(); break;
        case 10: _t->on_btnLineColor_clicked(); break;
        case 11: _t->on_cboCurveSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE