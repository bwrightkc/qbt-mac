/****************************************************************************
** Meta object code from reading C++ file 'trackerlogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/trackerlogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackerlogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_trackerLogin_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_trackerLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_trackerLogin_t qt_meta_stringdata_trackerLogin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "trackerLogin"
QT_MOC_LITERAL(1, 13, 21), // "trackerLoginCancelled"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 41), // "QPair<BitTorrent::TorrentHand..."
QT_MOC_LITERAL(4, 78, 7), // "tracker"
QT_MOC_LITERAL(5, 86, 18), // "loginButtonClicked"
QT_MOC_LITERAL(6, 105, 19) // "cancelButtonClicked"

    },
    "trackerLogin\0trackerLoginCancelled\0\0"
    "QPair<BitTorrent::TorrentHandle*,QString>\0"
    "tracker\0loginButtonClicked\0"
    "cancelButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_trackerLogin[] = {

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

void trackerLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        trackerLogin *_t = static_cast<trackerLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trackerLoginCancelled((*reinterpret_cast< QPair<BitTorrent::TorrentHandle*,QString>(*)>(_a[1]))); break;
        case 1: _t->loginButtonClicked(); break;
        case 2: _t->cancelButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (trackerLogin::*_t)(QPair<BitTorrent::TorrentHandle*,QString> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&trackerLogin::trackerLoginCancelled)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject trackerLogin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_trackerLogin.data,
      qt_meta_data_trackerLogin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *trackerLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *trackerLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_trackerLogin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int trackerLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void trackerLogin::trackerLoginCancelled(QPair<BitTorrent::TorrentHandle*,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
