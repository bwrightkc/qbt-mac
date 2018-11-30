/****************************************************************************
** Meta object code from reading C++ file 'rss_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/rss/rss_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rss_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RSS__Item_t {
    QByteArrayData data[12];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RSS__Item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RSS__Item_t qt_meta_stringdata_RSS__Item = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RSS::Item"
QT_MOC_LITERAL(1, 10, 11), // "pathChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "Item*"
QT_MOC_LITERAL(4, 29, 4), // "item"
QT_MOC_LITERAL(5, 34, 18), // "unreadCountChanged"
QT_MOC_LITERAL(6, 53, 18), // "aboutToBeDestroyed"
QT_MOC_LITERAL(7, 72, 10), // "newArticle"
QT_MOC_LITERAL(8, 83, 8), // "Article*"
QT_MOC_LITERAL(9, 92, 7), // "article"
QT_MOC_LITERAL(10, 100, 11), // "articleRead"
QT_MOC_LITERAL(11, 112, 23) // "articleAboutToBeRemoved"

    },
    "RSS::Item\0pathChanged\0\0Item*\0item\0"
    "unreadCountChanged\0aboutToBeDestroyed\0"
    "newArticle\0Article*\0article\0articleRead\0"
    "articleAboutToBeRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RSS__Item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       1,    0,   62,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   63,    2, 0x06 /* Public */,
       5,    0,   66,    2, 0x26 /* Public | MethodCloned */,
       6,    1,   67,    2, 0x06 /* Public */,
       6,    0,   70,    2, 0x26 /* Public | MethodCloned */,
       7,    1,   71,    2, 0x06 /* Public */,
      10,    1,   74,    2, 0x06 /* Public */,
      11,    1,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void RSS::Item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Item *_t = static_cast<Item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< Item*(*)>(_a[1]))); break;
        case 1: _t->pathChanged(); break;
        case 2: _t->unreadCountChanged((*reinterpret_cast< Item*(*)>(_a[1]))); break;
        case 3: _t->unreadCountChanged(); break;
        case 4: _t->aboutToBeDestroyed((*reinterpret_cast< Item*(*)>(_a[1]))); break;
        case 5: _t->aboutToBeDestroyed(); break;
        case 6: _t->newArticle((*reinterpret_cast< Article*(*)>(_a[1]))); break;
        case 7: _t->articleRead((*reinterpret_cast< Article*(*)>(_a[1]))); break;
        case 8: _t->articleAboutToBeRemoved((*reinterpret_cast< Article*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Item* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Item* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Item* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Item::*)(Item * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Item::*)(Item * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::unreadCountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Item::*)(Item * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::aboutToBeDestroyed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Item::*)(Article * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::newArticle)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Item::*)(Article * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::articleRead)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Item::*)(Article * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::articleAboutToBeRemoved)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RSS::Item::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RSS__Item.data,
      qt_meta_data_RSS__Item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RSS::Item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RSS::Item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RSS__Item.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RSS::Item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RSS::Item::pathChanged(Item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void RSS::Item::unreadCountChanged(Item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void RSS::Item::aboutToBeDestroyed(Item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 6
void RSS::Item::newArticle(Article * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RSS::Item::articleRead(Article * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RSS::Item::articleAboutToBeRemoved(Article * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
