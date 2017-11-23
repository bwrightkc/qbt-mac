/****************************************************************************
** Meta object code from reading C++ file 'rsswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/rss/rsswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rsswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RSSWidget_t {
    QByteArrayData data[32];
    char stringdata0[618];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RSSWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RSSWidget_t qt_meta_stringdata_RSSWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RSSWidget"
QT_MOC_LITERAL(1, 10, 18), // "unreadCountUpdated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "count"
QT_MOC_LITERAL(4, 36, 19), // "deleteSelectedItems"
QT_MOC_LITERAL(5, 56, 21), // "updateRefreshInterval"
QT_MOC_LITERAL(6, 78, 3), // "val"
QT_MOC_LITERAL(7, 82, 24), // "on_newFeedButton_clicked"
QT_MOC_LITERAL(8, 107, 15), // "refreshAllFeeds"
QT_MOC_LITERAL(9, 123, 25), // "on_markReadButton_clicked"
QT_MOC_LITERAL(10, 149, 18), // "displayRSSListMenu"
QT_MOC_LITERAL(11, 168, 20), // "displayItemsListMenu"
QT_MOC_LITERAL(12, 189, 21), // "renameSelectedRSSItem"
QT_MOC_LITERAL(13, 211, 20), // "refreshSelectedItems"
QT_MOC_LITERAL(14, 232, 20), // "copySelectedFeedsURL"
QT_MOC_LITERAL(15, 253, 28), // "handleCurrentFeedItemChanged"
QT_MOC_LITERAL(16, 282, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(17, 299, 11), // "currentItem"
QT_MOC_LITERAL(18, 311, 31), // "handleCurrentArticleItemChanged"
QT_MOC_LITERAL(19, 343, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(20, 360, 12), // "previousItem"
QT_MOC_LITERAL(21, 373, 24), // "openSelectedArticlesUrls"
QT_MOC_LITERAL(22, 398, 24), // "downloadSelectedTorrents"
QT_MOC_LITERAL(23, 423, 19), // "saveSlidersPosition"
QT_MOC_LITERAL(24, 443, 22), // "restoreSlidersPosition"
QT_MOC_LITERAL(25, 466, 12), // "askNewFolder"
QT_MOC_LITERAL(26, 479, 20), // "saveFoldersOpenState"
QT_MOC_LITERAL(27, 500, 20), // "loadFoldersOpenState"
QT_MOC_LITERAL(28, 521, 27), // "on_rssDownloaderBtn_clicked"
QT_MOC_LITERAL(29, 549, 35), // "handleSessionProcessingStateC..."
QT_MOC_LITERAL(30, 585, 7), // "enabled"
QT_MOC_LITERAL(31, 593, 24) // "handleUnreadCountChanged"

    },
    "RSSWidget\0unreadCountUpdated\0\0count\0"
    "deleteSelectedItems\0updateRefreshInterval\0"
    "val\0on_newFeedButton_clicked\0"
    "refreshAllFeeds\0on_markReadButton_clicked\0"
    "displayRSSListMenu\0displayItemsListMenu\0"
    "renameSelectedRSSItem\0refreshSelectedItems\0"
    "copySelectedFeedsURL\0handleCurrentFeedItemChanged\0"
    "QTreeWidgetItem*\0currentItem\0"
    "handleCurrentArticleItemChanged\0"
    "QListWidgetItem*\0previousItem\0"
    "openSelectedArticlesUrls\0"
    "downloadSelectedTorrents\0saveSlidersPosition\0"
    "restoreSlidersPosition\0askNewFolder\0"
    "saveFoldersOpenState\0loadFoldersOpenState\0"
    "on_rssDownloaderBtn_clicked\0"
    "handleSessionProcessingStateChanged\0"
    "enabled\0handleUnreadCountChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RSSWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  132,    2, 0x0a /* Public */,
       5,    1,  133,    2, 0x0a /* Public */,
       7,    0,  136,    2, 0x08 /* Private */,
       8,    0,  137,    2, 0x08 /* Private */,
       9,    0,  138,    2, 0x08 /* Private */,
      10,    1,  139,    2, 0x08 /* Private */,
      11,    1,  142,    2, 0x08 /* Private */,
      12,    0,  145,    2, 0x08 /* Private */,
      13,    0,  146,    2, 0x08 /* Private */,
      14,    0,  147,    2, 0x08 /* Private */,
      15,    1,  148,    2, 0x08 /* Private */,
      18,    2,  151,    2, 0x08 /* Private */,
      21,    0,  156,    2, 0x08 /* Private */,
      22,    0,  157,    2, 0x08 /* Private */,
      23,    0,  158,    2, 0x08 /* Private */,
      24,    0,  159,    2, 0x08 /* Private */,
      25,    0,  160,    2, 0x08 /* Private */,
      26,    0,  161,    2, 0x08 /* Private */,
      27,    0,  162,    2, 0x08 /* Private */,
      28,    0,  163,    2, 0x08 /* Private */,
      29,    1,  164,    2, 0x08 /* Private */,
      31,    0,  167,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   17,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,

       0        // eod
};

void RSSWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RSSWidget *_t = static_cast<RSSWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->unreadCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deleteSelectedItems(); break;
        case 2: _t->updateRefreshInterval((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->on_newFeedButton_clicked(); break;
        case 4: _t->refreshAllFeeds(); break;
        case 5: _t->on_markReadButton_clicked(); break;
        case 6: _t->displayRSSListMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->displayItemsListMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->renameSelectedRSSItem(); break;
        case 9: _t->refreshSelectedItems(); break;
        case 10: _t->copySelectedFeedsURL(); break;
        case 11: _t->handleCurrentFeedItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->handleCurrentArticleItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 13: _t->openSelectedArticlesUrls(); break;
        case 14: _t->downloadSelectedTorrents(); break;
        case 15: _t->saveSlidersPosition(); break;
        case 16: _t->restoreSlidersPosition(); break;
        case 17: _t->askNewFolder(); break;
        case 18: _t->saveFoldersOpenState(); break;
        case 19: _t->loadFoldersOpenState(); break;
        case 20: _t->on_rssDownloaderBtn_clicked(); break;
        case 21: _t->handleSessionProcessingStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->handleUnreadCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RSSWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RSSWidget::unreadCountUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RSSWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RSSWidget.data,
      qt_meta_data_RSSWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RSSWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RSSWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RSSWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RSSWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void RSSWidget::unreadCountUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
