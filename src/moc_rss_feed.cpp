/****************************************************************************
** Meta object code from reading C++ file 'rss_feed.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/rss/rss_feed.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rss_feed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RSS__Feed_t {
    QByteArrayData data[24];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RSS__Feed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RSS__Feed_t qt_meta_stringdata_RSS__Feed = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RSS::Feed"
QT_MOC_LITERAL(1, 10, 10), // "iconLoaded"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "Feed*"
QT_MOC_LITERAL(4, 28, 4), // "feed"
QT_MOC_LITERAL(5, 33, 12), // "titleChanged"
QT_MOC_LITERAL(6, 46, 12), // "stateChanged"
QT_MOC_LITERAL(7, 59, 37), // "handleSessionProcessingEnable..."
QT_MOC_LITERAL(8, 97, 7), // "enabled"
QT_MOC_LITERAL(9, 105, 31), // "handleMaxArticlesPerFeedChanged"
QT_MOC_LITERAL(10, 137, 1), // "n"
QT_MOC_LITERAL(11, 139, 26), // "handleIconDownloadFinished"
QT_MOC_LITERAL(12, 166, 3), // "url"
QT_MOC_LITERAL(13, 170, 8), // "filePath"
QT_MOC_LITERAL(14, 179, 22), // "handleDownloadFinished"
QT_MOC_LITERAL(15, 202, 4), // "data"
QT_MOC_LITERAL(16, 207, 20), // "handleDownloadFailed"
QT_MOC_LITERAL(17, 228, 5), // "error"
QT_MOC_LITERAL(18, 234, 21), // "handleParsingFinished"
QT_MOC_LITERAL(19, 256, 22), // "Private::ParsingResult"
QT_MOC_LITERAL(20, 279, 6), // "result"
QT_MOC_LITERAL(21, 286, 17), // "handleArticleRead"
QT_MOC_LITERAL(22, 304, 8), // "Article*"
QT_MOC_LITERAL(23, 313, 7) // "article"

    },
    "RSS::Feed\0iconLoaded\0\0Feed*\0feed\0"
    "titleChanged\0stateChanged\0"
    "handleSessionProcessingEnabledChanged\0"
    "enabled\0handleMaxArticlesPerFeedChanged\0"
    "n\0handleIconDownloadFinished\0url\0"
    "filePath\0handleDownloadFinished\0data\0"
    "handleDownloadFailed\0error\0"
    "handleParsingFinished\0Private::ParsingResult\0"
    "result\0handleArticleRead\0Article*\0"
    "article"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RSS__Feed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       1,    0,   82,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   83,    2, 0x06 /* Public */,
       5,    0,   86,    2, 0x26 /* Public | MethodCloned */,
       6,    1,   87,    2, 0x06 /* Public */,
       6,    0,   90,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   91,    2, 0x08 /* Private */,
       9,    1,   94,    2, 0x08 /* Private */,
      11,    2,   97,    2, 0x08 /* Private */,
      14,    2,  102,    2, 0x08 /* Private */,
      16,    2,  107,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      21,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   12,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void RSS::Feed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Feed *_t = static_cast<Feed *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconLoaded((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        case 1: _t->iconLoaded(); break;
        case 2: _t->titleChanged((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        case 3: _t->titleChanged(); break;
        case 4: _t->stateChanged((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        case 5: _t->stateChanged(); break;
        case 6: _t->handleSessionProcessingEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->handleMaxArticlesPerFeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->handleIconDownloadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->handleDownloadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 10: _t->handleDownloadFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->handleParsingFinished((*reinterpret_cast< const Private::ParsingResult(*)>(_a[1]))); break;
        case 12: _t->handleArticleRead((*reinterpret_cast< Article*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Feed* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Feed* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Feed* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Feed::*_t)(Feed * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Feed::iconLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Feed::*_t)(Feed * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Feed::titleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Feed::*_t)(Feed * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Feed::stateChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject RSS::Feed::staticMetaObject = {
    { &Item::staticMetaObject, qt_meta_stringdata_RSS__Feed.data,
      qt_meta_data_RSS__Feed,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RSS::Feed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RSS::Feed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RSS__Feed.stringdata0))
        return static_cast<void*>(this);
    return Item::qt_metacast(_clname);
}

int RSS::Feed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void RSS::Feed::iconLoaded(Feed * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void RSS::Feed::titleChanged(Feed * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void RSS::Feed::stateChanged(Feed * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
