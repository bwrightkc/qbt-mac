/****************************************************************************
** Meta object code from reading C++ file 'executionlogwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/executionlogwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'executionlogwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExecutionLogWidget_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExecutionLogWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExecutionLogWidget_t qt_meta_stringdata_ExecutionLogWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ExecutionLogWidget"
QT_MOC_LITERAL(1, 19, 13), // "addLogMessage"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "Log::Msg"
QT_MOC_LITERAL(4, 43, 3), // "msg"
QT_MOC_LITERAL(5, 47, 14), // "addPeerMessage"
QT_MOC_LITERAL(6, 62, 9), // "Log::Peer"
QT_MOC_LITERAL(7, 72, 4) // "peer"

    },
    "ExecutionLogWidget\0addLogMessage\0\0"
    "Log::Msg\0msg\0addPeerMessage\0Log::Peer\0"
    "peer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExecutionLogWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ExecutionLogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExecutionLogWidget *_t = static_cast<ExecutionLogWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLogMessage((*reinterpret_cast< const Log::Msg(*)>(_a[1]))); break;
        case 1: _t->addPeerMessage((*reinterpret_cast< const Log::Peer(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExecutionLogWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExecutionLogWidget.data,
      qt_meta_data_ExecutionLogWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ExecutionLogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExecutionLogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExecutionLogWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExecutionLogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
