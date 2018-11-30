/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[88];
    char stringdata0[1902];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "showFilterContextMenu"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "balloonClicked"
QT_MOC_LITERAL(4, 49, 13), // "writeSettings"
QT_MOC_LITERAL(5, 63, 12), // "readSettings"
QT_MOC_LITERAL(6, 76, 13), // "fullDiskError"
QT_MOC_LITERAL(7, 90, 31), // "BitTorrent::TorrentHandle*const"
QT_MOC_LITERAL(8, 122, 7), // "torrent"
QT_MOC_LITERAL(9, 130, 3), // "msg"
QT_MOC_LITERAL(10, 134, 28), // "handleDownloadFromUrlFailure"
QT_MOC_LITERAL(11, 163, 10), // "tabChanged"
QT_MOC_LITERAL(12, 174, 6), // "newTab"
QT_MOC_LITERAL(13, 181, 20), // "defineUILockPassword"
QT_MOC_LITERAL(14, 202, 19), // "clearUILockPassword"
QT_MOC_LITERAL(15, 222, 8), // "unlockUI"
QT_MOC_LITERAL(16, 231, 14), // "notifyOfUpdate"
QT_MOC_LITERAL(17, 246, 22), // "showConnectionSettings"
QT_MOC_LITERAL(18, 269, 14), // "minimizeWindow"
QT_MOC_LITERAL(19, 284, 23), // "createKeyboardShortcuts"
QT_MOC_LITERAL(20, 308, 18), // "displayTransferTab"
QT_MOC_LITERAL(21, 327, 16), // "displaySearchTab"
QT_MOC_LITERAL(22, 344, 13), // "displayRSSTab"
QT_MOC_LITERAL(23, 358, 22), // "displayExecutionLogTab"
QT_MOC_LITERAL(24, 381, 17), // "focusSearchFilter"
QT_MOC_LITERAL(25, 399, 9), // "updateGUI"
QT_MOC_LITERAL(26, 409, 15), // "loadPreferences"
QT_MOC_LITERAL(27, 425, 16), // "configureSession"
QT_MOC_LITERAL(28, 442, 25), // "addUnauthenticatedTracker"
QT_MOC_LITERAL(29, 468, 41), // "QPair<BitTorrent::TorrentHand..."
QT_MOC_LITERAL(30, 510, 7), // "tracker"
QT_MOC_LITERAL(31, 518, 16), // "addTorrentFailed"
QT_MOC_LITERAL(32, 535, 5), // "error"
QT_MOC_LITERAL(33, 541, 10), // "torrentNew"
QT_MOC_LITERAL(34, 552, 15), // "finishedTorrent"
QT_MOC_LITERAL(35, 568, 39), // "askRecursiveTorrentDownloadCo..."
QT_MOC_LITERAL(36, 608, 12), // "optionsSaved"
QT_MOC_LITERAL(37, 621, 25), // "handleUpdateCheckFinished"
QT_MOC_LITERAL(38, 647, 15), // "updateAvailable"
QT_MOC_LITERAL(39, 663, 10), // "newVersion"
QT_MOC_LITERAL(40, 674, 13), // "invokedByUser"
QT_MOC_LITERAL(41, 688, 23), // "toggleAlternativeSpeeds"
QT_MOC_LITERAL(42, 712, 21), // "addToolbarContextMenu"
QT_MOC_LITERAL(43, 734, 13), // "manageCookies"
QT_MOC_LITERAL(44, 748, 29), // "trackerAuthenticationRequired"
QT_MOC_LITERAL(45, 778, 19), // "downloadFromURLList"
QT_MOC_LITERAL(46, 798, 7), // "urlList"
QT_MOC_LITERAL(47, 806, 18), // "updateAltSpeedsBtn"
QT_MOC_LITERAL(48, 825, 11), // "alternative"
QT_MOC_LITERAL(49, 837, 16), // "updateNbTorrents"
QT_MOC_LITERAL(50, 854, 27), // "handleRSSUnreadCountUpdated"
QT_MOC_LITERAL(51, 882, 5), // "count"
QT_MOC_LITERAL(52, 888, 31), // "on_actionSearchWidget_triggered"
QT_MOC_LITERAL(53, 920, 28), // "on_actionRSSReader_triggered"
QT_MOC_LITERAL(54, 949, 34), // "on_actionSpeedInTitleBar_trig..."
QT_MOC_LITERAL(55, 984, 29), // "on_actionTopToolBar_triggered"
QT_MOC_LITERAL(56, 1014, 32), // "on_actionShowStatusbar_triggered"
QT_MOC_LITERAL(57, 1047, 30), // "on_actionDonateMoney_triggered"
QT_MOC_LITERAL(58, 1078, 32), // "on_actionExecutionLogs_triggered"
QT_MOC_LITERAL(59, 1111, 7), // "checked"
QT_MOC_LITERAL(60, 1119, 33), // "on_actionNormalMessages_trigg..."
QT_MOC_LITERAL(61, 1153, 38), // "on_actionInformationMessages_..."
QT_MOC_LITERAL(62, 1192, 34), // "on_actionWarningMessages_trig..."
QT_MOC_LITERAL(63, 1227, 35), // "on_actionCriticalMessages_tri..."
QT_MOC_LITERAL(64, 1263, 25), // "on_actionAutoExit_toggled"
QT_MOC_LITERAL(65, 1289, 28), // "on_actionAutoSuspend_toggled"
QT_MOC_LITERAL(66, 1318, 30), // "on_actionAutoHibernate_toggled"
QT_MOC_LITERAL(67, 1349, 29), // "on_actionAutoShutdown_toggled"
QT_MOC_LITERAL(68, 1379, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(69, 1404, 29), // "on_actionStatistics_triggered"
QT_MOC_LITERAL(70, 1434, 32), // "on_actionCreateTorrent_triggered"
QT_MOC_LITERAL(71, 1467, 26), // "on_actionOptions_triggered"
QT_MOC_LITERAL(72, 1494, 39), // "on_actionSetGlobalUploadLimit..."
QT_MOC_LITERAL(73, 1534, 41), // "on_actionSetGlobalDownloadLim..."
QT_MOC_LITERAL(74, 1576, 32), // "on_actionDocumentation_triggered"
QT_MOC_LITERAL(75, 1609, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(76, 1633, 34), // "on_actionDownloadFromURL_trig..."
QT_MOC_LITERAL(77, 1668, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(78, 1692, 23), // "on_actionLock_triggered"
QT_MOC_LITERAL(79, 1716, 26), // "updatePowerManagementState"
QT_MOC_LITERAL(80, 1743, 18), // "checkProgramUpdate"
QT_MOC_LITERAL(81, 1762, 20), // "toolbarMenuRequested"
QT_MOC_LITERAL(82, 1783, 16), // "toolbarIconsOnly"
QT_MOC_LITERAL(83, 1800, 15), // "toolbarTextOnly"
QT_MOC_LITERAL(84, 1816, 17), // "toolbarTextBeside"
QT_MOC_LITERAL(85, 1834, 16), // "toolbarTextUnder"
QT_MOC_LITERAL(86, 1851, 19), // "toolbarFollowSystem"
QT_MOC_LITERAL(87, 1871, 30) // "on_actionCloseWindow_triggered"

    },
    "MainWindow\0showFilterContextMenu\0\0"
    "balloonClicked\0writeSettings\0readSettings\0"
    "fullDiskError\0BitTorrent::TorrentHandle*const\0"
    "torrent\0msg\0handleDownloadFromUrlFailure\0"
    "tabChanged\0newTab\0defineUILockPassword\0"
    "clearUILockPassword\0unlockUI\0"
    "notifyOfUpdate\0showConnectionSettings\0"
    "minimizeWindow\0createKeyboardShortcuts\0"
    "displayTransferTab\0displaySearchTab\0"
    "displayRSSTab\0displayExecutionLogTab\0"
    "focusSearchFilter\0updateGUI\0loadPreferences\0"
    "configureSession\0addUnauthenticatedTracker\0"
    "QPair<BitTorrent::TorrentHandle*,QString>\0"
    "tracker\0addTorrentFailed\0error\0"
    "torrentNew\0finishedTorrent\0"
    "askRecursiveTorrentDownloadConfirmation\0"
    "optionsSaved\0handleUpdateCheckFinished\0"
    "updateAvailable\0newVersion\0invokedByUser\0"
    "toggleAlternativeSpeeds\0addToolbarContextMenu\0"
    "manageCookies\0trackerAuthenticationRequired\0"
    "downloadFromURLList\0urlList\0"
    "updateAltSpeedsBtn\0alternative\0"
    "updateNbTorrents\0handleRSSUnreadCountUpdated\0"
    "count\0on_actionSearchWidget_triggered\0"
    "on_actionRSSReader_triggered\0"
    "on_actionSpeedInTitleBar_triggered\0"
    "on_actionTopToolBar_triggered\0"
    "on_actionShowStatusbar_triggered\0"
    "on_actionDonateMoney_triggered\0"
    "on_actionExecutionLogs_triggered\0"
    "checked\0on_actionNormalMessages_triggered\0"
    "on_actionInformationMessages_triggered\0"
    "on_actionWarningMessages_triggered\0"
    "on_actionCriticalMessages_triggered\0"
    "on_actionAutoExit_toggled\0"
    "on_actionAutoSuspend_toggled\0"
    "on_actionAutoHibernate_toggled\0"
    "on_actionAutoShutdown_toggled\0"
    "on_actionAbout_triggered\0"
    "on_actionStatistics_triggered\0"
    "on_actionCreateTorrent_triggered\0"
    "on_actionOptions_triggered\0"
    "on_actionSetGlobalUploadLimit_triggered\0"
    "on_actionSetGlobalDownloadLimit_triggered\0"
    "on_actionDocumentation_triggered\0"
    "on_actionOpen_triggered\0"
    "on_actionDownloadFromURL_triggered\0"
    "on_actionExit_triggered\0on_actionLock_triggered\0"
    "updatePowerManagementState\0"
    "checkProgramUpdate\0toolbarMenuRequested\0"
    "toolbarIconsOnly\0toolbarTextOnly\0"
    "toolbarTextBeside\0toolbarTextUnder\0"
    "toolbarFollowSystem\0on_actionCloseWindow_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  374,    2, 0x08 /* Private */,
       3,    0,  377,    2, 0x08 /* Private */,
       4,    0,  378,    2, 0x08 /* Private */,
       5,    0,  379,    2, 0x08 /* Private */,
       6,    2,  380,    2, 0x08 /* Private */,
      10,    2,  385,    2, 0x08 /* Private */,
      11,    1,  390,    2, 0x08 /* Private */,
      13,    0,  393,    2, 0x08 /* Private */,
      14,    0,  394,    2, 0x08 /* Private */,
      15,    0,  395,    2, 0x08 /* Private */,
      16,    1,  396,    2, 0x08 /* Private */,
      17,    0,  399,    2, 0x08 /* Private */,
      18,    0,  400,    2, 0x08 /* Private */,
      19,    0,  401,    2, 0x08 /* Private */,
      20,    0,  402,    2, 0x08 /* Private */,
      21,    0,  403,    2, 0x08 /* Private */,
      22,    0,  404,    2, 0x08 /* Private */,
      23,    0,  405,    2, 0x08 /* Private */,
      24,    0,  406,    2, 0x08 /* Private */,
      25,    0,  407,    2, 0x08 /* Private */,
      26,    1,  408,    2, 0x08 /* Private */,
      26,    0,  411,    2, 0x28 /* Private | MethodCloned */,
      28,    1,  412,    2, 0x08 /* Private */,
      31,    1,  415,    2, 0x08 /* Private */,
      33,    1,  418,    2, 0x08 /* Private */,
      34,    1,  421,    2, 0x08 /* Private */,
      35,    1,  424,    2, 0x08 /* Private */,
      36,    0,  427,    2, 0x08 /* Private */,
      37,    3,  428,    2, 0x08 /* Private */,
      41,    0,  435,    2, 0x08 /* Private */,
      42,    0,  436,    2, 0x08 /* Private */,
      43,    0,  437,    2, 0x08 /* Private */,
      44,    1,  438,    2, 0x08 /* Private */,
      45,    1,  441,    2, 0x08 /* Private */,
      47,    1,  444,    2, 0x08 /* Private */,
      49,    0,  447,    2, 0x08 /* Private */,
      50,    1,  448,    2, 0x08 /* Private */,
      52,    0,  451,    2, 0x08 /* Private */,
      53,    0,  452,    2, 0x08 /* Private */,
      54,    0,  453,    2, 0x08 /* Private */,
      55,    0,  454,    2, 0x08 /* Private */,
      56,    0,  455,    2, 0x08 /* Private */,
      57,    0,  456,    2, 0x08 /* Private */,
      58,    1,  457,    2, 0x08 /* Private */,
      60,    1,  460,    2, 0x08 /* Private */,
      61,    1,  463,    2, 0x08 /* Private */,
      62,    1,  466,    2, 0x08 /* Private */,
      63,    1,  469,    2, 0x08 /* Private */,
      64,    1,  472,    2, 0x08 /* Private */,
      65,    1,  475,    2, 0x08 /* Private */,
      66,    1,  478,    2, 0x08 /* Private */,
      67,    1,  481,    2, 0x08 /* Private */,
      68,    0,  484,    2, 0x08 /* Private */,
      69,    0,  485,    2, 0x08 /* Private */,
      70,    0,  486,    2, 0x08 /* Private */,
      71,    0,  487,    2, 0x08 /* Private */,
      72,    0,  488,    2, 0x08 /* Private */,
      73,    0,  489,    2, 0x08 /* Private */,
      74,    0,  490,    2, 0x08 /* Private */,
      75,    0,  491,    2, 0x08 /* Private */,
      76,    0,  492,    2, 0x08 /* Private */,
      77,    0,  493,    2, 0x08 /* Private */,
      78,    0,  494,    2, 0x08 /* Private */,
      79,    0,  495,    2, 0x08 /* Private */,
      80,    0,  496,    2, 0x08 /* Private */,
      81,    1,  497,    2, 0x08 /* Private */,
      82,    0,  500,    2, 0x08 /* Private */,
      83,    0,  501,    2, 0x08 /* Private */,
      84,    0,  502,    2, 0x08 /* Private */,
      85,    0,  503,    2, 0x08 /* Private */,
      86,    0,  504,    2, 0x08 /* Private */,
      87,    0,  505,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   38,   39,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QStringList,   46,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
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
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showFilterContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->balloonClicked(); break;
        case 2: _t->writeSettings(); break;
        case 3: _t->readSettings(); break;
        case 4: _t->fullDiskError((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->handleDownloadFromUrlFailure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->defineUILockPassword(); break;
        case 8: _t->clearUILockPassword(); break;
        case 9: { bool _r = _t->unlockUI();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->notifyOfUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->showConnectionSettings(); break;
        case 12: _t->minimizeWindow(); break;
        case 13: _t->createKeyboardShortcuts(); break;
        case 14: _t->displayTransferTab(); break;
        case 15: _t->displaySearchTab(); break;
        case 16: _t->displayRSSTab(); break;
        case 17: _t->displayExecutionLogTab(); break;
        case 18: _t->focusSearchFilter(); break;
        case 19: _t->updateGUI(); break;
        case 20: _t->loadPreferences((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->loadPreferences(); break;
        case 22: _t->addUnauthenticatedTracker((*reinterpret_cast< const QPair<BitTorrent::TorrentHandle*,QString>(*)>(_a[1]))); break;
        case 23: _t->addTorrentFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->torrentNew((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 25: _t->finishedTorrent((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 26: _t->askRecursiveTorrentDownloadConfirmation((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 27: _t->optionsSaved(); break;
        case 28: _t->handleUpdateCheckFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 29: _t->toggleAlternativeSpeeds(); break;
        case 30: _t->addToolbarContextMenu(); break;
        case 31: _t->manageCookies(); break;
        case 32: _t->trackerAuthenticationRequired((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 33: _t->downloadFromURLList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 34: _t->updateAltSpeedsBtn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->updateNbTorrents(); break;
        case 36: _t->handleRSSUnreadCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_actionSearchWidget_triggered(); break;
        case 38: _t->on_actionRSSReader_triggered(); break;
        case 39: _t->on_actionSpeedInTitleBar_triggered(); break;
        case 40: _t->on_actionTopToolBar_triggered(); break;
        case 41: _t->on_actionShowStatusbar_triggered(); break;
        case 42: _t->on_actionDonateMoney_triggered(); break;
        case 43: _t->on_actionExecutionLogs_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_actionNormalMessages_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->on_actionInformationMessages_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_actionWarningMessages_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->on_actionCriticalMessages_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->on_actionAutoExit_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->on_actionAutoSuspend_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->on_actionAutoHibernate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->on_actionAutoShutdown_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_actionAbout_triggered(); break;
        case 53: _t->on_actionStatistics_triggered(); break;
        case 54: _t->on_actionCreateTorrent_triggered(); break;
        case 55: _t->on_actionOptions_triggered(); break;
        case 56: _t->on_actionSetGlobalUploadLimit_triggered(); break;
        case 57: _t->on_actionSetGlobalDownloadLimit_triggered(); break;
        case 58: _t->on_actionDocumentation_triggered(); break;
        case 59: _t->on_actionOpen_triggered(); break;
        case 60: _t->on_actionDownloadFromURL_triggered(); break;
        case 61: _t->on_actionExit_triggered(); break;
        case 62: _t->on_actionLock_triggered(); break;
        case 63: _t->updatePowerManagementState(); break;
        case 64: _t->checkProgramUpdate(); break;
        case 65: _t->toolbarMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 66: _t->toolbarIconsOnly(); break;
        case 67: _t->toolbarTextOnly(); break;
        case 68: _t->toolbarTextBeside(); break;
        case 69: _t->toolbarTextUnder(); break;
        case 70: _t->toolbarFollowSystem(); break;
        case 71: _t->on_actionCloseWindow_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 72;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
