/****************************************************************************
** Meta object code from reading C++ file 'searchtab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/search/searchtab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchtab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchTab_t {
    QByteArrayData data[11];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchTab_t qt_meta_stringdata_SearchTab = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SearchTab"
QT_MOC_LITERAL(1, 10, 12), // "downloadItem"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "index"
QT_MOC_LITERAL(4, 30, 12), // "loadSettings"
QT_MOC_LITERAL(5, 43, 12), // "saveSettings"
QT_MOC_LITERAL(6, 56, 12), // "updateFilter"
QT_MOC_LITERAL(7, 69, 24), // "displayToggleColumnsMenu"
QT_MOC_LITERAL(8, 94, 17), // "NameFilteringMode"
QT_MOC_LITERAL(9, 112, 10), // "Everywhere"
QT_MOC_LITERAL(10, 123, 9) // "OnlyNames"

    },
    "SearchTab\0downloadItem\0\0index\0"
    "loadSettings\0saveSettings\0updateFilter\0"
    "displayToggleColumnsMenu\0NameFilteringMode\0"
    "Everywhere\0OnlyNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   48, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,

 // enums: name, flags, count, data
       8, 0x2,    2,   52,

 // enum data: key, value
       9, uint(SearchTab::NameFilteringMode::Everywhere),
      10, uint(SearchTab::NameFilteringMode::OnlyNames),

       0        // eod
};

void SearchTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchTab *_t = static_cast<SearchTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->loadSettings(); break;
        case 2: _t->saveSettings(); break;
        case 3: _t->updateFilter(); break;
        case 4: _t->displayToggleColumnsMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SearchTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SearchTab.data,
      qt_meta_data_SearchTab,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchTab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SearchTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
