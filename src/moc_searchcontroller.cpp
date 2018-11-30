/****************************************************************************
** Meta object code from reading C++ file 'searchcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "webui/api/searchcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchController_t {
    QByteArrayData data[13];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchController_t qt_meta_stringdata_SearchController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SearchController"
QT_MOC_LITERAL(1, 17, 11), // "startAction"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "stopAction"
QT_MOC_LITERAL(4, 41, 12), // "statusAction"
QT_MOC_LITERAL(5, 54, 13), // "resultsAction"
QT_MOC_LITERAL(6, 68, 12), // "deleteAction"
QT_MOC_LITERAL(7, 81, 16), // "categoriesAction"
QT_MOC_LITERAL(8, 98, 13), // "pluginsAction"
QT_MOC_LITERAL(9, 112, 19), // "installPluginAction"
QT_MOC_LITERAL(10, 132, 21), // "uninstallPluginAction"
QT_MOC_LITERAL(11, 154, 18), // "enablePluginAction"
QT_MOC_LITERAL(12, 173, 19) // "updatePluginsAction"

    },
    "SearchController\0startAction\0\0stopAction\0"
    "statusAction\0resultsAction\0deleteAction\0"
    "categoriesAction\0pluginsAction\0"
    "installPluginAction\0uninstallPluginAction\0"
    "enablePluginAction\0updatePluginsAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SearchController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchController *_t = static_cast<SearchController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startAction(); break;
        case 1: _t->stopAction(); break;
        case 2: _t->statusAction(); break;
        case 3: _t->resultsAction(); break;
        case 4: _t->deleteAction(); break;
        case 5: _t->categoriesAction(); break;
        case 6: _t->pluginsAction(); break;
        case 7: _t->installPluginAction(); break;
        case 8: _t->uninstallPluginAction(); break;
        case 9: _t->enablePluginAction(); break;
        case 10: _t->updatePluginsAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SearchController::staticMetaObject = {
    { &APIController::staticMetaObject, qt_meta_stringdata_SearchController.data,
      qt_meta_data_SearchController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchController.stringdata0))
        return static_cast<void*>(this);
    return APIController::qt_metacast(_clname);
}

int SearchController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = APIController::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
