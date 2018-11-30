/****************************************************************************
** Meta object code from reading C++ file 'transfercontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "webui/api/transfercontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transfercontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransferController_t {
    QByteArrayData data[9];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransferController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransferController_t qt_meta_stringdata_TransferController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TransferController"
QT_MOC_LITERAL(1, 19, 10), // "infoAction"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "speedLimitsModeAction"
QT_MOC_LITERAL(4, 53, 27), // "toggleSpeedLimitsModeAction"
QT_MOC_LITERAL(5, 81, 17), // "uploadLimitAction"
QT_MOC_LITERAL(6, 99, 19), // "downloadLimitAction"
QT_MOC_LITERAL(7, 119, 20), // "setUploadLimitAction"
QT_MOC_LITERAL(8, 140, 22) // "setDownloadLimitAction"

    },
    "TransferController\0infoAction\0\0"
    "speedLimitsModeAction\0toggleSpeedLimitsModeAction\0"
    "uploadLimitAction\0downloadLimitAction\0"
    "setUploadLimitAction\0setDownloadLimitAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransferController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransferController *_t = static_cast<TransferController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoAction(); break;
        case 1: _t->speedLimitsModeAction(); break;
        case 2: _t->toggleSpeedLimitsModeAction(); break;
        case 3: _t->uploadLimitAction(); break;
        case 4: _t->downloadLimitAction(); break;
        case 5: _t->setUploadLimitAction(); break;
        case 6: _t->setDownloadLimitAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TransferController::staticMetaObject = {
    { &APIController::staticMetaObject, qt_meta_stringdata_TransferController.data,
      qt_meta_data_TransferController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransferController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransferController.stringdata0))
        return static_cast<void*>(this);
    return APIController::qt_metacast(_clname);
}

int TransferController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = APIController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
