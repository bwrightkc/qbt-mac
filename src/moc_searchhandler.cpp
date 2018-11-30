/****************************************************************************
** Meta object code from reading C++ file 'searchhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/search/searchhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchHandler_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchHandler_t qt_meta_stringdata_SearchHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SearchHandler"
QT_MOC_LITERAL(1, 14, 14), // "searchFinished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "cancelled"
QT_MOC_LITERAL(4, 40, 12), // "searchFailed"
QT_MOC_LITERAL(5, 53, 16), // "newSearchResults"
QT_MOC_LITERAL(6, 70, 19), // "QList<SearchResult>"
QT_MOC_LITERAL(7, 90, 7) // "results"

    },
    "SearchHandler\0searchFinished\0\0cancelled\0"
    "searchFailed\0newSearchResults\0"
    "QList<SearchResult>\0results"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       1,    0,   37,    2, 0x26 /* Public | MethodCloned */,
       4,    0,   38,    2, 0x06 /* Public */,
       5,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SearchHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchHandler *_t = static_cast<SearchHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->searchFinished(); break;
        case 2: _t->searchFailed(); break;
        case 3: _t->newSearchResults((*reinterpret_cast< const QList<SearchResult>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchHandler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchHandler::searchFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchHandler::searchFailed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SearchHandler::*)(const QList<SearchResult> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchHandler::newSearchResults)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SearchHandler.data,
      qt_meta_data_SearchHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SearchHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SearchHandler::searchFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void SearchHandler::searchFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SearchHandler::newSearchResults(const QList<SearchResult> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
