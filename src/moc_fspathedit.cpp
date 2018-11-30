/****************************************************************************
** Meta object code from reading C++ file 'fspathedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/fspathedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fspathedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileSystemPathEdit_t {
    QByteArrayData data[14];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSystemPathEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSystemPathEdit_t qt_meta_stringdata_FileSystemPathEdit = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FileSystemPathEdit"
QT_MOC_LITERAL(1, 19, 19), // "selectedPathChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "path"
QT_MOC_LITERAL(4, 45, 12), // "onPathEdited"
QT_MOC_LITERAL(5, 58, 4), // "mode"
QT_MOC_LITERAL(6, 63, 4), // "Mode"
QT_MOC_LITERAL(7, 68, 12), // "selectedPath"
QT_MOC_LITERAL(8, 81, 14), // "fileNameFilter"
QT_MOC_LITERAL(9, 96, 13), // "dialogCaption"
QT_MOC_LITERAL(10, 110, 8), // "FileOpen"
QT_MOC_LITERAL(11, 119, 8), // "FileSave"
QT_MOC_LITERAL(12, 128, 13), // "DirectoryOpen"
QT_MOC_LITERAL(13, 142, 13) // "DirectorySave"

    },
    "FileSystemPathEdit\0selectedPathChanged\0"
    "\0path\0onPathEdited\0mode\0Mode\0selectedPath\0"
    "fileNameFilter\0dialogCaption\0FileOpen\0"
    "FileSave\0DirectoryOpen\0DirectorySave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSystemPathEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
       6, 0x2,    4,   48,

 // enum data: key, value
      10, uint(FileSystemPathEdit::Mode::FileOpen),
      11, uint(FileSystemPathEdit::Mode::FileSave),
      12, uint(FileSystemPathEdit::Mode::DirectoryOpen),
      13, uint(FileSystemPathEdit::Mode::DirectorySave),

       0        // eod
};

void FileSystemPathEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileSystemPathEdit *_t = static_cast<FileSystemPathEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onPathEdited(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileSystemPathEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystemPathEdit::selectedPathChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FileSystemPathEdit *_t = static_cast<FileSystemPathEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mode*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->selectedPath(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->fileNameFilter(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->dialogCaption(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FileSystemPathEdit *_t = static_cast<FileSystemPathEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 1: _t->setSelectedPath(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFileNameFilter(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDialogCaption(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FileSystemPathEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileSystemPathEdit.data,
      qt_meta_data_FileSystemPathEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileSystemPathEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSystemPathEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystemPathEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FileSystemPathEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileSystemPathEdit::selectedPathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
