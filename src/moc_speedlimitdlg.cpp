/****************************************************************************
** Meta object code from reading C++ file 'speedlimitdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/speedlimitdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'speedlimitdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpeedLimitDialog_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedLimitDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedLimitDialog_t qt_meta_stringdata_SpeedLimitDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SpeedLimitDialog"
QT_MOC_LITERAL(1, 17, 15), // "updateSpinValue"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "val"
QT_MOC_LITERAL(4, 38, 17), // "updateSliderValue"
QT_MOC_LITERAL(5, 56, 13), // "getSpeedLimit"
QT_MOC_LITERAL(6, 70, 11), // "setupDialog"
QT_MOC_LITERAL(7, 82, 10) // "max_slider"

    },
    "SpeedLimitDialog\0updateSpinValue\0\0val\0"
    "updateSliderValue\0getSpeedLimit\0"
    "setupDialog\0max_slider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedLimitDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x09 /* Protected */,
       4,    1,   37,    2, 0x09 /* Protected */,
       5,    0,   40,    2, 0x09 /* Protected */,
       6,    2,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Long,
    QMetaType::Void, QMetaType::Long, QMetaType::Long,    7,    3,

       0        // eod
};

void SpeedLimitDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpeedLimitDialog *_t = static_cast<SpeedLimitDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSpinValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateSliderValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { long _r = _t->getSpeedLimit();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setupDialog((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SpeedLimitDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SpeedLimitDialog.data,
      qt_meta_data_SpeedLimitDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpeedLimitDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedLimitDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedLimitDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SpeedLimitDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE