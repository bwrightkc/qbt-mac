/****************************************************************************
** Meta object code from reading C++ file 'categoryfilterwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/categoryfilterwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'categoryfilterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CategoryFilterWidget_t {
    QByteArrayData data[17];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CategoryFilterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CategoryFilterWidget_t qt_meta_stringdata_CategoryFilterWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CategoryFilterWidget"
QT_MOC_LITERAL(1, 21, 15), // "categoryChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "categoryName"
QT_MOC_LITERAL(4, 51, 29), // "actionResumeTorrentsTriggered"
QT_MOC_LITERAL(5, 81, 28), // "actionPauseTorrentsTriggered"
QT_MOC_LITERAL(6, 110, 29), // "actionDeleteTorrentsTriggered"
QT_MOC_LITERAL(7, 140, 19), // "onCurrentRowChanged"
QT_MOC_LITERAL(8, 160, 7), // "current"
QT_MOC_LITERAL(9, 168, 8), // "previous"
QT_MOC_LITERAL(10, 177, 8), // "showMenu"
QT_MOC_LITERAL(11, 186, 18), // "callUpdateGeometry"
QT_MOC_LITERAL(12, 205, 11), // "addCategory"
QT_MOC_LITERAL(13, 217, 14), // "addSubcategory"
QT_MOC_LITERAL(14, 232, 12), // "editCategory"
QT_MOC_LITERAL(15, 245, 14), // "removeCategory"
QT_MOC_LITERAL(16, 260, 22) // "removeUnusedCategories"

    },
    "CategoryFilterWidget\0categoryChanged\0"
    "\0categoryName\0actionResumeTorrentsTriggered\0"
    "actionPauseTorrentsTriggered\0"
    "actionDeleteTorrentsTriggered\0"
    "onCurrentRowChanged\0current\0previous\0"
    "showMenu\0callUpdateGeometry\0addCategory\0"
    "addSubcategory\0editCategory\0removeCategory\0"
    "removeUnusedCategories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CategoryFilterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   80,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    8,    9,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CategoryFilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CategoryFilterWidget *_t = static_cast<CategoryFilterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->categoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->actionResumeTorrentsTriggered(); break;
        case 2: _t->actionPauseTorrentsTriggered(); break;
        case 3: _t->actionDeleteTorrentsTriggered(); break;
        case 4: _t->onCurrentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->showMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->callUpdateGeometry(); break;
        case 7: _t->addCategory(); break;
        case 8: _t->addSubcategory(); break;
        case 9: _t->editCategory(); break;
        case 10: _t->removeCategory(); break;
        case 11: _t->removeUnusedCategories(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CategoryFilterWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CategoryFilterWidget::categoryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CategoryFilterWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CategoryFilterWidget::actionResumeTorrentsTriggered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CategoryFilterWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CategoryFilterWidget::actionPauseTorrentsTriggered)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CategoryFilterWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CategoryFilterWidget::actionDeleteTorrentsTriggered)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CategoryFilterWidget::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_CategoryFilterWidget.data,
      qt_meta_data_CategoryFilterWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CategoryFilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CategoryFilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CategoryFilterWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int CategoryFilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CategoryFilterWidget::categoryChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CategoryFilterWidget::actionResumeTorrentsTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CategoryFilterWidget::actionPauseTorrentsTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CategoryFilterWidget::actionDeleteTorrentsTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
