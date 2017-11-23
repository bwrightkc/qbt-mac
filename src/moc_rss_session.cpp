/****************************************************************************
** Meta object code from reading C++ file 'rss_session.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/rss/rss_session.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rss_session.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RSS__Session_t {
    QByteArrayData data[18];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RSS__Session_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RSS__Session_t qt_meta_stringdata_RSS__Session = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RSS::Session"
QT_MOC_LITERAL(1, 13, 22), // "processingStateChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "enabled"
QT_MOC_LITERAL(4, 45, 25), // "maxArticlesPerFeedChanged"
QT_MOC_LITERAL(5, 71, 1), // "n"
QT_MOC_LITERAL(6, 73, 9), // "itemAdded"
QT_MOC_LITERAL(7, 83, 5), // "Item*"
QT_MOC_LITERAL(8, 89, 4), // "item"
QT_MOC_LITERAL(9, 94, 15), // "itemPathChanged"
QT_MOC_LITERAL(10, 110, 20), // "itemAboutToBeRemoved"
QT_MOC_LITERAL(11, 131, 14), // "feedIconLoaded"
QT_MOC_LITERAL(12, 146, 5), // "Feed*"
QT_MOC_LITERAL(13, 152, 4), // "feed"
QT_MOC_LITERAL(14, 157, 16), // "feedStateChanged"
QT_MOC_LITERAL(15, 174, 7), // "refresh"
QT_MOC_LITERAL(16, 182, 28), // "handleItemAboutToBeDestroyed"
QT_MOC_LITERAL(17, 211, 22) // "handleFeedTitleChanged"

    },
    "RSS::Session\0processingStateChanged\0"
    "\0enabled\0maxArticlesPerFeedChanged\0n\0"
    "itemAdded\0Item*\0item\0itemPathChanged\0"
    "itemAboutToBeRemoved\0feedIconLoaded\0"
    "Feed*\0feed\0feedStateChanged\0refresh\0"
    "handleItemAboutToBeDestroyed\0"
    "handleFeedTitleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RSS__Session[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      11,    1,   79,    2, 0x06 /* Public */,
      14,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   85,    2, 0x0a /* Public */,
      16,    1,   86,    2, 0x08 /* Private */,
      17,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void RSS::Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Session *_t = static_cast<Session *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processingStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->maxArticlesPerFeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->itemAdded((*reinterpret_cast< Item*(*)>(_a[1]))); break;
        case 3: _t->itemPathChanged((*reinterpret_cast< Item*(*)>(_a[1]))); break;
        case 4: _t->itemAboutToBeRemoved((*reinterpret_cast< Item*(*)>(_a[1]))); break;
        case 5: _t->feedIconLoaded((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        case 6: _t->feedStateChanged((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        case 7: _t->refresh(); break;
        case 8: _t->handleItemAboutToBeDestroyed((*reinterpret_cast< Item*(*)>(_a[1]))); break;
        case 9: _t->handleFeedTitleChanged((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Session::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::processingStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Session::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::maxArticlesPerFeedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Session::*_t)(Item * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::itemAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Session::*_t)(Item * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::itemPathChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Session::*_t)(Item * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::itemAboutToBeRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Session::*_t)(Feed * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::feedIconLoaded)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Session::*_t)(Feed * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::feedStateChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject RSS::Session::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RSS__Session.data,
      qt_meta_data_RSS__Session,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RSS::Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RSS::Session::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RSS__Session.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RSS::Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void RSS::Session::processingStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RSS::Session::maxArticlesPerFeedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RSS::Session::itemAdded(Item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RSS::Session::itemPathChanged(Item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RSS::Session::itemAboutToBeRemoved(Item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RSS::Session::feedIconLoaded(Feed * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RSS::Session::feedStateChanged(Feed * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
