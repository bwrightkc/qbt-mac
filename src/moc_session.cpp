/****************************************************************************
** Meta object code from reading C++ file 'session.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/bittorrent/session.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'session.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BitTorrent__SessionSettingsEnums_t {
    QByteArrayData data[14];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitTorrent__SessionSettingsEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitTorrent__SessionSettingsEnums_t qt_meta_stringdata_BitTorrent__SessionSettingsEnums = {
    {
QT_MOC_LITERAL(0, 0, 32), // "BitTorrent::SessionSettingsEnums"
QT_MOC_LITERAL(1, 33, 16), // "ChokingAlgorithm"
QT_MOC_LITERAL(2, 50, 10), // "FixedSlots"
QT_MOC_LITERAL(3, 61, 9), // "RateBased"
QT_MOC_LITERAL(4, 71, 20), // "SeedChokingAlgorithm"
QT_MOC_LITERAL(5, 92, 10), // "RoundRobin"
QT_MOC_LITERAL(6, 103, 13), // "FastestUpload"
QT_MOC_LITERAL(7, 117, 9), // "AntiLeech"
QT_MOC_LITERAL(8, 127, 18), // "MixedModeAlgorithm"
QT_MOC_LITERAL(9, 146, 3), // "TCP"
QT_MOC_LITERAL(10, 150, 12), // "Proportional"
QT_MOC_LITERAL(11, 163, 10), // "BTProtocol"
QT_MOC_LITERAL(12, 174, 4), // "Both"
QT_MOC_LITERAL(13, 179, 3) // "UTP"

    },
    "BitTorrent::SessionSettingsEnums\0"
    "ChokingAlgorithm\0FixedSlots\0RateBased\0"
    "SeedChokingAlgorithm\0RoundRobin\0"
    "FastestUpload\0AntiLeech\0MixedModeAlgorithm\0"
    "TCP\0Proportional\0BTProtocol\0Both\0UTP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitTorrent__SessionSettingsEnums[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       4,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x2,    2,   30,
       4, 0x2,    3,   34,
       8, 0x2,    2,   40,
      11, 0x2,    3,   44,

 // enum data: key, value
       2, uint(BitTorrent::SessionSettingsEnums::ChokingAlgorithm::FixedSlots),
       3, uint(BitTorrent::SessionSettingsEnums::ChokingAlgorithm::RateBased),
       5, uint(BitTorrent::SessionSettingsEnums::SeedChokingAlgorithm::RoundRobin),
       6, uint(BitTorrent::SessionSettingsEnums::SeedChokingAlgorithm::FastestUpload),
       7, uint(BitTorrent::SessionSettingsEnums::SeedChokingAlgorithm::AntiLeech),
       9, uint(BitTorrent::SessionSettingsEnums::MixedModeAlgorithm::TCP),
      10, uint(BitTorrent::SessionSettingsEnums::MixedModeAlgorithm::Proportional),
      12, uint(BitTorrent::SessionSettingsEnums::BTProtocol::Both),
       9, uint(BitTorrent::SessionSettingsEnums::BTProtocol::TCP),
      13, uint(BitTorrent::SessionSettingsEnums::BTProtocol::UTP),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject BitTorrent::SessionSettingsEnums::staticMetaObject = {
    { nullptr, qt_meta_stringdata_BitTorrent__SessionSettingsEnums.data,
      qt_meta_data_BitTorrent__SessionSettingsEnums,  nullptr, nullptr, nullptr}
};

struct qt_meta_stringdata_BitTorrent__Session_t {
    QByteArrayData data[75];
    char stringdata0[1217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitTorrent__Session_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitTorrent__Session_t qt_meta_stringdata_BitTorrent__Session = {
    {
QT_MOC_LITERAL(0, 0, 19), // "BitTorrent::Session"
QT_MOC_LITERAL(1, 20, 12), // "statsUpdated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "torrentsUpdated"
QT_MOC_LITERAL(4, 50, 16), // "addTorrentFailed"
QT_MOC_LITERAL(5, 67, 5), // "error"
QT_MOC_LITERAL(6, 73, 12), // "torrentAdded"
QT_MOC_LITERAL(7, 86, 31), // "BitTorrent::TorrentHandle*const"
QT_MOC_LITERAL(8, 118, 7), // "torrent"
QT_MOC_LITERAL(9, 126, 10), // "torrentNew"
QT_MOC_LITERAL(10, 137, 23), // "torrentAboutToBeRemoved"
QT_MOC_LITERAL(11, 161, 13), // "torrentPaused"
QT_MOC_LITERAL(12, 175, 14), // "torrentResumed"
QT_MOC_LITERAL(13, 190, 15), // "torrentFinished"
QT_MOC_LITERAL(14, 206, 23), // "torrentFinishedChecking"
QT_MOC_LITERAL(15, 230, 22), // "torrentSavePathChanged"
QT_MOC_LITERAL(16, 253, 22), // "torrentCategoryChanged"
QT_MOC_LITERAL(17, 276, 11), // "oldCategory"
QT_MOC_LITERAL(18, 288, 15), // "torrentTagAdded"
QT_MOC_LITERAL(19, 304, 19), // "TorrentHandle*const"
QT_MOC_LITERAL(20, 324, 3), // "tag"
QT_MOC_LITERAL(21, 328, 17), // "torrentTagRemoved"
QT_MOC_LITERAL(22, 346, 24), // "torrentSavingModeChanged"
QT_MOC_LITERAL(23, 371, 19), // "allTorrentsFinished"
QT_MOC_LITERAL(24, 391, 14), // "metadataLoaded"
QT_MOC_LITERAL(25, 406, 23), // "BitTorrent::TorrentInfo"
QT_MOC_LITERAL(26, 430, 4), // "info"
QT_MOC_LITERAL(27, 435, 21), // "torrentMetadataLoaded"
QT_MOC_LITERAL(28, 457, 13), // "fullDiskError"
QT_MOC_LITERAL(29, 471, 3), // "msg"
QT_MOC_LITERAL(30, 475, 14), // "trackerSuccess"
QT_MOC_LITERAL(31, 490, 7), // "tracker"
QT_MOC_LITERAL(32, 498, 14), // "trackerWarning"
QT_MOC_LITERAL(33, 513, 12), // "trackerError"
QT_MOC_LITERAL(34, 526, 29), // "trackerAuthenticationRequired"
QT_MOC_LITERAL(35, 556, 32), // "recursiveTorrentDownloadPossible"
QT_MOC_LITERAL(36, 589, 21), // "speedLimitModeChanged"
QT_MOC_LITERAL(37, 611, 11), // "alternative"
QT_MOC_LITERAL(38, 623, 14), // "IPFilterParsed"
QT_MOC_LITERAL(39, 638, 9), // "ruleCount"
QT_MOC_LITERAL(40, 648, 13), // "trackersAdded"
QT_MOC_LITERAL(41, 662, 31), // "QList<BitTorrent::TrackerEntry>"
QT_MOC_LITERAL(42, 694, 8), // "trackers"
QT_MOC_LITERAL(43, 703, 15), // "trackersRemoved"
QT_MOC_LITERAL(44, 719, 15), // "trackersChanged"
QT_MOC_LITERAL(45, 735, 23), // "trackerlessStateChanged"
QT_MOC_LITERAL(46, 759, 11), // "trackerless"
QT_MOC_LITERAL(47, 771, 21), // "downloadFromUrlFailed"
QT_MOC_LITERAL(48, 793, 3), // "url"
QT_MOC_LITERAL(49, 797, 6), // "reason"
QT_MOC_LITERAL(50, 804, 23), // "downloadFromUrlFinished"
QT_MOC_LITERAL(51, 828, 13), // "categoryAdded"
QT_MOC_LITERAL(52, 842, 12), // "categoryName"
QT_MOC_LITERAL(53, 855, 15), // "categoryRemoved"
QT_MOC_LITERAL(54, 871, 27), // "subcategoriesSupportChanged"
QT_MOC_LITERAL(55, 899, 8), // "tagAdded"
QT_MOC_LITERAL(56, 908, 10), // "tagRemoved"
QT_MOC_LITERAL(57, 919, 17), // "configureDeferred"
QT_MOC_LITERAL(58, 937, 10), // "readAlerts"
QT_MOC_LITERAL(59, 948, 7), // "refresh"
QT_MOC_LITERAL(60, 956, 18), // "processShareLimits"
QT_MOC_LITERAL(61, 975, 18), // "generateResumeData"
QT_MOC_LITERAL(62, 994, 5), // "final"
QT_MOC_LITERAL(63, 1000, 20), // "handleIPFilterParsed"
QT_MOC_LITERAL(64, 1021, 19), // "handleIPFilterError"
QT_MOC_LITERAL(65, 1041, 22), // "handleDownloadFinished"
QT_MOC_LITERAL(66, 1064, 4), // "data"
QT_MOC_LITERAL(67, 1069, 20), // "handleDownloadFailed"
QT_MOC_LITERAL(68, 1090, 24), // "handleRedirectedToMagnet"
QT_MOC_LITERAL(69, 1115, 9), // "magnetUri"
QT_MOC_LITERAL(70, 1125, 25), // "networkOnlineStateChanged"
QT_MOC_LITERAL(71, 1151, 6), // "online"
QT_MOC_LITERAL(72, 1158, 26), // "networkConfigurationChange"
QT_MOC_LITERAL(73, 1185, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(74, 1207, 9) // "configure"

    },
    "BitTorrent::Session\0statsUpdated\0\0"
    "torrentsUpdated\0addTorrentFailed\0error\0"
    "torrentAdded\0BitTorrent::TorrentHandle*const\0"
    "torrent\0torrentNew\0torrentAboutToBeRemoved\0"
    "torrentPaused\0torrentResumed\0"
    "torrentFinished\0torrentFinishedChecking\0"
    "torrentSavePathChanged\0torrentCategoryChanged\0"
    "oldCategory\0torrentTagAdded\0"
    "TorrentHandle*const\0tag\0torrentTagRemoved\0"
    "torrentSavingModeChanged\0allTorrentsFinished\0"
    "metadataLoaded\0BitTorrent::TorrentInfo\0"
    "info\0torrentMetadataLoaded\0fullDiskError\0"
    "msg\0trackerSuccess\0tracker\0trackerWarning\0"
    "trackerError\0trackerAuthenticationRequired\0"
    "recursiveTorrentDownloadPossible\0"
    "speedLimitModeChanged\0alternative\0"
    "IPFilterParsed\0ruleCount\0trackersAdded\0"
    "QList<BitTorrent::TrackerEntry>\0"
    "trackers\0trackersRemoved\0trackersChanged\0"
    "trackerlessStateChanged\0trackerless\0"
    "downloadFromUrlFailed\0url\0reason\0"
    "downloadFromUrlFinished\0categoryAdded\0"
    "categoryName\0categoryRemoved\0"
    "subcategoriesSupportChanged\0tagAdded\0"
    "tagRemoved\0configureDeferred\0readAlerts\0"
    "refresh\0processShareLimits\0"
    "generateResumeData\0final\0handleIPFilterParsed\0"
    "handleIPFilterError\0handleDownloadFinished\0"
    "data\0handleDownloadFailed\0"
    "handleRedirectedToMagnet\0magnetUri\0"
    "networkOnlineStateChanged\0online\0"
    "networkConfigurationChange\0"
    "QNetworkConfiguration\0configure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitTorrent__Session[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      37,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  269,    2, 0x06 /* Public */,
       3,    0,  270,    2, 0x06 /* Public */,
       4,    1,  271,    2, 0x06 /* Public */,
       6,    1,  274,    2, 0x06 /* Public */,
       9,    1,  277,    2, 0x06 /* Public */,
      10,    1,  280,    2, 0x06 /* Public */,
      11,    1,  283,    2, 0x06 /* Public */,
      12,    1,  286,    2, 0x06 /* Public */,
      13,    1,  289,    2, 0x06 /* Public */,
      14,    1,  292,    2, 0x06 /* Public */,
      15,    1,  295,    2, 0x06 /* Public */,
      16,    2,  298,    2, 0x06 /* Public */,
      18,    2,  303,    2, 0x06 /* Public */,
      21,    2,  308,    2, 0x06 /* Public */,
      22,    1,  313,    2, 0x06 /* Public */,
      23,    0,  316,    2, 0x06 /* Public */,
      24,    1,  317,    2, 0x06 /* Public */,
      27,    1,  320,    2, 0x06 /* Public */,
      28,    2,  323,    2, 0x06 /* Public */,
      30,    2,  328,    2, 0x06 /* Public */,
      32,    2,  333,    2, 0x06 /* Public */,
      33,    2,  338,    2, 0x06 /* Public */,
      34,    1,  343,    2, 0x06 /* Public */,
      35,    1,  346,    2, 0x06 /* Public */,
      36,    1,  349,    2, 0x06 /* Public */,
      38,    2,  352,    2, 0x06 /* Public */,
      40,    2,  357,    2, 0x06 /* Public */,
      43,    2,  362,    2, 0x06 /* Public */,
      44,    1,  367,    2, 0x06 /* Public */,
      45,    2,  370,    2, 0x06 /* Public */,
      47,    2,  375,    2, 0x06 /* Public */,
      50,    1,  380,    2, 0x06 /* Public */,
      51,    1,  383,    2, 0x06 /* Public */,
      53,    1,  386,    2, 0x06 /* Public */,
      54,    0,  389,    2, 0x06 /* Public */,
      55,    1,  390,    2, 0x06 /* Public */,
      56,    1,  393,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      57,    0,  396,    2, 0x08 /* Private */,
      58,    0,  397,    2, 0x08 /* Private */,
      59,    0,  398,    2, 0x08 /* Private */,
      60,    0,  399,    2, 0x08 /* Private */,
      61,    1,  400,    2, 0x08 /* Private */,
      61,    0,  403,    2, 0x28 /* Private | MethodCloned */,
      63,    1,  404,    2, 0x08 /* Private */,
      64,    0,  407,    2, 0x08 /* Private */,
      65,    2,  408,    2, 0x08 /* Private */,
      67,    2,  413,    2, 0x08 /* Private */,
      68,    2,  418,    2, 0x08 /* Private */,
      70,    1,  423,    2, 0x08 /* Private */,
      72,    1,  426,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      74,    0,  429,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,    8,   20,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,    8,   20,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   29,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   31,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   31,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   31,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    5,   39,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 41,    8,   42,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 41,    8,   42,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   48,   49,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   48,   66,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   48,   49,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   48,   69,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, 0x80000000 | 73,    2,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void BitTorrent::Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Session *_t = static_cast<Session *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statsUpdated(); break;
        case 1: _t->torrentsUpdated(); break;
        case 2: _t->addTorrentFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->torrentAdded((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 4: _t->torrentNew((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 5: _t->torrentAboutToBeRemoved((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 6: _t->torrentPaused((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 7: _t->torrentResumed((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 8: _t->torrentFinished((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 9: _t->torrentFinishedChecking((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 10: _t->torrentSavePathChanged((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 11: _t->torrentCategoryChanged((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->torrentTagAdded((*reinterpret_cast< TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->torrentTagRemoved((*reinterpret_cast< TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->torrentSavingModeChanged((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 15: _t->allTorrentsFinished(); break;
        case 16: _t->metadataLoaded((*reinterpret_cast< const BitTorrent::TorrentInfo(*)>(_a[1]))); break;
        case 17: _t->torrentMetadataLoaded((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 18: _t->fullDiskError((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->trackerSuccess((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->trackerWarning((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->trackerError((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->trackerAuthenticationRequired((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 23: _t->recursiveTorrentDownloadPossible((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 24: _t->speedLimitModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->IPFilterParsed((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->trackersAdded((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QList<BitTorrent::TrackerEntry>(*)>(_a[2]))); break;
        case 27: _t->trackersRemoved((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< const QList<BitTorrent::TrackerEntry>(*)>(_a[2]))); break;
        case 28: _t->trackersChanged((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1]))); break;
        case 29: _t->trackerlessStateChanged((*reinterpret_cast< BitTorrent::TorrentHandle*const(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->downloadFromUrlFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 31: _t->downloadFromUrlFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->categoryAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->categoryRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->subcategoriesSupportChanged(); break;
        case 35: _t->tagAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->tagRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->configureDeferred(); break;
        case 38: _t->readAlerts(); break;
        case 39: _t->refresh(); break;
        case 40: _t->processShareLimits(); break;
        case 41: _t->generateResumeData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->generateResumeData(); break;
        case 43: _t->handleIPFilterParsed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->handleIPFilterError(); break;
        case 45: _t->handleDownloadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 46: _t->handleDownloadFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 47: _t->handleRedirectedToMagnet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 48: _t->networkOnlineStateChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 49: _t->networkConfigurationChange((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 50: _t->configure(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::statsUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentsUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::addTorrentFailed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentNew)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentAboutToBeRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentPaused)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentResumed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentFinished)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentFinishedChecking)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentSavePathChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentCategoryChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Session::*)(TorrentHandle * const , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentTagAdded)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Session::*)(TorrentHandle * const , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentTagRemoved)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentSavingModeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::allTorrentsFinished)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Session::*)(const BitTorrent::TorrentInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::metadataLoaded)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentMetadataLoaded)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::fullDiskError)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerSuccess)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerWarning)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerError)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerAuthenticationRequired)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::recursiveTorrentDownloadPossible)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Session::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::speedLimitModeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Session::*)(bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::IPFilterParsed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const , const QList<BitTorrent::TrackerEntry> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackersAdded)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const , const QList<BitTorrent::TrackerEntry> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackersRemoved)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackersChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Session::*)(BitTorrent::TorrentHandle * const , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerlessStateChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::downloadFromUrlFailed)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::downloadFromUrlFinished)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::categoryAdded)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::categoryRemoved)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::subcategoriesSupportChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::tagAdded)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::tagRemoved)) {
                *result = 36;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BitTorrent::Session::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BitTorrent__Session.data,
      qt_meta_data_BitTorrent__Session,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BitTorrent::Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitTorrent::Session::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BitTorrent__Session.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BitTorrent::Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void BitTorrent::Session::statsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BitTorrent::Session::torrentsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BitTorrent::Session::addTorrentFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BitTorrent::Session::torrentAdded(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BitTorrent::Session::torrentNew(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BitTorrent::Session::torrentAboutToBeRemoved(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BitTorrent::Session::torrentPaused(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BitTorrent::Session::torrentResumed(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BitTorrent::Session::torrentFinished(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void BitTorrent::Session::torrentFinishedChecking(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void BitTorrent::Session::torrentSavePathChanged(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void BitTorrent::Session::torrentCategoryChanged(BitTorrent::TorrentHandle * const _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void BitTorrent::Session::torrentTagAdded(TorrentHandle * const _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void BitTorrent::Session::torrentTagRemoved(TorrentHandle * const _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void BitTorrent::Session::torrentSavingModeChanged(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void BitTorrent::Session::allTorrentsFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void BitTorrent::Session::metadataLoaded(const BitTorrent::TorrentInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void BitTorrent::Session::torrentMetadataLoaded(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void BitTorrent::Session::fullDiskError(BitTorrent::TorrentHandle * const _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void BitTorrent::Session::trackerSuccess(BitTorrent::TorrentHandle * const _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void BitTorrent::Session::trackerWarning(BitTorrent::TorrentHandle * const _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void BitTorrent::Session::trackerError(BitTorrent::TorrentHandle * const _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void BitTorrent::Session::trackerAuthenticationRequired(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void BitTorrent::Session::recursiveTorrentDownloadPossible(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void BitTorrent::Session::speedLimitModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void BitTorrent::Session::IPFilterParsed(bool _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void BitTorrent::Session::trackersAdded(BitTorrent::TorrentHandle * const _t1, const QList<BitTorrent::TrackerEntry> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void BitTorrent::Session::trackersRemoved(BitTorrent::TorrentHandle * const _t1, const QList<BitTorrent::TrackerEntry> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void BitTorrent::Session::trackersChanged(BitTorrent::TorrentHandle * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void BitTorrent::Session::trackerlessStateChanged(BitTorrent::TorrentHandle * const _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void BitTorrent::Session::downloadFromUrlFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void BitTorrent::Session::downloadFromUrlFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void BitTorrent::Session::categoryAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void BitTorrent::Session::categoryRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void BitTorrent::Session::subcategoriesSupportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void BitTorrent::Session::tagAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void BitTorrent::Session::tagRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
