/****************************************************************************
** Meta object code from reading C++ file 'dnsupdater.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/net/dnsupdater.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dnsupdater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Net__DNSUpdater_t {
    QByteArrayData data[12];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Net__DNSUpdater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Net__DNSUpdater_t qt_meta_stringdata_Net__DNSUpdater = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Net::DNSUpdater"
QT_MOC_LITERAL(1, 16, 17), // "updateCredentials"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "checkPublicIP"
QT_MOC_LITERAL(4, 49, 17), // "ipRequestFinished"
QT_MOC_LITERAL(5, 67, 3), // "url"
QT_MOC_LITERAL(6, 71, 4), // "data"
QT_MOC_LITERAL(7, 76, 15), // "ipRequestFailed"
QT_MOC_LITERAL(8, 92, 5), // "error"
QT_MOC_LITERAL(9, 98, 16), // "updateDNSService"
QT_MOC_LITERAL(10, 115, 16), // "ipUpdateFinished"
QT_MOC_LITERAL(11, 132, 14) // "ipUpdateFailed"

    },
    "Net::DNSUpdater\0updateCredentials\0\0"
    "checkPublicIP\0ipRequestFinished\0url\0"
    "data\0ipRequestFailed\0error\0updateDNSService\0"
    "ipUpdateFinished\0ipUpdateFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Net__DNSUpdater[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    2,   51,    2, 0x08 /* Private */,
       7,    2,   56,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    2,   62,    2, 0x08 /* Private */,
      11,    2,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    8,

       0        // eod
};

void Net::DNSUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DNSUpdater *_t = static_cast<DNSUpdater *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCredentials(); break;
        case 1: _t->checkPublicIP(); break;
        case 2: _t->ipRequestFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->ipRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->updateDNSService(); break;
        case 5: _t->ipUpdateFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->ipUpdateFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Net::DNSUpdater::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Net__DNSUpdater.data,
      qt_meta_data_Net__DNSUpdater,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Net::DNSUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Net::DNSUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Net__DNSUpdater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Net::DNSUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
