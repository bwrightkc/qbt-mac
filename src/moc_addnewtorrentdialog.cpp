/****************************************************************************
** Meta object code from reading C++ file 'addnewtorrentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/addnewtorrentdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addnewtorrentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddNewTorrentDialog_t {
    QByteArrayData data[26];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddNewTorrentDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddNewTorrentDialog_t qt_meta_stringdata_AddNewTorrentDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AddNewTorrentDialog"
QT_MOC_LITERAL(1, 20, 20), // "showAdvancedSettings"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "show"
QT_MOC_LITERAL(4, 47, 22), // "displayContentTreeMenu"
QT_MOC_LITERAL(5, 70, 20), // "updateDiskSpaceLabel"
QT_MOC_LITERAL(6, 91, 17), // "onSavePathChanged"
QT_MOC_LITERAL(7, 109, 7), // "newPath"
QT_MOC_LITERAL(8, 117, 18), // "renameSelectedFile"
QT_MOC_LITERAL(9, 136, 14), // "updateMetadata"
QT_MOC_LITERAL(10, 151, 23), // "BitTorrent::TorrentInfo"
QT_MOC_LITERAL(11, 175, 4), // "info"
QT_MOC_LITERAL(12, 180, 20), // "handleDownloadFailed"
QT_MOC_LITERAL(13, 201, 3), // "url"
QT_MOC_LITERAL(14, 205, 6), // "reason"
QT_MOC_LITERAL(15, 212, 24), // "handleRedirectedToMagnet"
QT_MOC_LITERAL(16, 237, 9), // "magnetUri"
QT_MOC_LITERAL(17, 247, 22), // "handleDownloadFinished"
QT_MOC_LITERAL(18, 270, 8), // "filePath"
QT_MOC_LITERAL(19, 279, 10), // "TMMChanged"
QT_MOC_LITERAL(20, 290, 5), // "index"
QT_MOC_LITERAL(21, 296, 15), // "categoryChanged"
QT_MOC_LITERAL(22, 312, 25), // "doNotDeleteTorrentClicked"
QT_MOC_LITERAL(23, 338, 7), // "checked"
QT_MOC_LITERAL(24, 346, 6), // "accept"
QT_MOC_LITERAL(25, 353, 6) // "reject"

    },
    "AddNewTorrentDialog\0showAdvancedSettings\0"
    "\0show\0displayContentTreeMenu\0"
    "updateDiskSpaceLabel\0onSavePathChanged\0"
    "newPath\0renameSelectedFile\0updateMetadata\0"
    "BitTorrent::TorrentInfo\0info\0"
    "handleDownloadFailed\0url\0reason\0"
    "handleRedirectedToMagnet\0magnetUri\0"
    "handleDownloadFinished\0filePath\0"
    "TMMChanged\0index\0categoryChanged\0"
    "doNotDeleteTorrentClicked\0checked\0"
    "accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddNewTorrentDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    1,   87,    2, 0x08 /* Private */,
       5,    0,   90,    2, 0x08 /* Private */,
       6,    1,   91,    2, 0x08 /* Private */,
       8,    0,   94,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      12,    2,   98,    2, 0x08 /* Private */,
      15,    2,  103,    2, 0x08 /* Private */,
      17,    2,  108,    2, 0x08 /* Private */,
      19,    1,  113,    2, 0x08 /* Private */,
      21,    1,  116,    2, 0x08 /* Private */,
      22,    1,  119,    2, 0x08 /* Private */,
      24,    0,  122,    2, 0x08 /* Private */,
      25,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddNewTorrentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddNewTorrentDialog *_t = static_cast<AddNewTorrentDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showAdvancedSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->displayContentTreeMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->updateDiskSpaceLabel(); break;
        case 3: _t->onSavePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->renameSelectedFile(); break;
        case 5: _t->updateMetadata((*reinterpret_cast< const BitTorrent::TorrentInfo(*)>(_a[1]))); break;
        case 6: _t->handleDownloadFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->handleRedirectedToMagnet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->handleDownloadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->TMMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->categoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->doNotDeleteTorrentClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->accept(); break;
        case 13: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject AddNewTorrentDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddNewTorrentDialog.data,
      qt_meta_data_AddNewTorrentDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddNewTorrentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddNewTorrentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddNewTorrentDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddNewTorrentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
