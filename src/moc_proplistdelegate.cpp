/****************************************************************************
** Meta object code from reading C++ file 'proplistdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/properties/proplistdelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proplistdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropListDelegate_t {
    QByteArrayData data[12];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropListDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropListDelegate_t qt_meta_stringdata_PropListDelegate = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PropListDelegate"
QT_MOC_LITERAL(1, 17, 20), // "filteredFilesChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "setModelData"
QT_MOC_LITERAL(4, 52, 8), // "QWidget*"
QT_MOC_LITERAL(5, 61, 6), // "editor"
QT_MOC_LITERAL(6, 68, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(7, 88, 5), // "model"
QT_MOC_LITERAL(8, 94, 5), // "index"
QT_MOC_LITERAL(9, 100, 20), // "updateEditorGeometry"
QT_MOC_LITERAL(10, 121, 20), // "QStyleOptionViewItem"
QT_MOC_LITERAL(11, 142, 6) // "option"

    },
    "PropListDelegate\0filteredFilesChanged\0"
    "\0setModelData\0QWidget*\0editor\0"
    "QAbstractItemModel*\0model\0index\0"
    "updateEditorGeometry\0QStyleOptionViewItem\0"
    "option"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropListDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   30,    2, 0x0a /* Public */,
       9,    3,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6, QMetaType::QModelIndex,    5,    7,    8,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 10, QMetaType::QModelIndex,    5,   11,    2,

       0        // eod
};

void PropListDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropListDelegate *_t = static_cast<PropListDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filteredFilesChanged(); break;
        case 1: _t->setModelData((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 2: _t->updateEditorGeometry((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PropListDelegate::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropListDelegate::filteredFilesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PropListDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_PropListDelegate.data,
      qt_meta_data_PropListDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PropListDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropListDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropListDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int PropListDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PropListDelegate::filteredFilesChanged()const
{
    QMetaObject::activate(const_cast< PropListDelegate *>(this), &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
