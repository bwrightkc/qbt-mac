/****************************************************************************
** Meta object code from reading C++ file 'transferlistfilterswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/transferlistfilterswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferlistfilterswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseFilterWidget_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseFilterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseFilterWidget_t qt_meta_stringdata_BaseFilterWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BaseFilterWidget"
QT_MOC_LITERAL(1, 17, 12), // "toggleFilter"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "checked"
QT_MOC_LITERAL(4, 39, 8), // "showMenu"
QT_MOC_LITERAL(5, 48, 11), // "applyFilter"
QT_MOC_LITERAL(6, 60, 3), // "row"
QT_MOC_LITERAL(7, 64, 16), // "handleNewTorrent"
QT_MOC_LITERAL(8, 81, 31), // "BitTorrent::TorrentHandle*const"
QT_MOC_LITERAL(9, 113, 23) // "torrentAboutToBeDeleted"

    },
    "BaseFilterWidget\0toggleFilter\0\0checked\0"
    "showMenu\0applyFilter\0row\0handleNewTorrent\0"
    "BitTorrent::TorrentHandle*const\0"
    "torrentAboutToBeDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseFilterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       7,    1,   48,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void BaseFilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseFilterWidget *_t = static_cast<BaseFilterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->applyFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->handleNewTorrent((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 4: _t->torrentAboutToBeDeleted((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BaseFilterWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_BaseFilterWidget.data,
      qt_meta_data_BaseFilterWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseFilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseFilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseFilterWidget.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int BaseFilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_StatusFilterWidget_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusFilterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusFilterWidget_t qt_meta_stringdata_StatusFilterWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "StatusFilterWidget"
QT_MOC_LITERAL(1, 19, 20), // "updateTorrentNumbers"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "StatusFilterWidget\0updateTorrentNumbers\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusFilterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void StatusFilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StatusFilterWidget *_t = static_cast<StatusFilterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTorrentNumbers(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusFilterWidget::staticMetaObject = {
    { &BaseFilterWidget::staticMetaObject, qt_meta_stringdata_StatusFilterWidget.data,
      qt_meta_data_StatusFilterWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StatusFilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusFilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusFilterWidget.stringdata0))
        return static_cast<void*>(this);
    return BaseFilterWidget::qt_metacast(_clname);
}

int StatusFilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseFilterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_TrackerFiltersList_t {
    QByteArrayData data[12];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackerFiltersList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackerFiltersList_t qt_meta_stringdata_TrackerFiltersList = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TrackerFiltersList"
QT_MOC_LITERAL(1, 19, 14), // "trackerSuccess"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "hash"
QT_MOC_LITERAL(4, 40, 7), // "tracker"
QT_MOC_LITERAL(5, 48, 12), // "trackerError"
QT_MOC_LITERAL(6, 61, 14), // "trackerWarning"
QT_MOC_LITERAL(7, 76, 20), // "handleFavicoDownload"
QT_MOC_LITERAL(8, 97, 3), // "url"
QT_MOC_LITERAL(9, 101, 8), // "filePath"
QT_MOC_LITERAL(10, 110, 19), // "handleFavicoFailure"
QT_MOC_LITERAL(11, 130, 5) // "error"

    },
    "TrackerFiltersList\0trackerSuccess\0\0"
    "hash\0tracker\0trackerError\0trackerWarning\0"
    "handleFavicoDownload\0url\0filePath\0"
    "handleFavicoFailure\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackerFiltersList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       5,    2,   44,    2, 0x0a /* Public */,
       6,    2,   49,    2, 0x0a /* Public */,
       7,    2,   54,    2, 0x08 /* Private */,
      10,    2,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,   11,

       0        // eod
};

