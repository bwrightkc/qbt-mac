/****************************************************************************
** Meta object code from reading C++ file 'loglistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/loglistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loglistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogListWidget_t {
    QByteArrayData data[7];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogListWidget_t qt_meta_stringdata_LogListWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LogListWidget"
QT_MOC_LITERAL(1, 14, 10), // "appendLine"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "line"
QT_MOC_LITERAL(4, 31, 12), // "Log::MsgType"
QT_MOC_LITERAL(5, 44, 4), // "type"
QT_MOC_LITERAL(6, 49, 13) // "copySelection"

    },
    "LogListWidget\0appendLine\0\0line\0"
    "Log::MsgType\0type\0copySelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogListWidget[] = {

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
       1,    2,   24,    2, 0x0a /* Public */,
       6,    0,   29,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

       0        // eod
};

void LogListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogListWidget *_t = static_cast<LogListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appendLine((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Log::MsgType(*)>(_a[2]))); break;
        case 1: _t->copySelection(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_LogListWidget.data,
      qt_meta_data_LogListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogListWidget.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int LogListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
