/****************************************************************************
** Meta object code from reading C++ file 'trackersadditiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/properties/trackersadditiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackersadditiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackersAdditionDialog_t {
    QByteArrayData data[7];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackersAdditionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackersAdditionDialog_t qt_meta_stringdata_TrackersAdditionDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TrackersAdditionDialog"
QT_MOC_LITERAL(1, 23, 29), // "on_uTorrentListButton_clicked"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 17), // "parseUTorrentList"
QT_MOC_LITERAL(4, 72, 4), // "data"
QT_MOC_LITERAL(5, 77, 15), // "getTrackerError"
QT_MOC_LITERAL(6, 93, 5) // "error"

    },
    "TrackersAdditionDialog\0"
    "on_uTorrentListButton_clicked\0\0"
    "parseUTorrentList\0data\0getTrackerError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackersAdditionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    2,   30,    2, 0x0a /* Public */,
       5,    2,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    2,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    6,

       0        // eod
};

void TrackersAdditionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrackersAdditionDialog *_t = static_cast<TrackersAdditionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_uTorrentListButton_clicked(); break;
        case 1: _t->parseUTorrentList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->getTrackerError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackersAdditionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TrackersAdditionDialog.data,
      qt_meta_data_TrackersAdditionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TrackersAdditionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackersAdditionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackersAdditionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TrackersAdditionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
