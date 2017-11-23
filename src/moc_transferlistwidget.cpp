/****************************************************************************
** Meta object code from reading C++ file 'transferlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/transferlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransferListWidget_t {
    QByteArrayData data[63];
    char stringdata0[1239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransferListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransferListWidget_t qt_meta_stringdata_TransferListWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TransferListWidget"
QT_MOC_LITERAL(1, 19, 21), // "currentTorrentChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "BitTorrent::TorrentHandle*const"
QT_MOC_LITERAL(4, 74, 7), // "torrent"
QT_MOC_LITERAL(5, 82, 20), // "setSelectionCategory"
QT_MOC_LITERAL(6, 103, 8), // "category"
QT_MOC_LITERAL(7, 112, 15), // "addSelectionTag"
QT_MOC_LITERAL(8, 128, 3), // "tag"
QT_MOC_LITERAL(9, 132, 18), // "removeSelectionTag"
QT_MOC_LITERAL(10, 151, 18), // "clearSelectionTags"
QT_MOC_LITERAL(11, 170, 27), // "setSelectedTorrentsLocation"
QT_MOC_LITERAL(12, 198, 16), // "pauseAllTorrents"
QT_MOC_LITERAL(13, 215, 17), // "resumeAllTorrents"
QT_MOC_LITERAL(14, 233, 21), // "startSelectedTorrents"
QT_MOC_LITERAL(15, 255, 26), // "forceStartSelectedTorrents"
QT_MOC_LITERAL(16, 282, 20), // "startVisibleTorrents"
QT_MOC_LITERAL(17, 303, 21), // "pauseSelectedTorrents"
QT_MOC_LITERAL(18, 325, 20), // "pauseVisibleTorrents"
QT_MOC_LITERAL(19, 346, 26), // "softDeleteSelectedTorrents"
QT_MOC_LITERAL(20, 373, 26), // "permDeleteSelectedTorrents"
QT_MOC_LITERAL(21, 400, 22), // "deleteSelectedTorrents"
QT_MOC_LITERAL(22, 423, 16), // "deleteLocalFiles"
QT_MOC_LITERAL(23, 440, 21), // "deleteVisibleTorrents"
QT_MOC_LITERAL(24, 462, 28), // "increasePrioSelectedTorrents"
QT_MOC_LITERAL(25, 491, 28), // "decreasePrioSelectedTorrents"
QT_MOC_LITERAL(26, 520, 23), // "topPrioSelectedTorrents"
QT_MOC_LITERAL(27, 544, 26), // "bottomPrioSelectedTorrents"
QT_MOC_LITERAL(28, 571, 22), // "copySelectedMagnetURIs"
QT_MOC_LITERAL(29, 594, 17), // "copySelectedNames"
QT_MOC_LITERAL(30, 612, 18), // "copySelectedHashes"
QT_MOC_LITERAL(31, 631, 26), // "openSelectedTorrentsFolder"
QT_MOC_LITERAL(32, 658, 23), // "recheckSelectedTorrents"
QT_MOC_LITERAL(33, 682, 26), // "setDlLimitSelectedTorrents"
QT_MOC_LITERAL(34, 709, 26), // "setUpLimitSelectedTorrents"
QT_MOC_LITERAL(35, 736, 27), // "setMaxRatioSelectedTorrents"
QT_MOC_LITERAL(36, 764, 23), // "previewSelectedTorrents"
QT_MOC_LITERAL(37, 788, 18), // "hidePriorityColumn"
QT_MOC_LITERAL(38, 807, 4), // "hide"
QT_MOC_LITERAL(39, 812, 16), // "displayDLHoSMenu"
QT_MOC_LITERAL(40, 829, 15), // "applyNameFilter"
QT_MOC_LITERAL(41, 845, 4), // "name"
QT_MOC_LITERAL(42, 850, 17), // "applyStatusFilter"
QT_MOC_LITERAL(43, 868, 1), // "f"
QT_MOC_LITERAL(44, 870, 19), // "applyCategoryFilter"
QT_MOC_LITERAL(45, 890, 14), // "applyTagFilter"
QT_MOC_LITERAL(46, 905, 21), // "applyTrackerFilterAll"
QT_MOC_LITERAL(47, 927, 18), // "applyTrackerFilter"
QT_MOC_LITERAL(48, 946, 6), // "hashes"
QT_MOC_LITERAL(49, 953, 11), // "previewFile"
QT_MOC_LITERAL(50, 965, 8), // "filePath"
QT_MOC_LITERAL(51, 974, 21), // "renameSelectedTorrent"
QT_MOC_LITERAL(52, 996, 20), // "torrentDoubleClicked"
QT_MOC_LITERAL(53, 1017, 15), // "displayListMenu"
QT_MOC_LITERAL(54, 1033, 14), // "currentChanged"
QT_MOC_LITERAL(55, 1048, 7), // "current"
QT_MOC_LITERAL(56, 1056, 34), // "toggleSelectedTorrentsSuperSe..."
QT_MOC_LITERAL(57, 1091, 40), // "toggleSelectedTorrentsSequent..."
QT_MOC_LITERAL(58, 1132, 32), // "toggleSelectedFirstLastPiecePrio"
QT_MOC_LITERAL(59, 1165, 25), // "setSelectedAutoTMMEnabled"
QT_MOC_LITERAL(60, 1191, 7), // "enabled"
QT_MOC_LITERAL(61, 1199, 26), // "askNewCategoryForSelection"
QT_MOC_LITERAL(62, 1226, 12) // "saveSettings"

    },
    "TransferListWidget\0currentTorrentChanged\0"
    "\0BitTorrent::TorrentHandle*const\0"
    "torrent\0setSelectionCategory\0category\0"
    "addSelectionTag\0tag\0removeSelectionTag\0"
    "clearSelectionTags\0setSelectedTorrentsLocation\0"
    "pauseAllTorrents\0resumeAllTorrents\0"
    "startSelectedTorrents\0forceStartSelectedTorrents\0"
    "startVisibleTorrents\0pauseSelectedTorrents\0"
    "pauseVisibleTorrents\0softDeleteSelectedTorrents\0"
    "permDeleteSelectedTorrents\0"
    "deleteSelectedTorrents\0deleteLocalFiles\0"
    "deleteVisibleTorrents\0"
    "increasePrioSelectedTorrents\0"
    "decreasePrioSelectedTorrents\0"
    "topPrioSelectedTorrents\0"
    "bottomPrioSelectedTorrents\0"
    "copySelectedMagnetURIs\0copySelectedNames\0"
    "copySelectedHashes\0openSelectedTorrentsFolder\0"
    "recheckSelectedTorrents\0"
    "setDlLimitSelectedTorrents\0"
    "setUpLimitSelectedTorrents\0"
    "setMaxRatioSelectedTorrents\0"
    "previewSelectedTorrents\0hidePriorityColumn\0"
    "hide\0displayDLHoSMenu\0applyNameFilter\0"
    "name\0applyStatusFilter\0f\0applyCategoryFilter\0"
    "applyTagFilter\0applyTrackerFilterAll\0"
    "applyTrackerFilter\0hashes\0previewFile\0"
    "filePath\0renameSelectedTorrent\0"
    "torrentDoubleClicked\0displayListMenu\0"
    "currentChanged\0current\0"
    "toggleSelectedTorrentsSuperSeeding\0"
    "toggleSelectedTorrentsSequentialDownload\0"
    "toggleSelectedFirstLastPiecePrio\0"
    "setSelectedAutoTMMEnabled\0enabled\0"
    "askNewCategoryForSelection\0saveSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  259,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  262,    2, 0x0a /* Public */,
       7,    1,  265,    2, 0x0a /* Public */,
       9,    1,  268,    2, 0x0a /* Public */,
      10,    0,  271,    2, 0x0a /* Public */,
      11,    0,  272,    2, 0x0a /* Public */,
      12,    0,  273,    2, 0x0a /* Public */,
      13,    0,  274,    2, 0x0a /* Public */,
      14,    0,  275,    2, 0x0a /* Public */,
      15,    0,  276,    2, 0x0a /* Public */,
      16,    0,  277,    2, 0x0a /* Public */,
      17,    0,  278,    2, 0x0a /* Public */,
      18,    0,  279,    2, 0x0a /* Public */,
      19,    0,  280,    2, 0x0a /* Public */,
      20,    0,  281,    2, 0x0a /* Public */,
      21,    1,  282,    2, 0x0a /* Public */,
      23,    0,  285,    2, 0x0a /* Public */,
      24,    0,  286,    2, 0x0a /* Public */,
      25,    0,  287,    2, 0x0a /* Public */,
      26,    0,  288,    2, 0x0a /* Public */,
      27,    0,  289,    2, 0x0a /* Public */,
      28,    0,  290,    2, 0x0a /* Public */,
      29,    0,  291,    2, 0x0a /* Public */,
      30,    0,  292,    2, 0x0a /* Public */,
      31,    0,  293,    2, 0x0a /* Public */,
      32,    0,  294,    2, 0x0a /* Public */,
      33,    0,  295,    2, 0x0a /* Public */,
      34,    0,  296,    2, 0x0a /* Public */,
      35,    0,  297,    2, 0x0a /* Public */,
      36,    0,  298,    2, 0x0a /* Public */,
      37,    1,  299,    2, 0x0a /* Public */,
      39,    1,  302,    2, 0x0a /* Public */,
      40,    1,  305,    2, 0x0a /* Public */,
      42,    1,  308,    2, 0x0a /* Public */,
      44,    1,  311,    2, 0x0a /* Public */,
      45,    1,  314,    2, 0x0a /* Public */,
      46,    0,  317,    2, 0x0a /* Public */,
      47,    1,  318,    2, 0x0a /* Public */,
      49,    1,  321,    2, 0x0a /* Public */,
      51,    0,  324,    2, 0x0a /* Public */,
      52,    0,  325,    2, 0x09 /* Protected */,
      53,    1,  326,    2, 0x09 /* Protected */,
      54,    2,  329,    2, 0x09 /* Protected */,
      56,    0,  334,    2, 0x09 /* Protected */,
      57,    0,  335,    2, 0x09 /* Protected */,
      58,    0,  336,    2, 0x09 /* Protected */,
      59,    1,  337,    2, 0x09 /* Protected */,
      61,    0,  340,    2, 0x09 /* Protected */,
      62,    0,  341,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
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
    QMetaType::Void, QMetaType::Bool,   22,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   48,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   55,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransferListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransferListWidget *_t = static_cast<TransferListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentTorrentChanged((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 1: _t->setSelectionCategory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->addSelectionTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removeSelectionTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clearSelectionTags(); break;
        case 5: _t->setSelectedTorrentsLocation(); break;
        case 6: _t->pauseAllTorrents(); break;
        case 7: _t->resumeAllTorrents(); break;
        case 8: _t->startSelectedTorrents(); break;
        case 9: _t->forceStartSelectedTorrents(); break;
        case 10: _t->startVisibleTorrents(); break;
        case 11: _t->pauseSelectedTorrents(); break;
        case 12: _t->pauseVisibleTorrents(); break;
        case 13: _t->softDeleteSelectedTorrents(); break;
        case 14: _t->permDeleteSelectedTorrents(); break;
        case 15: _t->deleteSelectedTorrents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->deleteVisibleTorrents(); break;
        case 17: _t->increasePrioSelectedTorrents(); break;
        case 18: _t->decreasePrioSelectedTorrents(); break;
        case 19: _t->topPrioSelectedTorrents(); break;
        case 20: _t->bottomPrioSelectedTorrents(); break;
        case 21: _t->copySelectedMagnetURIs(); break;
        case 22: _t->copySelectedNames(); break;
        case 23: _t->copySelectedHashes(); break;
        case 24: _t->openSelectedTorrentsFolder(); break;
        case 25: _t->recheckSelectedTorrents(); break;
        case 26: _t->setDlLimitSelectedTorrents(); break;
        case 27: _t->setUpLimitSelectedTorrents(); break;
        case 28: _t->setMaxRatioSelectedTorrents(); break;
        case 29: _t->previewSelectedTorrents(); break;
        case 30: _t->hidePriorityColumn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->displayDLHoSMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 32: _t->applyNameFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->applyStatusFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->applyCategoryFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->applyTagFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->applyTrackerFilterAll(); break;
        case 37: _t->applyTrackerFilter((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 38: _t->previewFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->renameSelectedTorrent(); break;
        case 40: _t->torrentDoubleClicked(); break;
        case 41: _t->displayListMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 42: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 43: _t->toggleSelectedTorrentsSuperSeeding(); break;
        case 44: _t->toggleSelectedTorrentsSequentialDownload(); break;
        case 45: _t->toggleSelectedFirstLastPiecePrio(); break;
        case 46: _t->setSelectedAutoTMMEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->askNewCategoryForSelection(); break;
        case 48: _t->saveSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransferListWidget::*_t)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransferListWidget::currentTorrentChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TransferListWidget::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_TransferListWidget.data,
      qt_meta_data_TransferListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransferListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransferListWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int TransferListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void TransferListWidget::currentTorrentChanged(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
