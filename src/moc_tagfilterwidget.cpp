/****************************************************************************
** Meta object code from reading C++ file 'tagfilterwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/tagfilterwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagfilterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TagFilterWidget_t {
    QByteArrayData data[16];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagFilterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagFilterWidget_t qt_meta_stringdata_TagFilterWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TagFilterWidget"
QT_MOC_LITERAL(1, 16, 10), // "tagChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "tag"
QT_MOC_LITERAL(4, 32, 29), // "actionResumeTorrentsTriggered"
QT_MOC_LITERAL(5, 62, 28), // "actionPauseTorrentsTriggered"
QT_MOC_LITERAL(6, 91, 29), // "actionDeleteTorrentsTriggered"
QT_MOC_LITERAL(7, 121, 19), // "onCurrentRowChanged"
QT_MOC_LITERAL(8, 141, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 153, 7), // "current"
QT_MOC_LITERAL(10, 161, 8), // "previous"
QT_MOC_LITERAL(11, 170, 8), // "showMenu"
QT_MOC_LITERAL(12, 179, 18), // "callUpdateGeometry"
QT_MOC_LITERAL(13, 198, 6), // "addTag"
QT_MOC_LITERAL(14, 205, 9), // "removeTag"
QT_MOC_LITERAL(15, 215, 16) // "removeUnusedTags"

    },
    "TagFilterWidget\0tagChanged\0\0tag\0"
    "actionResumeTorrentsTriggered\0"
    "actionPauseTorrentsTriggered\0"
    "actionDeleteTorrentsTriggered\0"
    "onCurrentRowChanged\0QModelIndex\0current\0"
    "previous\0showMenu\0callUpdateGeometry\0"
    "addTag\0removeTag\0removeUnusedTags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagFilterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    0,   68,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   70,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TagFilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TagFilterWidget *_t = static_cast<TagFilterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tagChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->actionResumeTorrentsTriggered(); break;
        case 2: _t->actionPauseTorrentsTriggered(); break;
        case 3: _t->actionDeleteTorrentsTriggered(); break;
        case 4: _t->onCurrentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->showMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->callUpdateGeometry(); break;
        case 7: _t->addTag(); break;
        case 8: _t->removeTag(); break;
        case 9: _t->removeUnusedTags(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TagFilterWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TagFilterWidget::tagChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TagFilterWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TagFilterWidget::actionResumeTorrentsTriggered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TagFilterWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TagFilterWidget::actionPauseTorrentsTriggered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TagFilterWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TagFilterWidget::actionDeleteTorrentsTriggered)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TagFilterWidget::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_TagFilterWidget.data,
      qt_meta_data_TagFilterWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TagFilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagFilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagFilterWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int TagFilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TagFilterWidget::tagChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TagFilterWidget::actionResumeTorrentsTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TagFilterWidget::actionPauseTorrentsTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TagFilterWidget::actionDeleteTorrentsTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
