/****************************************************************************
** Meta object code from reading C++ file 'torrentcreatordlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/torrentcreatordlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'torrentcreatordlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TorrentCreatorDlg_t {
    QByteArrayData data[13];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorrentCreatorDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorrentCreatorDlg_t qt_meta_stringdata_TorrentCreatorDlg = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TorrentCreatorDlg"
QT_MOC_LITERAL(1, 18, 17), // "updateProgressBar"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "progress"
QT_MOC_LITERAL(4, 46, 17), // "updatePiecesCount"
QT_MOC_LITERAL(5, 64, 21), // "onCreateButtonClicked"
QT_MOC_LITERAL(6, 86, 22), // "onAddFileButtonClicked"
QT_MOC_LITERAL(7, 109, 24), // "onAddFolderButtonClicked"
QT_MOC_LITERAL(8, 134, 21), // "handleCreationFailure"
QT_MOC_LITERAL(9, 156, 3), // "msg"
QT_MOC_LITERAL(10, 160, 21), // "handleCreationSuccess"
QT_MOC_LITERAL(11, 182, 4), // "path"
QT_MOC_LITERAL(12, 187, 10) // "branchPath"

    },
    "TorrentCreatorDlg\0updateProgressBar\0"
    "\0progress\0updatePiecesCount\0"
    "onCreateButtonClicked\0onAddFileButtonClicked\0"
    "onAddFolderButtonClicked\0handleCreationFailure\0"
    "msg\0handleCreationSuccess\0path\0"
    "branchPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorrentCreatorDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    2,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,

       0        // eod
};

void TorrentCreatorDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TorrentCreatorDlg *_t = static_cast<TorrentCreatorDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updatePiecesCount(); break;
        case 2: _t->onCreateButtonClicked(); break;
        case 3: _t->onAddFileButtonClicked(); break;
        case 4: _t->onAddFolderButtonClicked(); break;
        case 5: _t->handleCreationFailure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->handleCreationSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject TorrentCreatorDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TorrentCreatorDlg.data,
      qt_meta_data_TorrentCreatorDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TorrentCreatorDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorrentCreatorDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorrentCreatorDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TorrentCreatorDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
