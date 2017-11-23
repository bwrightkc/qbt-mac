/****************************************************************************
** Meta object code from reading C++ file 'searchengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/searchengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchEngine_t {
    QByteArrayData data[36];
    char stringdata0[534];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchEngine_t qt_meta_stringdata_SearchEngine = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchEngine"
QT_MOC_LITERAL(1, 13, 13), // "searchStarted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "searchFinished"
QT_MOC_LITERAL(4, 43, 9), // "cancelled"
QT_MOC_LITERAL(5, 53, 12), // "searchFailed"
QT_MOC_LITERAL(6, 66, 16), // "newSearchResults"
QT_MOC_LITERAL(7, 83, 19), // "QList<SearchResult>"
QT_MOC_LITERAL(8, 103, 7), // "results"
QT_MOC_LITERAL(9, 111, 13), // "pluginEnabled"
QT_MOC_LITERAL(10, 125, 4), // "name"
QT_MOC_LITERAL(11, 130, 7), // "enabled"
QT_MOC_LITERAL(12, 138, 15), // "pluginInstalled"
QT_MOC_LITERAL(13, 154, 24), // "pluginInstallationFailed"
QT_MOC_LITERAL(14, 179, 6), // "reason"
QT_MOC_LITERAL(15, 186, 17), // "pluginUninstalled"
QT_MOC_LITERAL(16, 204, 13), // "pluginUpdated"
QT_MOC_LITERAL(17, 218, 18), // "pluginUpdateFailed"
QT_MOC_LITERAL(18, 237, 23), // "checkForUpdatesFinished"
QT_MOC_LITERAL(19, 261, 28), // "QHash<QString,PluginVersion>"
QT_MOC_LITERAL(20, 290, 10), // "updateInfo"
QT_MOC_LITERAL(21, 301, 21), // "checkForUpdatesFailed"
QT_MOC_LITERAL(22, 323, 21), // "torrentFileDownloaded"
QT_MOC_LITERAL(23, 345, 4), // "path"
QT_MOC_LITERAL(24, 350, 9), // "onTimeout"
QT_MOC_LITERAL(25, 360, 16), // "readSearchOutput"
QT_MOC_LITERAL(26, 377, 15), // "processFinished"
QT_MOC_LITERAL(27, 393, 8), // "exitcode"
QT_MOC_LITERAL(28, 402, 21), // "versionInfoDownloaded"
QT_MOC_LITERAL(29, 424, 3), // "url"
QT_MOC_LITERAL(30, 428, 4), // "data"
QT_MOC_LITERAL(31, 433, 25), // "versionInfoDownloadFailed"
QT_MOC_LITERAL(32, 459, 16), // "pluginDownloaded"
QT_MOC_LITERAL(33, 476, 8), // "filePath"
QT_MOC_LITERAL(34, 485, 20), // "pluginDownloadFailed"
QT_MOC_LITERAL(35, 506, 27) // "torrentFileDownloadFinished"

    },
    "SearchEngine\0searchStarted\0\0searchFinished\0"
    "cancelled\0searchFailed\0newSearchResults\0"
    "QList<SearchResult>\0results\0pluginEnabled\0"
    "name\0enabled\0pluginInstalled\0"
    "pluginInstallationFailed\0reason\0"
    "pluginUninstalled\0pluginUpdated\0"
    "pluginUpdateFailed\0checkForUpdatesFinished\0"
    "QHash<QString,PluginVersion>\0updateInfo\0"
    "checkForUpdatesFailed\0torrentFileDownloaded\0"
    "path\0onTimeout\0readSearchOutput\0"
    "processFinished\0exitcode\0versionInfoDownloaded\0"
    "url\0data\0versionInfoDownloadFailed\0"
    "pluginDownloaded\0filePath\0"
    "pluginDownloadFailed\0torrentFileDownloadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    1,  120,    2, 0x06 /* Public */,
       5,    0,  123,    2, 0x06 /* Public */,
       6,    1,  124,    2, 0x06 /* Public */,
       9,    2,  127,    2, 0x06 /* Public */,
      12,    1,  132,    2, 0x06 /* Public */,
      13,    2,  135,    2, 0x06 /* Public */,
      15,    1,  140,    2, 0x06 /* Public */,
      16,    1,  143,    2, 0x06 /* Public */,
      17,    2,  146,    2, 0x06 /* Public */,
      18,    1,  151,    2, 0x06 /* Public */,
      21,    1,  154,    2, 0x06 /* Public */,
      22,    1,  157,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  160,    2, 0x08 /* Private */,
      25,    0,  161,    2, 0x08 /* Private */,
      26,    1,  162,    2, 0x08 /* Private */,
      28,    2,  165,    2, 0x08 /* Private */,
      31,    2,  170,    2, 0x08 /* Private */,
      32,    2,  175,    2, 0x08 /* Private */,
      34,    2,  180,    2, 0x08 /* Private */,
      35,    1,  185,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   11,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   14,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   14,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   23,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   29,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   29,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   29,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   29,   14,
    QMetaType::Void, QMetaType::Int,   27,

       0        // eod
};

void SearchEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchEngine *_t = static_cast<SearchEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchStarted(); break;
        case 1: _t->searchFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->searchFailed(); break;
        case 3: _t->newSearchResults((*reinterpret_cast< const QList<SearchResult>(*)>(_a[1]))); break;
        case 4: _t->pluginEnabled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->pluginInstalled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->pluginInstallationFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->pluginUninstalled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->pluginUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->pluginUpdateFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->checkForUpdatesFinished((*reinterpret_cast< const QHash<QString,PluginVersion>(*)>(_a[1]))); break;
        case 11: _t->checkForUpdatesFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->torrentFileDownloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->onTimeout(); break;
        case 14: _t->readSearchOutput(); break;
        case 15: _t->processFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->versionInfoDownloaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 17: _t->versionInfoDownloadFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->pluginDownloaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->pluginDownloadFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->torrentFileDownloadFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::searchStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::searchFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::searchFailed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QList<SearchResult> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::newSearchResults)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::pluginEnabled)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::pluginInstalled)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::pluginInstallationFailed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::pluginUninstalled)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::pluginUpdated)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::pluginUpdateFailed)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QHash<QString,PluginVersion> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::checkForUpdatesFinished)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::checkForUpdatesFailed)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (SearchEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEngine::torrentFileDownloaded)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject SearchEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SearchEngine.data,
      qt_meta_data_SearchEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SearchEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void SearchEngine::searchStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SearchEngine::searchFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchEngine::searchFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SearchEngine::newSearchResults(const QList<SearchResult> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SearchEngine::pluginEnabled(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SearchEngine::pluginInstalled(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SearchEngine::pluginInstallationFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SearchEngine::pluginUninstalled(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SearchEngine::pluginUpdated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SearchEngine::pluginUpdateFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SearchEngine::checkForUpdatesFinished(const QHash<QString,PluginVersion> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SearchEngine::checkForUpdatesFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SearchEngine::torrentFileDownloaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
