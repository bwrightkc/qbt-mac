/****************************************************************************
** Meta object code from reading C++ file 'pluginsourcedlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/search/pluginsourcedlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginsourcedlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginSourceDlg_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginSourceDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginSourceDlg_t qt_meta_stringdata_PluginSourceDlg = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PluginSourceDlg"
QT_MOC_LITERAL(1, 16, 9), // "askForUrl"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "askForLocalFile"
QT_MOC_LITERAL(4, 43, 22), // "on_localButton_clicked"
QT_MOC_LITERAL(5, 66, 20) // "on_urlButton_clicked"

    },
    "PluginSourceDlg\0askForUrl\0\0askForLocalFile\0"
    "on_localButton_clicked\0on_urlButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginSourceDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PluginSourceDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginSourceDlg *_t = static_cast<PluginSourceDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->askForUrl(); break;
        case 1: _t->askForLocalFile(); break;
        case 2: _t->on_localButton_clicked(); break;
        case 3: _t->on_urlButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PluginSourceDlg::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PluginSourceDlg::askForUrl)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PluginSourceDlg::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PluginSourceDlg::askForLocalFile)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PluginSourceDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PluginSourceDlg.data,
      qt_meta_data_PluginSourceDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PluginSourceDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginSourceDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginSourceDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PluginSourceDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PluginSourceDlg::askForUrl()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PluginSourceDlg::askForLocalFile()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