void TrackerFiltersList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrackerFiltersList *_t = static_cast<TrackerFiltersList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trackerSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->trackerError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->trackerWarning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->handleFavicoDownload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->handleFavicoFailure((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackerFiltersList::staticMetaObject = {
    { &BaseFilterWidget::staticMetaObject, qt_meta_stringdata_TrackerFiltersList.data,
      qt_meta_data_TrackerFiltersList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TrackerFiltersList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackerFiltersList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackerFiltersList.stringdata0))
        return static_cast<void*>(this);
    return BaseFilterWidget::qt_metacast(_clname);
}

int TrackerFiltersList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseFilterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_TransferListFiltersWidget_t {
    QByteArrayData data[18];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransferListFiltersWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransferListFiltersWidget_t qt_meta_stringdata_TransferListFiltersWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "TransferListFiltersWidget"
QT_MOC_LITERAL(1, 26, 14), // "trackerSuccess"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "hash"
QT_MOC_LITERAL(4, 47, 7), // "tracker"
QT_MOC_LITERAL(5, 55, 12), // "trackerError"
QT_MOC_LITERAL(6, 68, 14), // "trackerWarning"
QT_MOC_LITERAL(7, 83, 11), // "addTrackers"
QT_MOC_LITERAL(8, 95, 31), // "BitTorrent::TorrentHandle*const"
QT_MOC_LITERAL(9, 127, 7), // "torrent"
QT_MOC_LITERAL(10, 135, 31), // "QList<BitTorrent::TrackerEntry>"
QT_MOC_LITERAL(11, 167, 8), // "trackers"
QT_MOC_LITERAL(12, 176, 14), // "removeTrackers"
QT_MOC_LITERAL(13, 191, 17), // "changeTrackerless"
QT_MOC_LITERAL(14, 209, 11), // "trackerless"
QT_MOC_LITERAL(15, 221, 28), // "onCategoryFilterStateChanged"
QT_MOC_LITERAL(16, 250, 7), // "enabled"
QT_MOC_LITERAL(17, 258, 23) // "onTagFilterStateChanged"

    },
    "TransferListFiltersWidget\0trackerSuccess\0"
    "\0hash\0tracker\0trackerError\0trackerWarning\0"
    "addTrackers\0BitTorrent::TorrentHandle*const\0"
    "torrent\0QList<BitTorrent::TrackerEntry>\0"
    "trackers\0removeTrackers\0changeTrackerless\0"
    "trackerless\0onCategoryFilterStateChanged\0"
    "enabled\0onTagFilterStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferListFiltersWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    2,   74,    2, 0x06 /* Public */,
       6,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   84,    2, 0x0a /* Public */,
      12,    2,   89,    2, 0x0a /* Public */,
      13,    2,   94,    2, 0x0a /* Public */,
       1,    2,   99,    2, 0x0a /* Public */,
       6,    2,  104,    2, 0x0a /* Public */,
       5,    2,  109,    2, 0x0a /* Public */,
      15,    1,  114,    2, 0x08 /* Private */,
      17,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   14,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,    4,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,    4,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,    4,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void TransferListFiltersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransferListFiltersWidget *_t = static_cast<TransferListFiltersWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trackerSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->trackerError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->trackerWarning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->addTrackers((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QList<BitTorrent::TrackerEntry>(*)>(_a[2]))); break;
        case 4: _t->removeTrackers((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QList<BitTorrent::TrackerEntry>(*)>(_a[2]))); break;
        case 5: _t->changeTrackerless((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->trackerSuccess((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->trackerWarning((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->trackerError((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->onCategoryFilterStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onTagFilterStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransferListFiltersWidget::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferListFiltersWidget::trackerSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransferListFiltersWidget::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferListFiltersWidget::trackerError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransferListFiltersWidget::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferListFiltersWidget::trackerWarning)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransferListFiltersWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_TransferListFiltersWidget.data,
      qt_meta_data_TransferListFiltersWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransferListFiltersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferListFiltersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransferListFiltersWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int TransferListFiltersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void TransferListFiltersWidget::trackerSuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransferListFiltersWidget::trackerError(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TransferListFiltersWidget::trackerWarning(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
