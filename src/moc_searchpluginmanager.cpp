/****************************************************************************
** Meta object code from reading C++ file 'searchpluginmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/search/searchpluginmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchpluginmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchPluginManager_t {
    QByteArrayData data[15];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchPluginManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchPluginManager_t qt_meta_stringdata_SearchPluginManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SearchPluginManager"
QT_MOC_LITERAL(1, 20, 13), // "pluginEnabled"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "name"
QT_MOC_LITERAL(4, 40, 7), // "enabled"
QT_MOC_LITERAL(5, 48, 15), // "pluginInstalled"
QT_MOC_LITERAL(6, 64, 24), // "pluginInstallationFailed"
QT_MOC_LITERAL(7, 89, 6), // "reason"
QT_MOC_LITERAL(8, 96, 17), // "pluginUninstalled"
QT_MOC_LITERAL(9, 114, 13), // "pluginUpdated"
QT_MOC_LITERAL(10, 128, 18), // "pluginUpdateFailed"
QT_MOC_LITERAL(11, 147, 23), // "checkForUpdatesFinished"
QT_MOC_LITERAL(12, 171, 28), // "QHash<QString,PluginVersion>"
QT_MOC_LITERAL(13, 200, 10), // "updateInfo"
QT_MOC_LITERAL(14, 211, 21) // "checkForUpdatesFailed"

    },
    "SearchPluginManager\0pluginEnabled\0\0"
    "name\0enabled\0pluginInstalled\0"
    "pluginInstallationFailed\0reason\0"
    "pluginUninstalled\0pluginUpdated\0"
    "pluginUpdateFailed\0checkForUpdatesFinished\0"
    "QHash<QString,PluginVersion>\0updateInfo\0"
    "checkForUpdatesFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchPluginManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    1,   59,    2, 0x06 /* Public */,
       6,    2,   62,    2, 0x06 /* Public */,
       8,    1,   67,    2, 0x06 /* Public */,
       9,    1,   70,    2, 0x06 /* Public */,
      10,    2,   73,    2, 0x06 /* Public */,
      11,    1,   78,    2, 0x06 /* Public */,
      14,    1,   81,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    7,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void SearchPluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchPluginManager *_t = static_cast<SearchPluginManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginEnabled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->pluginInstalled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pluginInstallationFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->pluginUninstalled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->pluginUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->pluginUpdateFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->checkForUpdatesFinished((*reinterpret_cast< const QHash<QString,PluginVersion>(*)>(_a[1]))); break;
        case 7: _t->checkForUpdatesFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchPluginManager::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPluginManager::pluginEnabled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchPluginManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPluginManager::pluginInstalled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SearchPluginManager::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPluginManager::pluginInstallationFailed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SearchPluginManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPluginManager::pluginUninstalled)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SearchPluginManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPluginManager::pluginUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SearchPluginManager::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPluginManager::pluginUpdateFailed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SearchPluginManager::*)(const QHash<QString,PluginVersion> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPluginManager::checkForUpdatesFinished)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SearchPluginManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchPluginManager::checkForUpdatesFailed)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchPluginManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SearchPluginManager.data,
      qt_meta_data_SearchPluginManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchPluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchPluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchPluginManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SearchPluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SearchPluginManager::pluginEnabled(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchPluginManager::pluginInstalled(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchPluginManager::pluginInstallationFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SearchPluginManager::pluginUninstalled(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SearchPluginManager::pluginUpdated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SearchPluginManager::pluginUpdateFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SearchPluginManager::checkForUpdatesFinished(const QHash<QString,PluginVersion> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SearchPluginManager::checkForUpdatesFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
