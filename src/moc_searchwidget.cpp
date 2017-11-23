/****************************************************************************
** Meta object code from reading C++ file 'searchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/search/searchwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchWidget_t {
    QByteArrayData data[24];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchWidget_t qt_meta_stringdata_SearchWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchWidget"
QT_MOC_LITERAL(1, 13, 11), // "tab_changed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(4, 50, 25), // "on_downloadButton_clicked"
QT_MOC_LITERAL(5, 76, 22), // "on_goToDescBtn_clicked"
QT_MOC_LITERAL(6, 99, 21), // "on_copyURLBtn_clicked"
QT_MOC_LITERAL(7, 121, 24), // "on_pluginsButton_clicked"
QT_MOC_LITERAL(8, 146, 8), // "closeTab"
QT_MOC_LITERAL(9, 155, 5), // "index"
QT_MOC_LITERAL(10, 161, 19), // "appendSearchResults"
QT_MOC_LITERAL(11, 181, 19), // "QList<SearchResult>"
QT_MOC_LITERAL(12, 201, 7), // "results"
QT_MOC_LITERAL(13, 209, 13), // "searchStarted"
QT_MOC_LITERAL(14, 223, 14), // "searchFinished"
QT_MOC_LITERAL(15, 238, 9), // "cancelled"
QT_MOC_LITERAL(16, 248, 12), // "searchFailed"
QT_MOC_LITERAL(17, 261, 17), // "selectMultipleBox"
QT_MOC_LITERAL(18, 279, 19), // "addTorrentToSession"
QT_MOC_LITERAL(19, 299, 6), // "source"
QT_MOC_LITERAL(20, 306, 15), // "fillCatCombobox"
QT_MOC_LITERAL(21, 322, 18), // "fillPluginComboBox"
QT_MOC_LITERAL(22, 341, 16), // "selectActivePage"
QT_MOC_LITERAL(23, 358, 16) // "searchTextEdited"

    },
    "SearchWidget\0tab_changed\0\0"
    "on_searchButton_clicked\0"
    "on_downloadButton_clicked\0"
    "on_goToDescBtn_clicked\0on_copyURLBtn_clicked\0"
    "on_pluginsButton_clicked\0closeTab\0"
    "index\0appendSearchResults\0QList<SearchResult>\0"
    "results\0searchStarted\0searchFinished\0"
    "cancelled\0searchFailed\0selectMultipleBox\0"
    "addTorrentToSession\0source\0fillCatCombobox\0"
    "fillPluginComboBox\0selectActivePage\0"
    "searchTextEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       3,    0,  102,    2, 0x08 /* Private */,
       4,    0,  103,    2, 0x08 /* Private */,
       5,    0,  104,    2, 0x08 /* Private */,
       6,    0,  105,    2, 0x08 /* Private */,
       7,    0,  106,    2, 0x08 /* Private */,
       8,    1,  107,    2, 0x08 /* Private */,
      10,    1,  110,    2, 0x08 /* Private */,
      13,    0,  113,    2, 0x08 /* Private */,
      14,    1,  114,    2, 0x08 /* Private */,
      16,    0,  117,    2, 0x08 /* Private */,
      17,    1,  118,    2, 0x08 /* Private */,
      18,    1,  121,    2, 0x08 /* Private */,
      20,    0,  124,    2, 0x08 /* Private */,
      21,    0,  125,    2, 0x08 /* Private */,
      22,    0,  126,    2, 0x08 /* Private */,
      23,    1,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void SearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchWidget *_t = static_cast<SearchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tab_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_searchButton_clicked(); break;
        case 2: _t->on_downloadButton_clicked(); break;
        case 3: _t->on_goToDescBtn_clicked(); break;
        case 4: _t->on_copyURLBtn_clicked(); break;
        case 5: _t->on_pluginsButton_clicked(); break;
        case 6: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->appendSearchResults((*reinterpret_cast< const QList<SearchResult>(*)>(_a[1]))); break;
        case 8: _t->searchStarted(); break;
        case 9: _t->searchFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->searchFailed(); break;
        case 11: _t->selectMultipleBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->addTorrentToSession((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->fillCatCombobox(); break;
        case 14: _t->fillPluginComboBox(); break;
        case 15: _t->selectActivePage(); break;
        case 16: _t->searchTextEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SearchWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SearchWidget.data,
      qt_meta_data_SearchWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
