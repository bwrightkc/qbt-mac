/****************************************************************************
** Meta object code from reading C++ file 'trackerlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/properties/trackerlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackerlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackerList_t {
    QByteArrayData data[21];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackerList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackerList_t qt_meta_stringdata_TrackerList = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TrackerList"
QT_MOC_LITERAL(1, 12, 11), // "setRowColor"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "row"
QT_MOC_LITERAL(4, 29, 5), // "color"
QT_MOC_LITERAL(5, 35, 15), // "moveSelectionUp"
QT_MOC_LITERAL(6, 51, 17), // "moveSelectionDown"
QT_MOC_LITERAL(7, 69, 5), // "clear"
QT_MOC_LITERAL(8, 75, 15), // "loadStickyItems"
QT_MOC_LITERAL(9, 91, 31), // "BitTorrent::TorrentHandle*const"
QT_MOC_LITERAL(10, 123, 7), // "torrent"
QT_MOC_LITERAL(11, 131, 12), // "loadTrackers"
QT_MOC_LITERAL(12, 144, 14), // "askForTrackers"
QT_MOC_LITERAL(13, 159, 14), // "copyTrackerUrl"
QT_MOC_LITERAL(14, 174, 18), // "reannounceSelected"
QT_MOC_LITERAL(15, 193, 22), // "deleteSelectedTrackers"
QT_MOC_LITERAL(16, 216, 19), // "editSelectedTracker"
QT_MOC_LITERAL(17, 236, 19), // "showTrackerListMenu"
QT_MOC_LITERAL(18, 256, 24), // "displayToggleColumnsMenu"
QT_MOC_LITERAL(19, 281, 12), // "loadSettings"
QT_MOC_LITERAL(20, 294, 12) // "saveSettings"

    },
    "TrackerList\0setRowColor\0\0row\0color\0"
    "moveSelectionUp\0moveSelectionDown\0"
    "clear\0loadStickyItems\0"
    "BitTorrent::TorrentHandle*const\0torrent\0"
    "loadTrackers\0askForTrackers\0copyTrackerUrl\0"
    "reannounceSelected\0deleteSelectedTrackers\0"
    "editSelectedTracker\0showTrackerListMenu\0"
    "displayToggleColumnsMenu\0loadSettings\0"
    "saveSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackerList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x0a /* Public */,
       5,    0,   94,    2, 0x0a /* Public */,
       6,    0,   95,    2, 0x0a /* Public */,
       7,    0,   96,    2, 0x0a /* Public */,
       8,    1,   97,    2, 0x0a /* Public */,
      11,    0,  100,    2, 0x0a /* Public */,
      12,    0,  101,    2, 0x0a /* Public */,
      13,    0,  102,    2, 0x0a /* Public */,
      14,    0,  103,    2, 0x0a /* Public */,
      15,    0,  104,    2, 0x0a /* Public */,
      16,    0,  105,    2, 0x0a /* Public */,
      17,    1,  106,    2, 0x0a /* Public */,
      18,    1,  109,    2, 0x0a /* Public */,
      19,    0,  112,    2, 0x0a /* Public */,
      20,    0,  113,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QColor,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrackerList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrackerList *_t = static_cast<TrackerList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRowColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 1: _t->moveSelectionUp(); break;
        case 2: _t->moveSelectionDown(); break;
        case 3: _t->clear(); break;
        case 4: _t->loadStickyItems((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 5: _t->loadTrackers(); break;
        case 6: _t->askForTrackers(); break;
        case 7: _t->copyTrackerUrl(); break;
        case 8: _t->reannounceSelected(); break;
        case 9: _t->deleteSelectedTrackers(); break;
        case 10: _t->editSelectedTracker(); break;
        case 11: _t->showTrackerListMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 12: _t->displayToggleColumnsMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->loadSettings(); break;
        case 14: _t->saveSettings(); break;
        default: ;
        }
    }
}

const QMetaObject TrackerList::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_TrackerList.data,
      qt_meta_data_TrackerList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TrackerList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackerList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackerList.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int TrackerList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
