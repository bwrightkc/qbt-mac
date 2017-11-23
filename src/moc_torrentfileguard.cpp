/****************************************************************************
** Meta object code from reading C++ file 'torrentfileguard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/torrentfileguard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'torrentfileguard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TorrentFileGuard_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorrentFileGuard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorrentFileGuard_t qt_meta_stringdata_TorrentFileGuard = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TorrentFileGuard"
QT_MOC_LITERAL(1, 17, 14), // "AutoDeleteMode"
QT_MOC_LITERAL(2, 32, 5), // "Never"
QT_MOC_LITERAL(3, 38, 7), // "IfAdded"
QT_MOC_LITERAL(4, 46, 6) // "Always"

    },
    "TorrentFileGuard\0AutoDeleteMode\0Never\0"
    "IfAdded\0Always"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorrentFileGuard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    3,   18,

 // enum data: key, value
       2, uint(TorrentFileGuard::Never),
       3, uint(TorrentFileGuard::IfAdded),
       4, uint(TorrentFileGuard::Always),

       0        // eod
};

const QMetaObject TorrentFileGuard::staticMetaObject = {
    { nullptr, qt_meta_stringdata_TorrentFileGuard.data,
      qt_meta_data_TorrentFileGuard,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
