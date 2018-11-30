/****************************************************************************
** Meta object code from reading C++ file 'tagfiltermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/tagfiltermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagfiltermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TagFilterModel_t {
    QByteArrayData data[11];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagFilterModel_t qt_meta_stringdata_TagFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TagFilterModel"
QT_MOC_LITERAL(1, 15, 8), // "tagAdded"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "tag"
QT_MOC_LITERAL(4, 29, 10), // "tagRemoved"
QT_MOC_LITERAL(5, 40, 15), // "torrentTagAdded"
QT_MOC_LITERAL(6, 56, 31), // "BitTorrent::TorrentHandle*const"
QT_MOC_LITERAL(7, 88, 7), // "torrent"
QT_MOC_LITERAL(8, 96, 17), // "torrentTagRemoved"
QT_MOC_LITERAL(9, 114, 12), // "torrentAdded"
QT_MOC_LITERAL(10, 127, 23) // "torrentAboutToBeRemoved"

    },
    "TagFilterModel\0tagAdded\0\0tag\0tagRemoved\0"
    "torrentTagAdded\0BitTorrent::TorrentHandle*const\0"
    "torrent\0torrentTagRemoved\0torrentAdded\0"
    "torrentAboutToBeRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagFilterModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    2,   50,    2, 0x08 /* Private */,
       8,    2,   55,    2, 0x08 /* Private */,
       9,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    3,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    2,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void TagFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TagFilterModel *_t = static_cast<TagFilterModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tagAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tagRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->torrentTagAdded((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->torrentTagRemoved((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->torrentAdded((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 5: _t->torrentAboutToBeRemoved((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TagFilterModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_TagFilterModel.data,
      qt_meta_data_TagFilterModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TagFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagFilterModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int TagFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
