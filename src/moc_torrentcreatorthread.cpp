/****************************************************************************
** Meta object code from reading C++ file 'torrentcreatorthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/bittorrent/torrentcreatorthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'torrentcreatorthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BitTorrent__TorrentCreatorThread_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitTorrent__TorrentCreatorThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitTorrent__TorrentCreatorThread_t qt_meta_stringdata_BitTorrent__TorrentCreatorThread = {
    {
QT_MOC_LITERAL(0, 0, 32), // "BitTorrent::TorrentCreatorThread"
QT_MOC_LITERAL(1, 33, 15), // "creationFailure"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 3), // "msg"
QT_MOC_LITERAL(4, 54, 15), // "creationSuccess"
QT_MOC_LITERAL(5, 70, 4), // "path"
QT_MOC_LITERAL(6, 75, 10), // "branchPath"
QT_MOC_LITERAL(7, 86, 14), // "updateProgress"
QT_MOC_LITERAL(8, 101, 8) // "progress"

    },
    "BitTorrent::TorrentCreatorThread\0"
    "creationFailure\0\0msg\0creationSuccess\0"
    "path\0branchPath\0updateProgress\0progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitTorrent__TorrentCreatorThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void BitTorrent::TorrentCreatorThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TorrentCreatorThread *_t = static_cast<TorrentCreatorThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->creationFailure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->creationSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TorrentCreatorThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentCreatorThread::creationFailure)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TorrentCreatorThread::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentCreatorThread::creationSuccess)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TorrentCreatorThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentCreatorThread::updateProgress)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BitTorrent::TorrentCreatorThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_BitTorrent__TorrentCreatorThread.data,
      qt_meta_data_BitTorrent__TorrentCreatorThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BitTorrent::TorrentCreatorThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitTorrent::TorrentCreatorThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BitTorrent__TorrentCreatorThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int BitTorrent::TorrentCreatorThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void BitTorrent::TorrentCreatorThread::creationFailure(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BitTorrent::TorrentCreatorThread::creationSuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BitTorrent::TorrentCreatorThread::updateProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
