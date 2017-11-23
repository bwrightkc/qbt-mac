/****************************************************************************
** Meta object code from reading C++ file 'categoryfiltermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/categoryfiltermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'categoryfiltermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CategoryFilterModel_t {
    QByteArrayData data[12];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CategoryFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CategoryFilterModel_t qt_meta_stringdata_CategoryFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CategoryFilterModel"
QT_MOC_LITERAL(1, 20, 13), // "categoryAdded"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "categoryName"
QT_MOC_LITERAL(4, 48, 15), // "categoryRemoved"
QT_MOC_LITERAL(5, 64, 12), // "torrentAdded"
QT_MOC_LITERAL(6, 77, 31), // "BitTorrent::TorrentHandle*const"
QT_MOC_LITERAL(7, 109, 7), // "torrent"
QT_MOC_LITERAL(8, 117, 23), // "torrentAboutToBeRemoved"
QT_MOC_LITERAL(9, 141, 22), // "torrentCategoryChanged"
QT_MOC_LITERAL(10, 164, 11), // "oldCategory"
QT_MOC_LITERAL(11, 176, 27) // "subcategoriesSupportChanged"

    },
    "CategoryFilterModel\0categoryAdded\0\0"
    "categoryName\0categoryRemoved\0torrentAdded\0"
    "BitTorrent::TorrentHandle*const\0torrent\0"
    "torrentAboutToBeRemoved\0torrentCategoryChanged\0"
    "oldCategory\0subcategoriesSupportChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CategoryFilterModel[] = {

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
       5,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
       9,    2,   56,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   10,
    QMetaType::Void,

       0        // eod
};

void CategoryFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CategoryFilterModel *_t = static_cast<CategoryFilterModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->categoryAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->categoryRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->torrentAdded((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 3: _t->torrentAboutToBeRemoved((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 4: _t->torrentCategoryChanged((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->subcategoriesSupportChanged(); break;
        default: ;
        }
    }
}

const QMetaObject CategoryFilterModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_CategoryFilterModel.data,
      qt_meta_data_CategoryFilterModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CategoryFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CategoryFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CategoryFilterModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int CategoryFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
