/****************************************************************************
** Meta object code from reading C++ file 'trackerlogindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/trackerlogindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackerlogindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackerLoginDialog_t {
    QByteArrayData data[7];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackerLoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackerLoginDialog_t qt_meta_stringdata_TrackerLoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TrackerLoginDialog"
QT_MOC_LITERAL(1, 19, 21), // "trackerLoginCancelled"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 41), // "QPair<BitTorrent::TorrentHand..."
QT_MOC_LITERAL(4, 84, 7), // "tracker"
QT_MOC_LITERAL(5, 92, 18), // "loginButtonClicked"
QT_MOC_LITERAL(6, 111, 19) // "cancelButtonClicked"

    },
    "TrackerLoginDialog\0trackerLoginCancelled\0"
    "\0QPair<BitTorrent::TorrentHandle*,QString>\0"
    "tracker\0loginButtonClicked\0"
    "cancelButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackerLoginDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrackerLoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrackerLoginDialog *_t = static_cast<TrackerLoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trackerLoginCancelled((*reinterpret_cast< QPair<BitTorrent::TorrentHandle*,QString>(*)>(_a[1]))); break;
        case 1: _t->loginButtonClicked(); break;
        case 2: _t->cancelButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackerLoginDialog::*)(QPair<BitTorrent::TorrentHandle*,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackerLoginDialog::trackerLoginCancelled)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackerLoginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TrackerLoginDialog.data,
      qt_meta_data_TrackerLoginDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TrackerLoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackerLoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackerLoginDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TrackerLoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void TrackerLoginDialog::trackerLoginCancelled(QPair<BitTorrent::TorrentHandle*,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
