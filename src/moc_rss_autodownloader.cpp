/****************************************************************************
** Meta object code from reading C++ file 'rss_autodownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/rss/rss_autodownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rss_autodownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RSS__AutoDownloader_t {
    QByteArrayData data[17];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RSS__AutoDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RSS__AutoDownloader_t qt_meta_stringdata_RSS__AutoDownloader = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RSS::AutoDownloader"
QT_MOC_LITERAL(1, 20, 22), // "processingStateChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "enabled"
QT_MOC_LITERAL(4, 52, 9), // "ruleAdded"
QT_MOC_LITERAL(5, 62, 8), // "ruleName"
QT_MOC_LITERAL(6, 71, 11), // "ruleChanged"
QT_MOC_LITERAL(7, 83, 11), // "ruleRenamed"
QT_MOC_LITERAL(8, 95, 11), // "oldRuleName"
QT_MOC_LITERAL(9, 107, 20), // "ruleAboutToBeRemoved"
QT_MOC_LITERAL(10, 128, 7), // "process"
QT_MOC_LITERAL(11, 136, 29), // "handleTorrentDownloadFinished"
QT_MOC_LITERAL(12, 166, 3), // "url"
QT_MOC_LITERAL(13, 170, 27), // "handleTorrentDownloadFailed"
QT_MOC_LITERAL(14, 198, 16), // "handleNewArticle"
QT_MOC_LITERAL(15, 215, 8), // "Article*"
QT_MOC_LITERAL(16, 224, 7) // "article"

    },
    "RSS::AutoDownloader\0processingStateChanged\0"
    "\0enabled\0ruleAdded\0ruleName\0ruleChanged\0"
    "ruleRenamed\0oldRuleName\0ruleAboutToBeRemoved\0"
    "process\0handleTorrentDownloadFinished\0"
    "url\0handleTorrentDownloadFailed\0"
    "handleNewArticle\0Article*\0article"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RSS__AutoDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       7,    2,   68,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   76,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      13,    1,   80,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    8,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void RSS::AutoDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoDownloader *_t = static_cast<AutoDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processingStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ruleAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->ruleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->ruleRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->ruleAboutToBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->process(); break;
        case 6: _t->handleTorrentDownloadFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->handleTorrentDownloadFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->handleNewArticle((*reinterpret_cast< Article*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutoDownloader::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoDownloader::processingStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AutoDownloader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoDownloader::ruleAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AutoDownloader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoDownloader::ruleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AutoDownloader::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoDownloader::ruleRenamed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AutoDownloader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoDownloader::ruleAboutToBeRemoved)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject RSS::AutoDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RSS__AutoDownloader.data,
      qt_meta_data_RSS__AutoDownloader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RSS::AutoDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RSS::AutoDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RSS__AutoDownloader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RSS::AutoDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RSS::AutoDownloader::processingStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RSS::AutoDownloader::ruleAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RSS::AutoDownloader::ruleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RSS::AutoDownloader::ruleRenamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RSS::AutoDownloader::ruleAboutToBeRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
