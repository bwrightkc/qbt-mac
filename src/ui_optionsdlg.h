/********************************************************************************
** Form generated from reading UI file 'optionsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDLG_H
#define UI_OPTIONSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fspathedit.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *hsplitter;
    QListWidget *tabSelection;
    QStackedWidget *tabOption;
    QWidget *tabBehaviorPage;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *UISettingsBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *hboxLayout;
    QLabel *label_9;
    QComboBox *comboI18n;
    QLabel *lbl_i18n_info_2;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *confirmDeletion;
    QCheckBox *checkAltRowColors;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkHideZero;
    QComboBox *comboHideZero;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout_3;
    QLabel *lblDlList_2;
    QComboBox *actionTorrentDlOnDblClBox;
    QLabel *lblUploadList;
    QComboBox *actionTorrentFnOnDblClBox;
    QGroupBox *systrayBox;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *checkStartup;
    QCheckBox *checkShowSplash;
    QCheckBox *checkStartMinimized;
    QCheckBox *checkProgramExitConfirm;
    QCheckBox *checkProgramAutoExitConfirm;
    QGroupBox *checkShowSystray;
    QVBoxLayout *verticalLayout_22;
    QCheckBox *checkMinimizeToSysTray;
    QCheckBox *checkCloseToSystray;
    QFormLayout *formLayout_4;
    QLabel *label_trayIconStyle;
    QComboBox *comboTrayIcon;
    QGroupBox *groupFileAssociation;
    QVBoxLayout *verticalLayout_28;
    QCheckBox *checkAssociateTorrents;
    QCheckBox *checkAssociateMagnetLinks;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_16;
    QCheckBox *checkPreventFromSuspend;
    QGroupBox *checkFileLog;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    FileSystemPathLineEdit *textFileLogPath;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkFileLogBackup;
    QSpinBox *spinFileLogSize;
    QSpacerItem *horizontalSpacer_100;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkFileLogDelete;
    QSpinBox *spinFileLogAge;
    QComboBox *comboFileLogAgeType;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabDownloadsPage;
    QVBoxLayout *verticalLayout_13;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *torrentAdditionBox;
    QVBoxLayout *torrentAdditionBoxLayout;
    QGroupBox *checkAdditionDialog;
    QVBoxLayout *verticalLayout_18;
    QCheckBox *checkAdditionDialogFront;
    QCheckBox *checkCreateSubfolder;
    QCheckBox *checkStartPaused;
    QGroupBox *deleteTorrentBox;
    QVBoxLayout *deleteTorrentBoxLayout;
    QCheckBox *deleteCancelledTorrentBox;
    QHBoxLayout *deleteTorrentWarningLayout;
    QLabel *deleteTorrentWarningIcon;
    QLabel *deleteTorrentWarningLabel;
    QGroupBox *groupSavingManagement;
    QVBoxLayout *groupSavingManagementLayout;
    QGridLayout *gridLayout_3;
    QLabel *label_40;
    QHBoxLayout *horizontalLayout_70;
    QComboBox *comboSavingMode;
    QSpacerItem *horizontalSpacer_160;
    QLabel *labelTorrentCategoryChanged;
    QHBoxLayout *horizontalLayout_14;
    QComboBox *comboTorrentCategoryChanged;
    QSpacerItem *horizontalSpacer_17;
    QLabel *labelCategoryDefaultPathChanged;
    QHBoxLayout *horizontalLayout_15;
    QComboBox *comboCategoryDefaultPathChanged;
    QSpacerItem *horizontalSpacer_18;
    QLabel *labelCategoryChanged;
    QHBoxLayout *horizontalLayout_17;
    QComboBox *comboCategoryChanged;
    QSpacerItem *horizontalSpacer_19;
    QCheckBox *checkUseSubcategories;
    QGridLayout *gridLayout_4;
    FileSystemPathLineEdit *textTempPath;
    QCheckBox *checkExportDirFin;
    QLabel *labelSavePath;
    QCheckBox *checkExportDir;
    QCheckBox *checkTempFolder;
    FileSystemPathLineEdit *textExportDirFin;
    FileSystemPathLineEdit *textSavePath;
    FileSystemPathLineEdit *textExportDir;
    QCheckBox *checkPreallocateAll;
    QCheckBox *checkAppendqB;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_16;
    QTreeView *scanFoldersView;
    QVBoxLayout *verticalLayout_37;
    QPushButton *addScanFolderButton;
    QPushButton *removeScanFolderButton;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupMailNotification;
    QVBoxLayout *verticalLayout_171;
    QGridLayout *gridLayout_9;
    QLineEdit *dest_email_txt;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *smtp_server_txt;
    QLineEdit *senderEmailTxt;
    QLabel *label_25;
    QCheckBox *checkSmtpSSL;
    QGroupBox *groupMailNotifAuth;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *mailNotifUsername;
    QLabel *label_8;
    QLineEdit *mailNotifPassword;
    QGroupBox *autoRunBox;
    QVBoxLayout *verticalLayout_19;
    FileSystemPathLineEdit *autoRun_txt;
    QLabel *autoRun_param;
    QWidget *tabConnectionPage;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_24;
    QComboBox *comboProtocol;
    QGroupBox *ListeningPortBox;
    QVBoxLayout *listeningPortLayout;
    QHBoxLayout *listeningPortLayout2;
    QLabel *lbl_ports;
    QSpinBox *spinPort;
    QPushButton *randomButton;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkUPnP;
    QCheckBox *checkRandomPort;
    QGroupBox *nbConnecBox;
    QGridLayout *gridLayout;
    QSpinBox *spinMaxUploadsPerTorrent;
    QCheckBox *checkMaxConnecsPerTorrent;
    QCheckBox *checkMaxConnecs;
    QSpinBox *spinMaxConnec;
    QSpinBox *spinMaxConnecPerTorrent;
    QCheckBox *checkMaxUploadsPerTorrent;
    QCheckBox *checkMaxUploads;
    QSpinBox *spinMaxUploads;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupProxy;
    QVBoxLayout *verticalLayout_29;
    QHBoxLayout *proxyTypeLayout;
    QLabel *ProxyType_lbl;
    QComboBox *comboProxyType;
    QLabel *lblProxyIP;
    QLineEdit *textProxyIP;
    QLabel *lblProxyPort;
    QSpinBox *spinProxyPort;
    QCheckBox *checkProxyPeerConnecs;
    QCheckBox *checkForceProxy;
    QCheckBox *isProxyOnlyForTorrents;
    QGroupBox *checkProxyAuth;
    QVBoxLayout *verticalLayout_24;
    QGridLayout *gridLayout_12;
    QLabel *lblProxyUsername;
    QLineEdit *textProxyUsername;
    QLabel *lblProxyPassword;
    QLineEdit *textProxyPassword;
    QLabel *label_23;
    QGroupBox *groupIPFilter;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkIPFilter;
    FileSystemPathLineEdit *textFilterPath;
    QToolButton *IpFilterRefreshBtn;
    QPushButton *banListButton;
    QCheckBox *checkIpFilterTrackers;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabSpeedPage;
    QVBoxLayout *verticalLayout_34;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *rateLimitBox;
    QGridLayout *rateLimitBoxLayout;
    QSpinBox *spinUploadLimit;
    QCheckBox *checkUploadLimit;
    QLabel *label_10;
    QSpinBox *spinDownloadLimit;
    QLabel *label_13;
    QLabel *label_5;
    QCheckBox *checkDownloadLimit;
    QSpacerItem *horizontalSpacer;
    QGroupBox *altRateLimitBox;
    QGridLayout *gridLayout_6;
    QGroupBox *check_schedule;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QTimeEdit *schedule_to;
    QLabel *label_17;
    QTimeEdit *schedule_from;
    QLabel *label_18;
    QComboBox *schedule_days;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_16;
    QCheckBox *checkUploadLimitAlt;
    QCheckBox *checkDownloadLimitAlt;
    QSpinBox *spinUploadLimitAlt;
    QSpinBox *spinDownloadLimitAlt;
    QLabel *label_14;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *rateLimitsGroupBox;
    QVBoxLayout *verticalLayout_30;
    QCheckBox *checkLimituTPConnections;
    QCheckBox *checkLimitTransportOverhead;
    QCheckBox *checkLimitLocalPeerRate;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabBitTorrentPage;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *AddBTFeaturesBox;
    QVBoxLayout *verticalLayout_14;
    QCheckBox *checkDHT;
    QCheckBox *checkPeX;
    QCheckBox *checkLSD;
    QHBoxLayout *hboxLayout1;
    QLabel *lbl_encryption;
    QComboBox *comboEncryption;
    QSpacerItem *spacerItem1;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkAnonymousMode;
    QLabel *label_anonymous;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *checkEnableQueueing;
    QGridLayout *gridLayout_2;
    QLabel *label_max_active_dl;
    QSpinBox *spinMaxActiveDownloads;
    QLabel *label_max_active_up;
    QSpinBox *spinMaxActiveUploads;
    QLabel *maxActiveTorrents_lbl;
    QSpinBox *spinMaxActiveTorrents;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *checkIgnoreSlowTorrentsForQueueing;
    QGroupBox *ratioBox;
    QGridLayout *gridLayout_91;
    QCheckBox *checkMaxRatio;
    QSpacerItem *horizontalSpacer_161;
    QLabel *label;
    QComboBox *comboRatioLimitAct;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_171;
    QSpacerItem *horizontalSpacer_191;
    QSpinBox *spinMaxSeedingMinutes;
    QDoubleSpinBox *spinMaxRatio;
    QLabel *label_11;
    QCheckBox *checkMaxSeedingMinutes;
    QGroupBox *checkEnableAddTrackers;
    QGridLayout *gridLayout_16;
    QPlainTextEdit *textTrackers;
    QSpacerItem *verticalSpacer_8;
    QWidget *tabRSSPage;
    QVBoxLayout *verticalLayout_25;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *groupRSSReader;
    QVBoxLayout *verticalLayout_26;
    QCheckBox *checkRSSEnable;
    QGridLayout *gridLayout_5;
    QLabel *label_111;
    QLabel *label_12;
    QSpinBox *spinRSSRefreshInterval;
    QSpinBox *spinRSSMaxArticlesPerFeed;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupRSSAutoDownloader;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *checkRSSAutoDownloaderEnable;
    QPushButton *btnEditRules;
    QSpacerItem *verticalSpacer_5;
    QWidget *tabWebuiPage;
    QVBoxLayout *tabWebuiPageLayout;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *checkWebUi;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblWebUiAddress;
    QLineEdit *textWebUiAddress;
    QLabel *lblWebUiPort;
    QSpinBox *spinWebUiPort;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelServerDomains;
    QLineEdit *textServerDomains;
    QCheckBox *checkWebUIUPnP;
    QGroupBox *checkWebUiHttps;
    QGridLayout *gridLayout_11;
    QLabel *lblSslCertStatus;
    QLabel *lblWebUiCrt;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnWebUiCrt;
    QSpacerItem *horizontalSpacer_12;
    QLabel *lblSslKeyStatus;
    QLabel *lblWebUiKey;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnWebUiKey;
    QSpacerItem *horizontalSpacer_13;
    QLabel *lblWebUIInfo;
    QGroupBox *groupWebUiAuth;
    QGridLayout *gridLayout_10;
    QLineEdit *textWebUiUsername;
    QLineEdit *textWebUiPassword;
    QCheckBox *checkBypassLocalAuth;
    QCheckBox *checkBypassAuthSubnetWhitelist;
    QPushButton *IPSubnetWhitelistButton;
    QLabel *lblWebUiUsername;
    QLabel *lblWebUiPassword;
    QGroupBox *checkDynDNS;
    QFormLayout *formLayout_5;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboDNSService;
    QPushButton *registerDNSBtn;
    QLabel *label_20;
    QLineEdit *domainNameTxt;
    QLabel *label_21;
    QLineEdit *DNSUsernameTxt;
    QLabel *label_22;
    QLineEdit *DNSPasswordTxt;
    QSpacerItem *verticalSpacer;
    QWidget *tabAdvancedPage;
    QVBoxLayout *advPageLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QStringLiteral("OptionsDialog"));
        OptionsDialog->resize(779, 591);
        verticalLayout_3 = new QVBoxLayout(OptionsDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        hsplitter = new QSplitter(OptionsDialog);
        hsplitter->setObjectName(QStringLiteral("hsplitter"));
        hsplitter->setOrientation(Qt::Horizontal);
        hsplitter->setChildrenCollapsible(false);
        tabSelection = new QListWidget(hsplitter);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        tabSelection->setObjectName(QStringLiteral("tabSelection"));
        tabSelection->setLayoutDirection(Qt::LeftToRight);
        tabSelection->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabSelection->setMovement(QListView::Static);
        tabSelection->setFlow(QListView::TopToBottom);
        tabSelection->setProperty("isWrapping", QVariant(false));
        tabSelection->setResizeMode(QListView::Adjust);
        tabSelection->setViewMode(QListView::IconMode);
        hsplitter->addWidget(tabSelection);
        tabOption = new QStackedWidget(hsplitter);
        tabOption->setObjectName(QStringLiteral("tabOption"));
        tabBehaviorPage = new QWidget();
        tabBehaviorPage->setObjectName(QStringLiteral("tabBehaviorPage"));
        verticalLayout_10 = new QVBoxLayout(tabBehaviorPage);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(tabBehaviorPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 501, 893));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        UISettingsBox = new QGroupBox(scrollAreaWidgetContents);
        UISettingsBox->setObjectName(QStringLiteral("UISettingsBox"));
        verticalLayout_8 = new QVBoxLayout(UISettingsBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_9 = new QLabel(UISettingsBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        hboxLayout->addWidget(label_9);

        comboI18n = new QComboBox(UISettingsBox);
        comboI18n->setObjectName(QStringLiteral("comboI18n"));
        comboI18n->setMinimumSize(QSize(0, 0));
        comboI18n->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboI18n->setModelColumn(0);

        hboxLayout->addWidget(comboI18n);

        lbl_i18n_info_2 = new QLabel(UISettingsBox);
        lbl_i18n_info_2->setObjectName(QStringLiteral("lbl_i18n_info_2"));
        QFont font;
        font.setItalic(true);
        lbl_i18n_info_2->setFont(font);
        lbl_i18n_info_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout->addWidget(lbl_i18n_info_2);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout_8->addLayout(hboxLayout);


        verticalLayout_9->addWidget(UISettingsBox);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        confirmDeletion = new QCheckBox(groupBox_4);
        confirmDeletion->setObjectName(QStringLiteral("confirmDeletion"));
        confirmDeletion->setChecked(true);

        verticalLayout_4->addWidget(confirmDeletion);

        checkAltRowColors = new QCheckBox(groupBox_4);
        checkAltRowColors->setObjectName(QStringLiteral("checkAltRowColors"));
        checkAltRowColors->setChecked(true);

        verticalLayout_4->addWidget(checkAltRowColors);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkHideZero = new QCheckBox(groupBox_4);
        checkHideZero->setObjectName(QStringLiteral("checkHideZero"));

        horizontalLayout->addWidget(checkHideZero);

        comboHideZero = new QComboBox(groupBox_4);
        comboHideZero->setObjectName(QStringLiteral("comboHideZero"));

        horizontalLayout->addWidget(comboHideZero);

        horizontalSpacer_10 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        groupBox_7->setFont(font1);
        groupBox_7->setFlat(true);
        formLayout_3 = new QFormLayout(groupBox_7);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        lblDlList_2 = new QLabel(groupBox_7);
        lblDlList_2->setObjectName(QStringLiteral("lblDlList_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lblDlList_2);

        actionTorrentDlOnDblClBox = new QComboBox(groupBox_7);
        actionTorrentDlOnDblClBox->setObjectName(QStringLiteral("actionTorrentDlOnDblClBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(actionTorrentDlOnDblClBox->sizePolicy().hasHeightForWidth());
        actionTorrentDlOnDblClBox->setSizePolicy(sizePolicy1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, actionTorrentDlOnDblClBox);

        lblUploadList = new QLabel(groupBox_7);
        lblUploadList->setObjectName(QStringLiteral("lblUploadList"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, lblUploadList);

        actionTorrentFnOnDblClBox = new QComboBox(groupBox_7);
        actionTorrentFnOnDblClBox->setObjectName(QStringLiteral("actionTorrentFnOnDblClBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, actionTorrentFnOnDblClBox);


        verticalLayout_4->addWidget(groupBox_7);


        verticalLayout_9->addWidget(groupBox_4);

        systrayBox = new QGroupBox(scrollAreaWidgetContents);
        systrayBox->setObjectName(QStringLiteral("systrayBox"));
        verticalLayout_12 = new QVBoxLayout(systrayBox);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        checkStartup = new QCheckBox(systrayBox);
        checkStartup->setObjectName(QStringLiteral("checkStartup"));

        verticalLayout_12->addWidget(checkStartup);

        checkShowSplash = new QCheckBox(systrayBox);
        checkShowSplash->setObjectName(QStringLiteral("checkShowSplash"));
        checkShowSplash->setChecked(true);

        verticalLayout_12->addWidget(checkShowSplash);

        checkStartMinimized = new QCheckBox(systrayBox);
        checkStartMinimized->setObjectName(QStringLiteral("checkStartMinimized"));

        verticalLayout_12->addWidget(checkStartMinimized);

        checkProgramExitConfirm = new QCheckBox(systrayBox);
        checkProgramExitConfirm->setObjectName(QStringLiteral("checkProgramExitConfirm"));
        checkProgramExitConfirm->setChecked(true);

        verticalLayout_12->addWidget(checkProgramExitConfirm);

        checkProgramAutoExitConfirm = new QCheckBox(systrayBox);
        checkProgramAutoExitConfirm->setObjectName(QStringLiteral("checkProgramAutoExitConfirm"));
        checkProgramAutoExitConfirm->setChecked(true);

        verticalLayout_12->addWidget(checkProgramAutoExitConfirm);

        checkShowSystray = new QGroupBox(systrayBox);
        checkShowSystray->setObjectName(QStringLiteral("checkShowSystray"));
        checkShowSystray->setCheckable(true);
        verticalLayout_22 = new QVBoxLayout(checkShowSystray);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        checkMinimizeToSysTray = new QCheckBox(checkShowSystray);
        checkMinimizeToSysTray->setObjectName(QStringLiteral("checkMinimizeToSysTray"));
        checkMinimizeToSysTray->setChecked(false);

        verticalLayout_22->addWidget(checkMinimizeToSysTray);

        checkCloseToSystray = new QCheckBox(checkShowSystray);
        checkCloseToSystray->setObjectName(QStringLiteral("checkCloseToSystray"));

        verticalLayout_22->addWidget(checkCloseToSystray);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_trayIconStyle = new QLabel(checkShowSystray);
        label_trayIconStyle->setObjectName(QStringLiteral("label_trayIconStyle"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_trayIconStyle);

        comboTrayIcon = new QComboBox(checkShowSystray);
        comboTrayIcon->setObjectName(QStringLiteral("comboTrayIcon"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, comboTrayIcon);


        verticalLayout_22->addLayout(formLayout_4);


        verticalLayout_12->addWidget(checkShowSystray);

        groupFileAssociation = new QGroupBox(systrayBox);
        groupFileAssociation->setObjectName(QStringLiteral("groupFileAssociation"));
        verticalLayout_28 = new QVBoxLayout(groupFileAssociation);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        checkAssociateTorrents = new QCheckBox(groupFileAssociation);
        checkAssociateTorrents->setObjectName(QStringLiteral("checkAssociateTorrents"));

        verticalLayout_28->addWidget(checkAssociateTorrents);

        checkAssociateMagnetLinks = new QCheckBox(groupFileAssociation);
        checkAssociateMagnetLinks->setObjectName(QStringLiteral("checkAssociateMagnetLinks"));

        verticalLayout_28->addWidget(checkAssociateMagnetLinks);


        verticalLayout_12->addWidget(groupFileAssociation);


        verticalLayout_9->addWidget(systrayBox);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_16 = new QVBoxLayout(groupBox);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        checkPreventFromSuspend = new QCheckBox(groupBox);
        checkPreventFromSuspend->setObjectName(QStringLiteral("checkPreventFromSuspend"));

        verticalLayout_16->addWidget(checkPreventFromSuspend);


        verticalLayout_9->addWidget(groupBox);

        checkFileLog = new QGroupBox(scrollAreaWidgetContents);
        checkFileLog->setObjectName(QStringLiteral("checkFileLog"));
        checkFileLog->setCheckable(true);
        checkFileLog->setChecked(true);
        verticalLayout_11 = new QVBoxLayout(checkFileLog);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(checkFileLog);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(label_4);

        textFileLogPath = new FileSystemPathLineEdit(checkFileLog);
        textFileLogPath->setObjectName(QStringLiteral("textFileLogPath"));

        horizontalLayout_7->addWidget(textFileLogPath);


        verticalLayout_11->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        checkFileLogBackup = new QCheckBox(checkFileLog);
        checkFileLogBackup->setObjectName(QStringLiteral("checkFileLogBackup"));

        horizontalLayout_8->addWidget(checkFileLogBackup);

        spinFileLogSize = new QSpinBox(checkFileLog);
        spinFileLogSize->setObjectName(QStringLiteral("spinFileLogSize"));
        spinFileLogSize->setMinimum(1);
        spinFileLogSize->setMaximum(1000);
        spinFileLogSize->setValue(10);

        horizontalLayout_8->addWidget(spinFileLogSize);

        horizontalSpacer_100 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_100);


        verticalLayout_11->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        checkFileLogDelete = new QCheckBox(checkFileLog);
        checkFileLogDelete->setObjectName(QStringLiteral("checkFileLogDelete"));

        horizontalLayout_9->addWidget(checkFileLogDelete);

        spinFileLogAge = new QSpinBox(checkFileLog);
        spinFileLogAge->setObjectName(QStringLiteral("spinFileLogAge"));
        spinFileLogAge->setMinimum(1);
        spinFileLogAge->setMaximum(365);
        spinFileLogAge->setValue(6);

        horizontalLayout_9->addWidget(spinFileLogAge);

        comboFileLogAgeType = new QComboBox(checkFileLog);
        comboFileLogAgeType->setObjectName(QStringLiteral("comboFileLogAgeType"));

        horizontalLayout_9->addWidget(comboFileLogAgeType);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_16);


        verticalLayout_11->addLayout(horizontalLayout_9);


        verticalLayout_9->addWidget(checkFileLog);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_10->addWidget(scrollArea);

        tabOption->addWidget(tabBehaviorPage);
        tabDownloadsPage = new QWidget();
        tabDownloadsPage->setObjectName(QStringLiteral("tabDownloadsPage"));
        verticalLayout_13 = new QVBoxLayout(tabDownloadsPage);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(tabDownloadsPage);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 591, 1138));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        torrentAdditionBox = new QGroupBox(scrollAreaWidgetContents_2);
        torrentAdditionBox->setObjectName(QStringLiteral("torrentAdditionBox"));
        torrentAdditionBoxLayout = new QVBoxLayout(torrentAdditionBox);
        torrentAdditionBoxLayout->setObjectName(QStringLiteral("torrentAdditionBoxLayout"));
        checkAdditionDialog = new QGroupBox(torrentAdditionBox);
        checkAdditionDialog->setObjectName(QStringLiteral("checkAdditionDialog"));
        checkAdditionDialog->setCheckable(true);
        verticalLayout_18 = new QVBoxLayout(checkAdditionDialog);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(-1, -1, -1, 0);
        checkAdditionDialogFront = new QCheckBox(checkAdditionDialog);
        checkAdditionDialogFront->setObjectName(QStringLiteral("checkAdditionDialogFront"));
        checkAdditionDialogFront->setChecked(true);

        verticalLayout_18->addWidget(checkAdditionDialogFront);


        torrentAdditionBoxLayout->addWidget(checkAdditionDialog);

        checkCreateSubfolder = new QCheckBox(torrentAdditionBox);
        checkCreateSubfolder->setObjectName(QStringLiteral("checkCreateSubfolder"));
        checkCreateSubfolder->setChecked(true);

        torrentAdditionBoxLayout->addWidget(checkCreateSubfolder);

        checkStartPaused = new QCheckBox(torrentAdditionBox);
        checkStartPaused->setObjectName(QStringLiteral("checkStartPaused"));

        torrentAdditionBoxLayout->addWidget(checkStartPaused);

        deleteTorrentBox = new QGroupBox(torrentAdditionBox);
        deleteTorrentBox->setObjectName(QStringLiteral("deleteTorrentBox"));
        deleteTorrentBox->setCheckable(true);
        deleteTorrentBox->setChecked(false);
        deleteTorrentBoxLayout = new QVBoxLayout(deleteTorrentBox);
        deleteTorrentBoxLayout->setObjectName(QStringLiteral("deleteTorrentBoxLayout"));
        deleteCancelledTorrentBox = new QCheckBox(deleteTorrentBox);
        deleteCancelledTorrentBox->setObjectName(QStringLiteral("deleteCancelledTorrentBox"));

        deleteTorrentBoxLayout->addWidget(deleteCancelledTorrentBox);

        deleteTorrentWarningLayout = new QHBoxLayout();
        deleteTorrentWarningLayout->setObjectName(QStringLiteral("deleteTorrentWarningLayout"));
        deleteTorrentWarningIcon = new QLabel(deleteTorrentBox);
        deleteTorrentWarningIcon->setObjectName(QStringLiteral("deleteTorrentWarningIcon"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(deleteTorrentWarningIcon->sizePolicy().hasHeightForWidth());
        deleteTorrentWarningIcon->setSizePolicy(sizePolicy3);
        deleteTorrentWarningIcon->setText(QStringLiteral("<>"));

        deleteTorrentWarningLayout->addWidget(deleteTorrentWarningIcon);

        deleteTorrentWarningLabel = new QLabel(deleteTorrentBox);
        deleteTorrentWarningLabel->setObjectName(QStringLiteral("deleteTorrentWarningLabel"));

        deleteTorrentWarningLayout->addWidget(deleteTorrentWarningLabel);


        deleteTorrentBoxLayout->addLayout(deleteTorrentWarningLayout);


        torrentAdditionBoxLayout->addWidget(deleteTorrentBox);


        verticalLayout->addWidget(torrentAdditionBox);

        groupSavingManagement = new QGroupBox(scrollAreaWidgetContents_2);
        groupSavingManagement->setObjectName(QStringLiteral("groupSavingManagement"));
        groupSavingManagementLayout = new QVBoxLayout(groupSavingManagement);
        groupSavingManagementLayout->setObjectName(QStringLiteral("groupSavingManagementLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_40 = new QLabel(groupSavingManagement);
        label_40->setObjectName(QStringLiteral("label_40"));

        gridLayout_3->addWidget(label_40, 0, 0, 1, 1);

        horizontalLayout_70 = new QHBoxLayout();
        horizontalLayout_70->setSpacing(10);
        horizontalLayout_70->setObjectName(QStringLiteral("horizontalLayout_70"));
        comboSavingMode = new QComboBox(groupSavingManagement);
        comboSavingMode->setObjectName(QStringLiteral("comboSavingMode"));

        horizontalLayout_70->addWidget(comboSavingMode);

        horizontalSpacer_160 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_70->addItem(horizontalSpacer_160);


        gridLayout_3->addLayout(horizontalLayout_70, 0, 1, 1, 1);

        labelTorrentCategoryChanged = new QLabel(groupSavingManagement);
        labelTorrentCategoryChanged->setObjectName(QStringLiteral("labelTorrentCategoryChanged"));

        gridLayout_3->addWidget(labelTorrentCategoryChanged, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        comboTorrentCategoryChanged = new QComboBox(groupSavingManagement);
        comboTorrentCategoryChanged->setObjectName(QStringLiteral("comboTorrentCategoryChanged"));

        horizontalLayout_14->addWidget(comboTorrentCategoryChanged);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_17);


        gridLayout_3->addLayout(horizontalLayout_14, 1, 1, 1, 1);

        labelCategoryDefaultPathChanged = new QLabel(groupSavingManagement);
        labelCategoryDefaultPathChanged->setObjectName(QStringLiteral("labelCategoryDefaultPathChanged"));

        gridLayout_3->addWidget(labelCategoryDefaultPathChanged, 2, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        comboCategoryDefaultPathChanged = new QComboBox(groupSavingManagement);
        comboCategoryDefaultPathChanged->setObjectName(QStringLiteral("comboCategoryDefaultPathChanged"));

        horizontalLayout_15->addWidget(comboCategoryDefaultPathChanged);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_18);


        gridLayout_3->addLayout(horizontalLayout_15, 2, 1, 1, 1);

        labelCategoryChanged = new QLabel(groupSavingManagement);
        labelCategoryChanged->setObjectName(QStringLiteral("labelCategoryChanged"));

        gridLayout_3->addWidget(labelCategoryChanged, 3, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        comboCategoryChanged = new QComboBox(groupSavingManagement);
        comboCategoryChanged->setObjectName(QStringLiteral("comboCategoryChanged"));

        horizontalLayout_17->addWidget(comboCategoryChanged);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_19);


        gridLayout_3->addLayout(horizontalLayout_17, 3, 1, 1, 1);


        groupSavingManagementLayout->addLayout(gridLayout_3);

        checkUseSubcategories = new QCheckBox(groupSavingManagement);
        checkUseSubcategories->setObjectName(QStringLiteral("checkUseSubcategories"));

        groupSavingManagementLayout->addWidget(checkUseSubcategories);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textTempPath = new FileSystemPathLineEdit(groupSavingManagement);
        textTempPath->setObjectName(QStringLiteral("textTempPath"));

        gridLayout_4->addWidget(textTempPath, 1, 1, 1, 1);

        checkExportDirFin = new QCheckBox(groupSavingManagement);
        checkExportDirFin->setObjectName(QStringLiteral("checkExportDirFin"));

        gridLayout_4->addWidget(checkExportDirFin, 3, 0, 1, 1);

        labelSavePath = new QLabel(groupSavingManagement);
        labelSavePath->setObjectName(QStringLiteral("labelSavePath"));

        gridLayout_4->addWidget(labelSavePath, 0, 0, 1, 1);

        checkExportDir = new QCheckBox(groupSavingManagement);
        checkExportDir->setObjectName(QStringLiteral("checkExportDir"));

        gridLayout_4->addWidget(checkExportDir, 2, 0, 1, 1);

        checkTempFolder = new QCheckBox(groupSavingManagement);
        checkTempFolder->setObjectName(QStringLiteral("checkTempFolder"));

        gridLayout_4->addWidget(checkTempFolder, 1, 0, 1, 1);

        textExportDirFin = new FileSystemPathLineEdit(groupSavingManagement);
        textExportDirFin->setObjectName(QStringLiteral("textExportDirFin"));

        gridLayout_4->addWidget(textExportDirFin, 3, 1, 1, 1);

        textSavePath = new FileSystemPathLineEdit(groupSavingManagement);
        textSavePath->setObjectName(QStringLiteral("textSavePath"));

        gridLayout_4->addWidget(textSavePath, 0, 1, 1, 1);

        textExportDir = new FileSystemPathLineEdit(groupSavingManagement);
        textExportDir->setObjectName(QStringLiteral("textExportDir"));

        gridLayout_4->addWidget(textExportDir, 2, 1, 1, 1);


        groupSavingManagementLayout->addLayout(gridLayout_4);

        checkPreallocateAll = new QCheckBox(groupSavingManagement);
        checkPreallocateAll->setObjectName(QStringLiteral("checkPreallocateAll"));

        groupSavingManagementLayout->addWidget(checkPreallocateAll);

        checkAppendqB = new QCheckBox(groupSavingManagement);
        checkAppendqB->setObjectName(QStringLiteral("checkAppendqB"));

        groupSavingManagementLayout->addWidget(checkAppendqB);


        verticalLayout->addWidget(groupSavingManagement);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_38 = new QVBoxLayout(groupBox_2);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        scanFoldersView = new QTreeView(groupBox_2);
        scanFoldersView->setObjectName(QStringLiteral("scanFoldersView"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(scanFoldersView->sizePolicy().hasHeightForWidth());
        scanFoldersView->setSizePolicy(sizePolicy4);
        scanFoldersView->setMinimumSize(QSize(250, 150));
        scanFoldersView->setEditTriggers(QAbstractItemView::AllEditTriggers);
        scanFoldersView->setSelectionMode(QAbstractItemView::SingleSelection);
        scanFoldersView->setSelectionBehavior(QAbstractItemView::SelectRows);
        scanFoldersView->setTextElideMode(Qt::ElideNone);
        scanFoldersView->setRootIsDecorated(false);
        scanFoldersView->header()->setDefaultSectionSize(80);
        scanFoldersView->header()->setStretchLastSection(false);

        horizontalLayout_16->addWidget(scanFoldersView);

        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        addScanFolderButton = new QPushButton(groupBox_2);
        addScanFolderButton->setObjectName(QStringLiteral("addScanFolderButton"));

        verticalLayout_37->addWidget(addScanFolderButton);

        removeScanFolderButton = new QPushButton(groupBox_2);
        removeScanFolderButton->setObjectName(QStringLiteral("removeScanFolderButton"));
        removeScanFolderButton->setEnabled(false);

        verticalLayout_37->addWidget(removeScanFolderButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_37->addItem(verticalSpacer_6);


        horizontalLayout_16->addLayout(verticalLayout_37);


        verticalLayout_38->addLayout(horizontalLayout_16);


        verticalLayout->addWidget(groupBox_2);

        groupMailNotification = new QGroupBox(scrollAreaWidgetContents_2);
        groupMailNotification->setObjectName(QStringLiteral("groupMailNotification"));
        groupMailNotification->setCheckable(true);
        groupMailNotification->setChecked(false);
        verticalLayout_171 = new QVBoxLayout(groupMailNotification);
        verticalLayout_171->setObjectName(QStringLiteral("verticalLayout_171"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        dest_email_txt = new QLineEdit(groupMailNotification);
        dest_email_txt->setObjectName(QStringLiteral("dest_email_txt"));

        gridLayout_9->addWidget(dest_email_txt, 1, 1, 1, 1);

        label_2 = new QLabel(groupMailNotification);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_9->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupMailNotification);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_9->addWidget(label_3, 2, 0, 1, 1);

        smtp_server_txt = new QLineEdit(groupMailNotification);
        smtp_server_txt->setObjectName(QStringLiteral("smtp_server_txt"));

        gridLayout_9->addWidget(smtp_server_txt, 2, 1, 1, 1);

        senderEmailTxt = new QLineEdit(groupMailNotification);
        senderEmailTxt->setObjectName(QStringLiteral("senderEmailTxt"));

        gridLayout_9->addWidget(senderEmailTxt, 0, 1, 1, 1);

        label_25 = new QLabel(groupMailNotification);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_9->addWidget(label_25, 0, 0, 1, 1);


        verticalLayout_171->addLayout(gridLayout_9);

        checkSmtpSSL = new QCheckBox(groupMailNotification);
        checkSmtpSSL->setObjectName(QStringLiteral("checkSmtpSSL"));

        verticalLayout_171->addWidget(checkSmtpSSL);

        groupMailNotifAuth = new QGroupBox(groupMailNotification);
        groupMailNotifAuth->setObjectName(QStringLiteral("groupMailNotifAuth"));
        groupMailNotifAuth->setCheckable(true);
        groupMailNotifAuth->setChecked(false);
        formLayout_2 = new QFormLayout(groupMailNotifAuth);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_7 = new QLabel(groupMailNotifAuth);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        mailNotifUsername = new QLineEdit(groupMailNotifAuth);
        mailNotifUsername->setObjectName(QStringLiteral("mailNotifUsername"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mailNotifUsername);

        label_8 = new QLabel(groupMailNotifAuth);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        mailNotifPassword = new QLineEdit(groupMailNotifAuth);
        mailNotifPassword->setObjectName(QStringLiteral("mailNotifPassword"));
        mailNotifPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mailNotifPassword);


        verticalLayout_171->addWidget(groupMailNotifAuth);


        verticalLayout->addWidget(groupMailNotification);

        autoRunBox = new QGroupBox(scrollAreaWidgetContents_2);
        autoRunBox->setObjectName(QStringLiteral("autoRunBox"));
        autoRunBox->setCheckable(true);
        autoRunBox->setChecked(false);
        verticalLayout_19 = new QVBoxLayout(autoRunBox);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        autoRun_txt = new FileSystemPathLineEdit(autoRunBox);
        autoRun_txt->setObjectName(QStringLiteral("autoRun_txt"));

        verticalLayout_19->addWidget(autoRun_txt);

        autoRun_param = new QLabel(autoRunBox);
        autoRun_param->setObjectName(QStringLiteral("autoRun_param"));
        autoRun_param->setWordWrap(true);

        verticalLayout_19->addWidget(autoRun_param);


        verticalLayout->addWidget(autoRunBox);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_13->addWidget(scrollArea_2);

        tabOption->addWidget(tabDownloadsPage);
        tabConnectionPage = new QWidget();
        tabConnectionPage->setObjectName(QStringLiteral("tabConnectionPage"));
        verticalLayout_6 = new QVBoxLayout(tabConnectionPage);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(tabConnectionPage);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 501, 745));
        verticalLayout_20 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_24 = new QLabel(scrollAreaWidgetContents_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy3.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy3);

        horizontalLayout_12->addWidget(label_24);

        comboProtocol = new QComboBox(scrollAreaWidgetContents_3);
        comboProtocol->addItem(QString());
        comboProtocol->addItem(QStringLiteral("TCP"));
        comboProtocol->addItem(QString::fromUtf8("\316\274TP"));
        comboProtocol->setObjectName(QStringLiteral("comboProtocol"));

        horizontalLayout_12->addWidget(comboProtocol);


        verticalLayout_20->addLayout(horizontalLayout_12);

        ListeningPortBox = new QGroupBox(scrollAreaWidgetContents_3);
        ListeningPortBox->setObjectName(QStringLiteral("ListeningPortBox"));
        listeningPortLayout = new QVBoxLayout(ListeningPortBox);
        listeningPortLayout->setObjectName(QStringLiteral("listeningPortLayout"));
        listeningPortLayout2 = new QHBoxLayout();
        listeningPortLayout2->setObjectName(QStringLiteral("listeningPortLayout2"));
        lbl_ports = new QLabel(ListeningPortBox);
        lbl_ports->setObjectName(QStringLiteral("lbl_ports"));

        listeningPortLayout2->addWidget(lbl_ports);

        spinPort = new QSpinBox(ListeningPortBox);
        spinPort->setObjectName(QStringLiteral("spinPort"));
        spinPort->setMinimum(1);
        spinPort->setMaximum(65535);
        spinPort->setValue(8999);

        listeningPortLayout2->addWidget(spinPort);

        randomButton = new QPushButton(ListeningPortBox);
        randomButton->setObjectName(QStringLiteral("randomButton"));

        listeningPortLayout2->addWidget(randomButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        listeningPortLayout2->addItem(horizontalSpacer_4);


        listeningPortLayout->addLayout(listeningPortLayout2);

        checkUPnP = new QCheckBox(ListeningPortBox);
        checkUPnP->setObjectName(QStringLiteral("checkUPnP"));
        checkUPnP->setChecked(true);

        listeningPortLayout->addWidget(checkUPnP);

        checkRandomPort = new QCheckBox(ListeningPortBox);
        checkRandomPort->setObjectName(QStringLiteral("checkRandomPort"));

        listeningPortLayout->addWidget(checkRandomPort);


        verticalLayout_20->addWidget(ListeningPortBox);

        nbConnecBox = new QGroupBox(scrollAreaWidgetContents_3);
        nbConnecBox->setObjectName(QStringLiteral("nbConnecBox"));
        gridLayout = new QGridLayout(nbConnecBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinMaxUploadsPerTorrent = new QSpinBox(nbConnecBox);
        spinMaxUploadsPerTorrent->setObjectName(QStringLiteral("spinMaxUploadsPerTorrent"));
        spinMaxUploadsPerTorrent->setMaximum(500);
        spinMaxUploadsPerTorrent->setValue(4);

        gridLayout->addWidget(spinMaxUploadsPerTorrent, 3, 1, 1, 1);

        checkMaxConnecsPerTorrent = new QCheckBox(nbConnecBox);
        checkMaxConnecsPerTorrent->setObjectName(QStringLiteral("checkMaxConnecsPerTorrent"));
        checkMaxConnecsPerTorrent->setChecked(true);

        gridLayout->addWidget(checkMaxConnecsPerTorrent, 1, 0, 1, 1);

        checkMaxConnecs = new QCheckBox(nbConnecBox);
        checkMaxConnecs->setObjectName(QStringLiteral("checkMaxConnecs"));
        checkMaxConnecs->setChecked(true);

        gridLayout->addWidget(checkMaxConnecs, 0, 0, 1, 1);

        spinMaxConnec = new QSpinBox(nbConnecBox);
        spinMaxConnec->setObjectName(QStringLiteral("spinMaxConnec"));
        spinMaxConnec->setEnabled(true);
        spinMaxConnec->setMinimum(2);
        spinMaxConnec->setMaximum(2000);
        spinMaxConnec->setValue(500);

        gridLayout->addWidget(spinMaxConnec, 0, 1, 1, 1);

        spinMaxConnecPerTorrent = new QSpinBox(nbConnecBox);
        spinMaxConnecPerTorrent->setObjectName(QStringLiteral("spinMaxConnecPerTorrent"));
        spinMaxConnecPerTorrent->setMinimum(2);
        spinMaxConnecPerTorrent->setMaximum(2000);
        spinMaxConnecPerTorrent->setValue(100);

        gridLayout->addWidget(spinMaxConnecPerTorrent, 1, 1, 1, 1);

        checkMaxUploadsPerTorrent = new QCheckBox(nbConnecBox);
        checkMaxUploadsPerTorrent->setObjectName(QStringLiteral("checkMaxUploadsPerTorrent"));
        checkMaxUploadsPerTorrent->setChecked(false);

        gridLayout->addWidget(checkMaxUploadsPerTorrent, 3, 0, 1, 1);

        checkMaxUploads = new QCheckBox(nbConnecBox);
        checkMaxUploads->setObjectName(QStringLiteral("checkMaxUploads"));
        checkMaxUploads->setChecked(false);

        gridLayout->addWidget(checkMaxUploads, 2, 0, 1, 1);

        spinMaxUploads = new QSpinBox(nbConnecBox);
        spinMaxUploads->setObjectName(QStringLiteral("spinMaxUploads"));
        spinMaxUploads->setMaximum(2000);
        spinMaxUploads->setValue(8);

        gridLayout->addWidget(spinMaxUploads, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout_20->addWidget(nbConnecBox);

        groupProxy = new QGroupBox(scrollAreaWidgetContents_3);
        groupProxy->setObjectName(QStringLiteral("groupProxy"));
        groupProxy->setEnabled(true);
        verticalLayout_29 = new QVBoxLayout(groupProxy);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        proxyTypeLayout = new QHBoxLayout();
        proxyTypeLayout->setObjectName(QStringLiteral("proxyTypeLayout"));
        ProxyType_lbl = new QLabel(groupProxy);
        ProxyType_lbl->setObjectName(QStringLiteral("ProxyType_lbl"));

        proxyTypeLayout->addWidget(ProxyType_lbl);

        comboProxyType = new QComboBox(groupProxy);
        comboProxyType->setObjectName(QStringLiteral("comboProxyType"));

        proxyTypeLayout->addWidget(comboProxyType);

        lblProxyIP = new QLabel(groupProxy);
        lblProxyIP->setObjectName(QStringLiteral("lblProxyIP"));
        lblProxyIP->setEnabled(false);

        proxyTypeLayout->addWidget(lblProxyIP);

        textProxyIP = new QLineEdit(groupProxy);
        textProxyIP->setObjectName(QStringLiteral("textProxyIP"));
        textProxyIP->setEnabled(false);

        proxyTypeLayout->addWidget(textProxyIP);

        lblProxyPort = new QLabel(groupProxy);
        lblProxyPort->setObjectName(QStringLiteral("lblProxyPort"));
        lblProxyPort->setEnabled(false);

        proxyTypeLayout->addWidget(lblProxyPort);

        spinProxyPort = new QSpinBox(groupProxy);
        spinProxyPort->setObjectName(QStringLiteral("spinProxyPort"));
        spinProxyPort->setEnabled(false);
        spinProxyPort->setMinimum(1);
        spinProxyPort->setMaximum(65535);
        spinProxyPort->setValue(8080);

        proxyTypeLayout->addWidget(spinProxyPort);


        verticalLayout_29->addLayout(proxyTypeLayout);

        checkProxyPeerConnecs = new QCheckBox(groupProxy);
        checkProxyPeerConnecs->setObjectName(QStringLiteral("checkProxyPeerConnecs"));
        checkProxyPeerConnecs->setEnabled(false);

        verticalLayout_29->addWidget(checkProxyPeerConnecs);

        checkForceProxy = new QCheckBox(groupProxy);
        checkForceProxy->setObjectName(QStringLiteral("checkForceProxy"));
        checkForceProxy->setChecked(true);

        verticalLayout_29->addWidget(checkForceProxy);

        isProxyOnlyForTorrents = new QCheckBox(groupProxy);
        isProxyOnlyForTorrents->setObjectName(QStringLiteral("isProxyOnlyForTorrents"));
        isProxyOnlyForTorrents->setChecked(false);

        verticalLayout_29->addWidget(isProxyOnlyForTorrents);

        checkProxyAuth = new QGroupBox(groupProxy);
        checkProxyAuth->setObjectName(QStringLiteral("checkProxyAuth"));
        checkProxyAuth->setEnabled(false);
        checkProxyAuth->setCheckable(true);
        checkProxyAuth->setChecked(false);
        verticalLayout_24 = new QVBoxLayout(checkProxyAuth);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        lblProxyUsername = new QLabel(checkProxyAuth);
        lblProxyUsername->setObjectName(QStringLiteral("lblProxyUsername"));

        gridLayout_12->addWidget(lblProxyUsername, 0, 0, 1, 1);

        textProxyUsername = new QLineEdit(checkProxyAuth);
        textProxyUsername->setObjectName(QStringLiteral("textProxyUsername"));

        gridLayout_12->addWidget(textProxyUsername, 0, 1, 1, 1);

        lblProxyPassword = new QLabel(checkProxyAuth);
        lblProxyPassword->setObjectName(QStringLiteral("lblProxyPassword"));

        gridLayout_12->addWidget(lblProxyPassword, 1, 0, 1, 1);

        textProxyPassword = new QLineEdit(checkProxyAuth);
        textProxyPassword->setObjectName(QStringLiteral("textProxyPassword"));
        textProxyPassword->setEchoMode(QLineEdit::Password);

        gridLayout_12->addWidget(textProxyPassword, 1, 1, 1, 1);


        verticalLayout_24->addLayout(gridLayout_12);

        label_23 = new QLabel(checkProxyAuth);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_24->addWidget(label_23);


        verticalLayout_29->addWidget(checkProxyAuth);


        verticalLayout_20->addWidget(groupProxy);

        groupIPFilter = new QGroupBox(scrollAreaWidgetContents_3);
        groupIPFilter->setObjectName(QStringLiteral("groupIPFilter"));
        verticalLayout_17 = new QVBoxLayout(groupIPFilter);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        checkIPFilter = new QCheckBox(groupIPFilter);
        checkIPFilter->setObjectName(QStringLiteral("checkIPFilter"));

        horizontalLayout_11->addWidget(checkIPFilter);

        textFilterPath = new FileSystemPathLineEdit(groupIPFilter);
        textFilterPath->setObjectName(QStringLiteral("textFilterPath"));

        horizontalLayout_11->addWidget(textFilterPath);

        IpFilterRefreshBtn = new QToolButton(groupIPFilter);
        IpFilterRefreshBtn->setObjectName(QStringLiteral("IpFilterRefreshBtn"));
        IpFilterRefreshBtn->setMinimumSize(QSize(0, 25));

        horizontalLayout_11->addWidget(IpFilterRefreshBtn);


        verticalLayout_17->addLayout(horizontalLayout_11);

        banListButton = new QPushButton(groupIPFilter);
        banListButton->setObjectName(QStringLiteral("banListButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(banListButton->sizePolicy().hasHeightForWidth());
        banListButton->setSizePolicy(sizePolicy5);

        verticalLayout_17->addWidget(banListButton);

        checkIpFilterTrackers = new QCheckBox(groupIPFilter);
        checkIpFilterTrackers->setObjectName(QStringLiteral("checkIpFilterTrackers"));

        verticalLayout_17->addWidget(checkIpFilterTrackers);


        verticalLayout_20->addWidget(groupIPFilter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        tabOption->addWidget(tabConnectionPage);
        tabSpeedPage = new QWidget();
        tabSpeedPage->setObjectName(QStringLiteral("tabSpeedPage"));
        verticalLayout_34 = new QVBoxLayout(tabSpeedPage);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        scrollArea_9 = new QScrollArea(tabSpeedPage);
        scrollArea_9->setObjectName(QStringLiteral("scrollArea_9"));
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QStringLiteral("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 516, 525));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        rateLimitBox = new QGroupBox(scrollAreaWidgetContents_9);
        rateLimitBox->setObjectName(QStringLiteral("rateLimitBox"));
        rateLimitBoxLayout = new QGridLayout(rateLimitBox);
        rateLimitBoxLayout->setObjectName(QStringLiteral("rateLimitBoxLayout"));
        spinUploadLimit = new QSpinBox(rateLimitBox);
        spinUploadLimit->setObjectName(QStringLiteral("spinUploadLimit"));
        spinUploadLimit->setEnabled(false);
        spinUploadLimit->setMinimum(1);
        spinUploadLimit->setMaximum(1000000);
        spinUploadLimit->setValue(100);

        rateLimitBoxLayout->addWidget(spinUploadLimit, 0, 2, 1, 1);

        checkUploadLimit = new QCheckBox(rateLimitBox);
        checkUploadLimit->setObjectName(QStringLiteral("checkUploadLimit"));

        rateLimitBoxLayout->addWidget(checkUploadLimit, 0, 1, 1, 1);

        label_10 = new QLabel(rateLimitBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        rateLimitBoxLayout->addWidget(label_10, 0, 3, 1, 1);

        spinDownloadLimit = new QSpinBox(rateLimitBox);
        spinDownloadLimit->setObjectName(QStringLiteral("spinDownloadLimit"));
        spinDownloadLimit->setEnabled(false);
        spinDownloadLimit->setMinimum(1);
        spinDownloadLimit->setMaximum(1000000);
        spinDownloadLimit->setValue(100);

        rateLimitBoxLayout->addWidget(spinDownloadLimit, 1, 2, 1, 1);

        label_13 = new QLabel(rateLimitBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        rateLimitBoxLayout->addWidget(label_13, 1, 3, 1, 1);

        label_5 = new QLabel(rateLimitBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/slow_off.png")));

        rateLimitBoxLayout->addWidget(label_5, 0, 0, 2, 1);

        checkDownloadLimit = new QCheckBox(rateLimitBox);
        checkDownloadLimit->setObjectName(QStringLiteral("checkDownloadLimit"));

        rateLimitBoxLayout->addWidget(checkDownloadLimit, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        rateLimitBoxLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        verticalLayout_5->addWidget(rateLimitBox);

        altRateLimitBox = new QGroupBox(scrollAreaWidgetContents_9);
        altRateLimitBox->setObjectName(QStringLiteral("altRateLimitBox"));
        gridLayout_6 = new QGridLayout(altRateLimitBox);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        check_schedule = new QGroupBox(altRateLimitBox);
        check_schedule->setObjectName(QStringLiteral("check_schedule"));
        check_schedule->setCheckable(true);
        check_schedule->setChecked(false);
        gridLayout_7 = new QGridLayout(check_schedule);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_6 = new QLabel(check_schedule);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        schedule_to = new QTimeEdit(check_schedule);
        schedule_to->setObjectName(QStringLiteral("schedule_to"));
        schedule_to->setWrapping(true);
        schedule_to->setDisplayFormat(QStringLiteral("hh:mm"));
        schedule_to->setTime(QTime(20, 0, 0));

        gridLayout_7->addWidget(schedule_to, 0, 3, 1, 1);

        label_17 = new QLabel(check_schedule);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_7->addWidget(label_17, 0, 2, 1, 1);

        schedule_from = new QTimeEdit(check_schedule);
        schedule_from->setObjectName(QStringLiteral("schedule_from"));
        schedule_from->setWrapping(true);
        schedule_from->setDisplayFormat(QStringLiteral("hh:mm"));
        schedule_from->setCalendarPopup(false);
        schedule_from->setTime(QTime(8, 0, 0));

        gridLayout_7->addWidget(schedule_from, 0, 1, 1, 1);

        label_18 = new QLabel(check_schedule);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_7->addWidget(label_18, 1, 0, 1, 1);

        schedule_days = new QComboBox(check_schedule);
        schedule_days->setObjectName(QStringLiteral("schedule_days"));
        sizePolicy5.setHeightForWidth(schedule_days->sizePolicy().hasHeightForWidth());
        schedule_days->setSizePolicy(sizePolicy5);

        gridLayout_7->addWidget(schedule_days, 1, 1, 1, 3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 0, 4, 1, 1);


        gridLayout_6->addWidget(check_schedule, 2, 0, 1, 5);

        label_16 = new QLabel(altRateLimitBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/icons/slow.png")));

        gridLayout_6->addWidget(label_16, 0, 0, 2, 1);

        checkUploadLimitAlt = new QCheckBox(altRateLimitBox);
        checkUploadLimitAlt->setObjectName(QStringLiteral("checkUploadLimitAlt"));

        gridLayout_6->addWidget(checkUploadLimitAlt, 0, 1, 1, 1);

        checkDownloadLimitAlt = new QCheckBox(altRateLimitBox);
        checkDownloadLimitAlt->setObjectName(QStringLiteral("checkDownloadLimitAlt"));

        gridLayout_6->addWidget(checkDownloadLimitAlt, 1, 1, 1, 1);

        spinUploadLimitAlt = new QSpinBox(altRateLimitBox);
        spinUploadLimitAlt->setObjectName(QStringLiteral("spinUploadLimitAlt"));
        spinUploadLimitAlt->setEnabled(false);
        spinUploadLimitAlt->setMinimum(1);
        spinUploadLimitAlt->setMaximum(1000000);
        spinUploadLimitAlt->setValue(10);

        gridLayout_6->addWidget(spinUploadLimitAlt, 0, 2, 1, 1);

        spinDownloadLimitAlt = new QSpinBox(altRateLimitBox);
        spinDownloadLimitAlt->setObjectName(QStringLiteral("spinDownloadLimitAlt"));
        spinDownloadLimitAlt->setEnabled(false);
        spinDownloadLimitAlt->setMinimum(1);
        spinDownloadLimitAlt->setMaximum(1000000);
        spinDownloadLimitAlt->setValue(10);

        gridLayout_6->addWidget(spinDownloadLimitAlt, 1, 2, 1, 1);

        label_14 = new QLabel(altRateLimitBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_6->addWidget(label_14, 0, 3, 1, 1);

        label_15 = new QLabel(altRateLimitBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_6->addWidget(label_15, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 4, 1, 1);


        verticalLayout_5->addWidget(altRateLimitBox);

        rateLimitsGroupBox = new QGroupBox(scrollAreaWidgetContents_9);
        rateLimitsGroupBox->setObjectName(QStringLiteral("rateLimitsGroupBox"));
        verticalLayout_30 = new QVBoxLayout(rateLimitsGroupBox);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        checkLimituTPConnections = new QCheckBox(rateLimitsGroupBox);
        checkLimituTPConnections->setObjectName(QStringLiteral("checkLimituTPConnections"));

        verticalLayout_30->addWidget(checkLimituTPConnections);

        checkLimitTransportOverhead = new QCheckBox(rateLimitsGroupBox);
        checkLimitTransportOverhead->setObjectName(QStringLiteral("checkLimitTransportOverhead"));

        verticalLayout_30->addWidget(checkLimitTransportOverhead);

        checkLimitLocalPeerRate = new QCheckBox(rateLimitsGroupBox);
        checkLimitLocalPeerRate->setObjectName(QStringLiteral("checkLimitLocalPeerRate"));

        verticalLayout_30->addWidget(checkLimitLocalPeerRate);


        verticalLayout_5->addWidget(rateLimitsGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);

        verticalLayout_34->addWidget(scrollArea_9);

        tabOption->addWidget(tabSpeedPage);
        tabBitTorrentPage = new QWidget();
        tabBitTorrentPage->setObjectName(QStringLiteral("tabBitTorrentPage"));
        verticalLayout_15 = new QVBoxLayout(tabBitTorrentPage);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QScrollArea(tabBitTorrentPage);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 513, 679));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        AddBTFeaturesBox = new QGroupBox(scrollAreaWidgetContents_4);
        AddBTFeaturesBox->setObjectName(QStringLiteral("AddBTFeaturesBox"));
        verticalLayout_14 = new QVBoxLayout(AddBTFeaturesBox);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        checkDHT = new QCheckBox(AddBTFeaturesBox);
        checkDHT->setObjectName(QStringLiteral("checkDHT"));
        checkDHT->setChecked(true);

        verticalLayout_14->addWidget(checkDHT);

        checkPeX = new QCheckBox(AddBTFeaturesBox);
        checkPeX->setObjectName(QStringLiteral("checkPeX"));
        checkPeX->setChecked(true);

        verticalLayout_14->addWidget(checkPeX);

        checkLSD = new QCheckBox(AddBTFeaturesBox);
        checkLSD->setObjectName(QStringLiteral("checkLSD"));
        checkLSD->setChecked(true);

        verticalLayout_14->addWidget(checkLSD);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        lbl_encryption = new QLabel(AddBTFeaturesBox);
        lbl_encryption->setObjectName(QStringLiteral("lbl_encryption"));

        hboxLayout1->addWidget(lbl_encryption);

        comboEncryption = new QComboBox(AddBTFeaturesBox);
        comboEncryption->setObjectName(QStringLiteral("comboEncryption"));

        hboxLayout1->addWidget(comboEncryption);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        verticalLayout_14->addLayout(hboxLayout1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkAnonymousMode = new QCheckBox(AddBTFeaturesBox);
        checkAnonymousMode->setObjectName(QStringLiteral("checkAnonymousMode"));

        horizontalLayout_6->addWidget(checkAnonymousMode);

        label_anonymous = new QLabel(AddBTFeaturesBox);
        label_anonymous->setObjectName(QStringLiteral("label_anonymous"));
        label_anonymous->setOpenExternalLinks(true);

        horizontalLayout_6->addWidget(label_anonymous);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout_14->addLayout(horizontalLayout_6);


        verticalLayout_7->addWidget(AddBTFeaturesBox);

        checkEnableQueueing = new QGroupBox(scrollAreaWidgetContents_4);
        checkEnableQueueing->setObjectName(QStringLiteral("checkEnableQueueing"));
        checkEnableQueueing->setCheckable(true);
        checkEnableQueueing->setChecked(false);
        gridLayout_2 = new QGridLayout(checkEnableQueueing);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 9);
        label_max_active_dl = new QLabel(checkEnableQueueing);
        label_max_active_dl->setObjectName(QStringLiteral("label_max_active_dl"));

        gridLayout_2->addWidget(label_max_active_dl, 0, 0, 1, 1);

        spinMaxActiveDownloads = new QSpinBox(checkEnableQueueing);
        spinMaxActiveDownloads->setObjectName(QStringLiteral("spinMaxActiveDownloads"));
        spinMaxActiveDownloads->setMinimum(-1);
        spinMaxActiveDownloads->setMaximum(999);
        spinMaxActiveDownloads->setValue(3);

        gridLayout_2->addWidget(spinMaxActiveDownloads, 0, 1, 1, 1);

        label_max_active_up = new QLabel(checkEnableQueueing);
        label_max_active_up->setObjectName(QStringLiteral("label_max_active_up"));

        gridLayout_2->addWidget(label_max_active_up, 1, 0, 1, 1);

        spinMaxActiveUploads = new QSpinBox(checkEnableQueueing);
        spinMaxActiveUploads->setObjectName(QStringLiteral("spinMaxActiveUploads"));
        spinMaxActiveUploads->setMinimum(-1);
        spinMaxActiveUploads->setMaximum(999);
        spinMaxActiveUploads->setValue(3);

        gridLayout_2->addWidget(spinMaxActiveUploads, 1, 1, 1, 1);

        maxActiveTorrents_lbl = new QLabel(checkEnableQueueing);
        maxActiveTorrents_lbl->setObjectName(QStringLiteral("maxActiveTorrents_lbl"));

        gridLayout_2->addWidget(maxActiveTorrents_lbl, 2, 0, 1, 1);

        spinMaxActiveTorrents = new QSpinBox(checkEnableQueueing);
        spinMaxActiveTorrents->setObjectName(QStringLiteral("spinMaxActiveTorrents"));
        spinMaxActiveTorrents->setMinimum(-1);
        spinMaxActiveTorrents->setMaximum(999);
        spinMaxActiveTorrents->setValue(5);

        gridLayout_2->addWidget(spinMaxActiveTorrents, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_11, 2, 2, 1, 1);

        checkIgnoreSlowTorrentsForQueueing = new QCheckBox(checkEnableQueueing);
        checkIgnoreSlowTorrentsForQueueing->setObjectName(QStringLiteral("checkIgnoreSlowTorrentsForQueueing"));

        gridLayout_2->addWidget(checkIgnoreSlowTorrentsForQueueing, 3, 0, 1, 3);


        verticalLayout_7->addWidget(checkEnableQueueing);

        ratioBox = new QGroupBox(scrollAreaWidgetContents_4);
        ratioBox->setObjectName(QStringLiteral("ratioBox"));
        gridLayout_91 = new QGridLayout(ratioBox);
        gridLayout_91->setObjectName(QStringLiteral("gridLayout_91"));
        checkMaxRatio = new QCheckBox(ratioBox);
        checkMaxRatio->setObjectName(QStringLiteral("checkMaxRatio"));

        gridLayout_91->addWidget(checkMaxRatio, 0, 0, 3, 3);

        horizontalSpacer_161 = new QSpacerItem(109, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_91->addItem(horizontalSpacer_161, 1, 6, 2, 1);

        label = new QLabel(ratioBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_91->addWidget(label, 4, 2, 1, 1);

        comboRatioLimitAct = new QComboBox(ratioBox);
        comboRatioLimitAct->setObjectName(QStringLiteral("comboRatioLimitAct"));
        comboRatioLimitAct->setEnabled(false);

        gridLayout_91->addWidget(comboRatioLimitAct, 4, 4, 1, 2);

        horizontalSpacer_20 = new QSpacerItem(121, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_91->addItem(horizontalSpacer_20, 4, 6, 1, 1);

        horizontalSpacer_171 = new QSpacerItem(100, 42, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_91->addItem(horizontalSpacer_171, 4, 1, 1, 1);

        horizontalSpacer_191 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_91->addItem(horizontalSpacer_191, 3, 6, 1, 1);

        spinMaxSeedingMinutes = new QSpinBox(ratioBox);
        spinMaxSeedingMinutes->setObjectName(QStringLiteral("spinMaxSeedingMinutes"));
        spinMaxSeedingMinutes->setEnabled(false);
        spinMaxSeedingMinutes->setAlignment(Qt::AlignCenter);
        spinMaxSeedingMinutes->setMaximum(9999999);
        spinMaxSeedingMinutes->setValue(1440);

        gridLayout_91->addWidget(spinMaxSeedingMinutes, 3, 4, 1, 1);

        spinMaxRatio = new QDoubleSpinBox(ratioBox);
        spinMaxRatio->setObjectName(QStringLiteral("spinMaxRatio"));
        spinMaxRatio->setEnabled(false);
        spinMaxRatio->setAlignment(Qt::AlignHCenter);
        spinMaxRatio->setMinimum(0);
        spinMaxRatio->setMaximum(9998);
        spinMaxRatio->setSingleStep(0.05);
        spinMaxRatio->setValue(1);

        gridLayout_91->addWidget(spinMaxRatio, 1, 4, 1, 1);

        label_11 = new QLabel(ratioBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_91->addWidget(label_11, 3, 5, 1, 1);

        checkMaxSeedingMinutes = new QCheckBox(ratioBox);
        checkMaxSeedingMinutes->setObjectName(QStringLiteral("checkMaxSeedingMinutes"));

        gridLayout_91->addWidget(checkMaxSeedingMinutes, 3, 0, 1, 4);


        verticalLayout_7->addWidget(ratioBox);

        checkEnableAddTrackers = new QGroupBox(scrollAreaWidgetContents_4);
        checkEnableAddTrackers->setObjectName(QStringLiteral("checkEnableAddTrackers"));
        sizePolicy2.setHeightForWidth(checkEnableAddTrackers->sizePolicy().hasHeightForWidth());
        checkEnableAddTrackers->setSizePolicy(sizePolicy2);
        checkEnableAddTrackers->setCheckable(true);
        checkEnableAddTrackers->setChecked(false);
        gridLayout_16 = new QGridLayout(checkEnableAddTrackers);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        textTrackers = new QPlainTextEdit(checkEnableAddTrackers);
        textTrackers->setObjectName(QStringLiteral("textTrackers"));
        textTrackers->setEnabled(true);
        textTrackers->setFocusPolicy(Qt::StrongFocus);

        gridLayout_16->addWidget(textTrackers, 0, 0, 1, 1);


        verticalLayout_7->addWidget(checkEnableAddTrackers);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_8);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_15->addWidget(scrollArea_4);

        tabOption->addWidget(tabBitTorrentPage);
        tabRSSPage = new QWidget();
        tabRSSPage->setObjectName(QStringLiteral("tabRSSPage"));
        verticalLayout_25 = new QVBoxLayout(tabRSSPage);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(tabRSSPage);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 516, 525));
        verticalLayout_27 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        groupRSSReader = new QGroupBox(scrollAreaWidgetContents_5);
        groupRSSReader->setObjectName(QStringLiteral("groupRSSReader"));
        verticalLayout_26 = new QVBoxLayout(groupRSSReader);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        checkRSSEnable = new QCheckBox(groupRSSReader);
        checkRSSEnable->setObjectName(QStringLiteral("checkRSSEnable"));

        verticalLayout_26->addWidget(checkRSSEnable);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_111 = new QLabel(groupRSSReader);
        label_111->setObjectName(QStringLiteral("label_111"));
        label_111->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_111, 0, 0, 1, 1);

        label_12 = new QLabel(groupRSSReader);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        spinRSSRefreshInterval = new QSpinBox(groupRSSReader);
        spinRSSRefreshInterval->setObjectName(QStringLiteral("spinRSSRefreshInterval"));
        spinRSSRefreshInterval->setMinimum(1);
        spinRSSRefreshInterval->setMaximum(999999);
        spinRSSRefreshInterval->setValue(5);

        gridLayout_5->addWidget(spinRSSRefreshInterval, 0, 1, 1, 1);

        spinRSSMaxArticlesPerFeed = new QSpinBox(groupRSSReader);
        spinRSSMaxArticlesPerFeed->setObjectName(QStringLiteral("spinRSSMaxArticlesPerFeed"));
        spinRSSMaxArticlesPerFeed->setMaximum(9999);
        spinRSSMaxArticlesPerFeed->setValue(100);

        gridLayout_5->addWidget(spinRSSMaxArticlesPerFeed, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 1, 2, 1, 1);


        verticalLayout_26->addLayout(gridLayout_5);


        verticalLayout_27->addWidget(groupRSSReader);

        groupRSSAutoDownloader = new QGroupBox(scrollAreaWidgetContents_5);
        groupRSSAutoDownloader->setObjectName(QStringLiteral("groupRSSAutoDownloader"));
        verticalLayout_21 = new QVBoxLayout(groupRSSAutoDownloader);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        checkRSSAutoDownloaderEnable = new QCheckBox(groupRSSAutoDownloader);
        checkRSSAutoDownloaderEnable->setObjectName(QStringLiteral("checkRSSAutoDownloaderEnable"));

        verticalLayout_21->addWidget(checkRSSAutoDownloaderEnable);

        btnEditRules = new QPushButton(groupRSSAutoDownloader);
        btnEditRules->setObjectName(QStringLiteral("btnEditRules"));

        verticalLayout_21->addWidget(btnEditRules);


        verticalLayout_27->addWidget(groupRSSAutoDownloader);

        verticalSpacer_5 = new QSpacerItem(20, 267, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_5);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_25->addWidget(scrollArea_5);

        tabOption->addWidget(tabRSSPage);
        tabWebuiPage = new QWidget();
        tabWebuiPage->setObjectName(QStringLiteral("tabWebuiPage"));
        tabWebuiPageLayout = new QVBoxLayout(tabWebuiPage);
        tabWebuiPageLayout->setObjectName(QStringLiteral("tabWebuiPageLayout"));
        tabWebuiPageLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QScrollArea(tabWebuiPage);
        scrollArea_7->setObjectName(QStringLiteral("scrollArea_7"));
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QStringLiteral("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 501, 636));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        checkWebUi = new QGroupBox(scrollAreaWidgetContents_7);
        checkWebUi->setObjectName(QStringLiteral("checkWebUi"));
        checkWebUi->setCheckable(true);
        checkWebUi->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(checkWebUi);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblWebUiAddress = new QLabel(checkWebUi);
        lblWebUiAddress->setObjectName(QStringLiteral("lblWebUiAddress"));

        horizontalLayout_2->addWidget(lblWebUiAddress);

        textWebUiAddress = new QLineEdit(checkWebUi);
        textWebUiAddress->setObjectName(QStringLiteral("textWebUiAddress"));

        horizontalLayout_2->addWidget(textWebUiAddress);

        lblWebUiPort = new QLabel(checkWebUi);
        lblWebUiPort->setObjectName(QStringLiteral("lblWebUiPort"));

        horizontalLayout_2->addWidget(lblWebUiPort);

        spinWebUiPort = new QSpinBox(checkWebUi);
        spinWebUiPort->setObjectName(QStringLiteral("spinWebUiPort"));
        spinWebUiPort->setMinimum(1);
        spinWebUiPort->setMaximum(65535);
        spinWebUiPort->setValue(8080);

        horizontalLayout_2->addWidget(spinWebUiPort);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelServerDomains = new QLabel(checkWebUi);
        labelServerDomains->setObjectName(QStringLiteral("labelServerDomains"));

        horizontalLayout_10->addWidget(labelServerDomains);

        textServerDomains = new QLineEdit(checkWebUi);
        textServerDomains->setObjectName(QStringLiteral("textServerDomains"));

        horizontalLayout_10->addWidget(textServerDomains);


        verticalLayout_2->addLayout(horizontalLayout_10);

        checkWebUIUPnP = new QCheckBox(checkWebUi);
        checkWebUIUPnP->setObjectName(QStringLiteral("checkWebUIUPnP"));
        checkWebUIUPnP->setChecked(true);

        verticalLayout_2->addWidget(checkWebUIUPnP);

        checkWebUiHttps = new QGroupBox(checkWebUi);
        checkWebUiHttps->setObjectName(QStringLiteral("checkWebUiHttps"));
        checkWebUiHttps->setCheckable(true);
        checkWebUiHttps->setChecked(false);
        gridLayout_11 = new QGridLayout(checkWebUiHttps);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        lblSslCertStatus = new QLabel(checkWebUiHttps);
        lblSslCertStatus->setObjectName(QStringLiteral("lblSslCertStatus"));
        lblSslCertStatus->setMinimumSize(QSize(22, 22));
        lblSslCertStatus->setMaximumSize(QSize(22, 22));

        gridLayout_11->addWidget(lblSslCertStatus, 0, 0, 1, 1);

        lblWebUiCrt = new QLabel(checkWebUiHttps);
        lblWebUiCrt->setObjectName(QStringLiteral("lblWebUiCrt"));
        lblWebUiCrt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(lblWebUiCrt, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnWebUiCrt = new QPushButton(checkWebUiHttps);
        btnWebUiCrt->setObjectName(QStringLiteral("btnWebUiCrt"));

        horizontalLayout_4->addWidget(btnWebUiCrt);

        horizontalSpacer_12 = new QSpacerItem(138, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);


        gridLayout_11->addLayout(horizontalLayout_4, 0, 2, 1, 1);

        lblSslKeyStatus = new QLabel(checkWebUiHttps);
        lblSslKeyStatus->setObjectName(QStringLiteral("lblSslKeyStatus"));
        lblSslKeyStatus->setMinimumSize(QSize(22, 22));
        lblSslKeyStatus->setMaximumSize(QSize(22, 22));

        gridLayout_11->addWidget(lblSslKeyStatus, 1, 0, 1, 1);

        lblWebUiKey = new QLabel(checkWebUiHttps);
        lblWebUiKey->setObjectName(QStringLiteral("lblWebUiKey"));
        lblWebUiKey->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(lblWebUiKey, 1, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btnWebUiKey = new QPushButton(checkWebUiHttps);
        btnWebUiKey->setObjectName(QStringLiteral("btnWebUiKey"));

        horizontalLayout_5->addWidget(btnWebUiKey);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);


        gridLayout_11->addLayout(horizontalLayout_5, 1, 2, 1, 1);

        lblWebUIInfo = new QLabel(checkWebUiHttps);
        lblWebUIInfo->setObjectName(QStringLiteral("lblWebUIInfo"));
        lblWebUIInfo->setOpenExternalLinks(true);

        gridLayout_11->addWidget(lblWebUIInfo, 2, 0, 1, 3);


        verticalLayout_2->addWidget(checkWebUiHttps);

        groupWebUiAuth = new QGroupBox(checkWebUi);
        groupWebUiAuth->setObjectName(QStringLiteral("groupWebUiAuth"));
        gridLayout_10 = new QGridLayout(groupWebUiAuth);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        textWebUiUsername = new QLineEdit(groupWebUiAuth);
        textWebUiUsername->setObjectName(QStringLiteral("textWebUiUsername"));
        textWebUiUsername->setMaxLength(1000);
        textWebUiUsername->setEchoMode(QLineEdit::Normal);

        gridLayout_10->addWidget(textWebUiUsername, 0, 1, 3, 1);

        textWebUiPassword = new QLineEdit(groupWebUiAuth);
        textWebUiPassword->setObjectName(QStringLiteral("textWebUiPassword"));
        textWebUiPassword->setMaxLength(1000);
        textWebUiPassword->setEchoMode(QLineEdit::Password);

        gridLayout_10->addWidget(textWebUiPassword, 3, 1, 1, 1);

        checkBypassLocalAuth = new QCheckBox(groupWebUiAuth);
        checkBypassLocalAuth->setObjectName(QStringLiteral("checkBypassLocalAuth"));

        gridLayout_10->addWidget(checkBypassLocalAuth, 4, 0, 1, 2);

        checkBypassAuthSubnetWhitelist = new QCheckBox(groupWebUiAuth);
        checkBypassAuthSubnetWhitelist->setObjectName(QStringLiteral("checkBypassAuthSubnetWhitelist"));

        gridLayout_10->addWidget(checkBypassAuthSubnetWhitelist, 5, 0, 1, 2);

        IPSubnetWhitelistButton = new QPushButton(groupWebUiAuth);
        IPSubnetWhitelistButton->setObjectName(QStringLiteral("IPSubnetWhitelistButton"));
        sizePolicy5.setHeightForWidth(IPSubnetWhitelistButton->sizePolicy().hasHeightForWidth());
        IPSubnetWhitelistButton->setSizePolicy(sizePolicy5);

        gridLayout_10->addWidget(IPSubnetWhitelistButton, 6, 1, 1, 1);

        lblWebUiUsername = new QLabel(groupWebUiAuth);
        lblWebUiUsername->setObjectName(QStringLiteral("lblWebUiUsername"));

        gridLayout_10->addWidget(lblWebUiUsername, 0, 0, 3, 1);

        lblWebUiPassword = new QLabel(groupWebUiAuth);
        lblWebUiPassword->setObjectName(QStringLiteral("lblWebUiPassword"));

        gridLayout_10->addWidget(lblWebUiPassword, 3, 0, 1, 1);


        verticalLayout_2->addWidget(groupWebUiAuth);

        checkDynDNS = new QGroupBox(checkWebUi);
        checkDynDNS->setObjectName(QStringLiteral("checkDynDNS"));
        checkDynDNS->setCheckable(true);
        checkDynDNS->setChecked(false);
        formLayout_5 = new QFormLayout(checkDynDNS);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_19 = new QLabel(checkDynDNS);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_19);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboDNSService = new QComboBox(checkDynDNS);
        comboDNSService->insertItems(0, QStringList()
         << QStringLiteral("DynDNS")
         << QStringLiteral("No-IP")
        );
        comboDNSService->setObjectName(QStringLiteral("comboDNSService"));

        horizontalLayout_3->addWidget(comboDNSService);

        registerDNSBtn = new QPushButton(checkDynDNS);
        registerDNSBtn->setObjectName(QStringLiteral("registerDNSBtn"));

        horizontalLayout_3->addWidget(registerDNSBtn);


        formLayout_5->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        label_20 = new QLabel(checkDynDNS);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_20);

        domainNameTxt = new QLineEdit(checkDynDNS);
        domainNameTxt->setObjectName(QStringLiteral("domainNameTxt"));
        domainNameTxt->setText(QStringLiteral("changeme.dyndns.org"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, domainNameTxt);

        label_21 = new QLabel(checkDynDNS);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_21);

        DNSUsernameTxt = new QLineEdit(checkDynDNS);
        DNSUsernameTxt->setObjectName(QStringLiteral("DNSUsernameTxt"));
        DNSUsernameTxt->setMaxLength(50);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, DNSUsernameTxt);

        label_22 = new QLabel(checkDynDNS);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_22);

        DNSPasswordTxt = new QLineEdit(checkDynDNS);
        DNSPasswordTxt->setObjectName(QStringLiteral("DNSPasswordTxt"));
        DNSPasswordTxt->setMaxLength(50);
        DNSPasswordTxt->setEchoMode(QLineEdit::Password);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, DNSPasswordTxt);


        verticalLayout_2->addWidget(checkDynDNS);


        verticalLayout_23->addWidget(checkWebUi);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        tabWebuiPageLayout->addWidget(scrollArea_7);

        tabOption->addWidget(tabWebuiPage);
        tabAdvancedPage = new QWidget();
        tabAdvancedPage->setObjectName(QStringLiteral("tabAdvancedPage"));
        advPageLayout = new QVBoxLayout(tabAdvancedPage);
        advPageLayout->setObjectName(QStringLiteral("advPageLayout"));
        advPageLayout->setContentsMargins(0, 0, 0, 0);
        tabOption->addWidget(tabAdvancedPage);
        hsplitter->addWidget(tabOption);

        verticalLayout_3->addWidget(hsplitter);

        buttonBox = new QDialogButtonBox(OptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        QWidget::setTabOrder(tabOption, comboI18n);
        QWidget::setTabOrder(comboI18n, checkStartPaused);
        QWidget::setTabOrder(checkStartPaused, spinPort);
        QWidget::setTabOrder(spinPort, checkUPnP);
        QWidget::setTabOrder(checkUPnP, textWebUiUsername);
        QWidget::setTabOrder(textWebUiUsername, checkWebUi);
        QWidget::setTabOrder(checkWebUi, textSavePath);
        QWidget::setTabOrder(textSavePath, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, spinWebUiPort);
        QWidget::setTabOrder(spinWebUiPort, textWebUiPassword);
        QWidget::setTabOrder(textWebUiPassword, buttonBox);
        QWidget::setTabOrder(buttonBox, tabSelection);
        QWidget::setTabOrder(tabSelection, scrollArea);
        QWidget::setTabOrder(scrollArea, confirmDeletion);
        QWidget::setTabOrder(confirmDeletion, checkAltRowColors);
        QWidget::setTabOrder(checkAltRowColors, actionTorrentDlOnDblClBox);
        QWidget::setTabOrder(actionTorrentDlOnDblClBox, actionTorrentFnOnDblClBox);
        QWidget::setTabOrder(actionTorrentFnOnDblClBox, checkStartup);
        QWidget::setTabOrder(checkStartup, checkShowSplash);
        QWidget::setTabOrder(checkShowSplash, checkStartMinimized);
        QWidget::setTabOrder(checkStartMinimized, checkProgramExitConfirm);
        QWidget::setTabOrder(checkProgramExitConfirm, checkShowSystray);
        QWidget::setTabOrder(checkShowSystray, checkMinimizeToSysTray);
        QWidget::setTabOrder(checkMinimizeToSysTray, checkCloseToSystray);
        QWidget::setTabOrder(checkCloseToSystray, comboTrayIcon);
        QWidget::setTabOrder(comboTrayIcon, checkAssociateTorrents);
        QWidget::setTabOrder(checkAssociateTorrents, checkAssociateMagnetLinks);
        QWidget::setTabOrder(checkAssociateMagnetLinks, checkPreventFromSuspend);
        QWidget::setTabOrder(checkPreventFromSuspend, checkAdditionDialog);
        QWidget::setTabOrder(checkAdditionDialog, checkAdditionDialogFront);
        QWidget::setTabOrder(checkAdditionDialogFront, checkPreallocateAll);
        QWidget::setTabOrder(checkPreallocateAll, checkTempFolder);
        QWidget::setTabOrder(checkTempFolder, textTempPath);
        QWidget::setTabOrder(textTempPath, checkAppendqB);
        QWidget::setTabOrder(checkAppendqB, scanFoldersView);
        QWidget::setTabOrder(scanFoldersView, addScanFolderButton);
        QWidget::setTabOrder(addScanFolderButton, removeScanFolderButton);
        QWidget::setTabOrder(removeScanFolderButton, checkExportDir);
        QWidget::setTabOrder(checkExportDir, textExportDir);
        QWidget::setTabOrder(textExportDir, checkExportDirFin);
        QWidget::setTabOrder(checkExportDirFin, textExportDirFin);
        QWidget::setTabOrder(textExportDirFin, groupMailNotification);
        QWidget::setTabOrder(groupMailNotification, dest_email_txt);
        QWidget::setTabOrder(dest_email_txt, smtp_server_txt);
        QWidget::setTabOrder(smtp_server_txt, groupMailNotifAuth);
        QWidget::setTabOrder(groupMailNotifAuth, mailNotifUsername);
        QWidget::setTabOrder(mailNotifUsername, mailNotifPassword);
        QWidget::setTabOrder(mailNotifPassword, checkSmtpSSL);
        QWidget::setTabOrder(checkSmtpSSL, autoRunBox);
        QWidget::setTabOrder(autoRunBox, autoRun_txt);
        QWidget::setTabOrder(autoRun_txt, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, randomButton);
        QWidget::setTabOrder(randomButton, checkRandomPort);
        QWidget::setTabOrder(checkRandomPort, checkMaxConnecs);
        QWidget::setTabOrder(checkMaxConnecs, spinMaxConnec);
        QWidget::setTabOrder(spinMaxConnec, checkMaxConnecsPerTorrent);
        QWidget::setTabOrder(checkMaxConnecsPerTorrent, spinMaxConnecPerTorrent);
        QWidget::setTabOrder(spinMaxConnecPerTorrent, checkMaxUploadsPerTorrent);
        QWidget::setTabOrder(checkMaxUploadsPerTorrent, spinMaxUploadsPerTorrent);
        QWidget::setTabOrder(spinMaxUploadsPerTorrent, checkMaxUploads);
        QWidget::setTabOrder(checkMaxUploads, spinMaxUploads);
        QWidget::setTabOrder(spinMaxUploads, comboProxyType);
        QWidget::setTabOrder(comboProxyType, textProxyIP);
        QWidget::setTabOrder(textProxyIP, spinProxyPort);
        QWidget::setTabOrder(spinProxyPort, checkProxyPeerConnecs);
        QWidget::setTabOrder(checkProxyPeerConnecs, checkForceProxy);
        QWidget::setTabOrder(checkForceProxy, isProxyOnlyForTorrents);
        QWidget::setTabOrder(isProxyOnlyForTorrents, checkProxyAuth);
        QWidget::setTabOrder(checkProxyAuth, textProxyUsername);
        QWidget::setTabOrder(textProxyUsername, textProxyPassword);
        QWidget::setTabOrder(textProxyPassword, checkIPFilter);
        QWidget::setTabOrder(checkIPFilter, textFilterPath);
        QWidget::setTabOrder(textFilterPath, IpFilterRefreshBtn);
        QWidget::setTabOrder(IpFilterRefreshBtn, checkIpFilterTrackers);
        QWidget::setTabOrder(checkIpFilterTrackers, scrollArea_9);
        QWidget::setTabOrder(scrollArea_9, spinUploadLimit);
        QWidget::setTabOrder(spinUploadLimit, checkUploadLimit);
        QWidget::setTabOrder(checkUploadLimit, spinDownloadLimit);
        QWidget::setTabOrder(spinDownloadLimit, checkDownloadLimit);
        QWidget::setTabOrder(checkDownloadLimit, check_schedule);
        QWidget::setTabOrder(check_schedule, schedule_to);
        QWidget::setTabOrder(schedule_to, schedule_from);
        QWidget::setTabOrder(schedule_from, schedule_days);
        QWidget::setTabOrder(schedule_days, checkUploadLimitAlt);
        QWidget::setTabOrder(checkUploadLimitAlt, checkDownloadLimitAlt);
        QWidget::setTabOrder(checkDownloadLimitAlt, spinUploadLimitAlt);
        QWidget::setTabOrder(spinUploadLimitAlt, spinDownloadLimitAlt);
        QWidget::setTabOrder(spinDownloadLimitAlt, checkLimitLocalPeerRate);
        QWidget::setTabOrder(checkLimitLocalPeerRate, checkLimitTransportOverhead);
        QWidget::setTabOrder(checkLimitTransportOverhead, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, checkDHT);
        QWidget::setTabOrder(checkDHT, checkPeX);
        QWidget::setTabOrder(checkPeX, checkLSD);
        QWidget::setTabOrder(checkLSD, comboEncryption);
        QWidget::setTabOrder(comboEncryption, checkAnonymousMode);
        QWidget::setTabOrder(checkAnonymousMode, checkEnableQueueing);
        QWidget::setTabOrder(checkEnableQueueing, spinMaxActiveDownloads);
        QWidget::setTabOrder(spinMaxActiveDownloads, spinMaxActiveUploads);
        QWidget::setTabOrder(spinMaxActiveUploads, spinMaxActiveTorrents);
        QWidget::setTabOrder(spinMaxActiveTorrents, checkIgnoreSlowTorrentsForQueueing);
        QWidget::setTabOrder(checkIgnoreSlowTorrentsForQueueing, checkMaxRatio);
        QWidget::setTabOrder(checkMaxRatio, spinMaxRatio);
        QWidget::setTabOrder(spinMaxRatio, checkMaxSeedingMinutes);
        QWidget::setTabOrder(checkMaxSeedingMinutes, spinMaxSeedingMinutes);
        QWidget::setTabOrder(spinMaxSeedingMinutes, comboRatioLimitAct);
        QWidget::setTabOrder(comboRatioLimitAct, checkWebUIUPnP);
        QWidget::setTabOrder(checkWebUIUPnP, checkWebUiHttps);
        QWidget::setTabOrder(checkWebUiHttps, btnWebUiCrt);
        QWidget::setTabOrder(btnWebUiCrt, btnWebUiKey);
        QWidget::setTabOrder(btnWebUiKey, checkBypassLocalAuth);
        QWidget::setTabOrder(checkBypassLocalAuth, checkBypassAuthSubnetWhitelist);
        QWidget::setTabOrder(checkBypassAuthSubnetWhitelist, IPSubnetWhitelistButton);
        QWidget::setTabOrder(IPSubnetWhitelistButton, checkDynDNS);
        QWidget::setTabOrder(checkDynDNS, comboDNSService);
        QWidget::setTabOrder(comboDNSService, registerDNSBtn);
        QWidget::setTabOrder(registerDNSBtn, domainNameTxt);
        QWidget::setTabOrder(domainNameTxt, DNSUsernameTxt);
        QWidget::setTabOrder(DNSUsernameTxt, DNSPasswordTxt);

        retranslateUi(OptionsDialog);
        QObject::connect(checkUploadLimit, SIGNAL(toggled(bool)), spinUploadLimit, SLOT(setEnabled(bool)));
        QObject::connect(checkDownloadLimit, SIGNAL(toggled(bool)), spinDownloadLimit, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxConnecs, SIGNAL(toggled(bool)), spinMaxConnec, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxConnecsPerTorrent, SIGNAL(toggled(bool)), spinMaxConnecPerTorrent, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxUploadsPerTorrent, SIGNAL(toggled(bool)), spinMaxUploadsPerTorrent, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxUploads, SIGNAL(toggled(bool)), spinMaxUploads, SLOT(setEnabled(bool)));
        QObject::connect(checkDownloadLimitAlt, SIGNAL(toggled(bool)), spinDownloadLimitAlt, SLOT(setEnabled(bool)));
        QObject::connect(checkUploadLimitAlt, SIGNAL(toggled(bool)), spinUploadLimitAlt, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxRatio, SIGNAL(toggled(bool)), spinMaxRatio, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxSeedingMinutes, SIGNAL(toggled(bool)), spinMaxSeedingMinutes, SLOT(setEnabled(bool)));
        QObject::connect(deleteTorrentBox, SIGNAL(toggled(bool)), deleteTorrentWarningIcon, SLOT(setVisible(bool)));
        QObject::connect(deleteTorrentBox, SIGNAL(toggled(bool)), deleteTorrentWarningLabel, SLOT(setVisible(bool)));

        tabSelection->setCurrentRow(-1);
        tabOption->setCurrentIndex(0);
        actionTorrentDlOnDblClBox->setCurrentIndex(0);
        comboFileLogAgeType->setCurrentIndex(1);
        comboCategoryDefaultPathChanged->setCurrentIndex(1);
        comboCategoryChanged->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Options", Q_NULLPTR));

        const bool __sortingEnabled = tabSelection->isSortingEnabled();
        tabSelection->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = tabSelection->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("OptionsDialog", "Behavior", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = tabSelection->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("OptionsDialog", "Downloads", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = tabSelection->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("OptionsDialog", "Connection", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = tabSelection->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("OptionsDialog", "Speed", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = tabSelection->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("OptionsDialog", "BitTorrent", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = tabSelection->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("OptionsDialog", "RSS", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = tabSelection->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("OptionsDialog", "Web UI", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem7 = tabSelection->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("OptionsDialog", "Advanced", Q_NULLPTR));
        tabSelection->setSortingEnabled(__sortingEnabled);

        UISettingsBox->setTitle(QApplication::translate("OptionsDialog", "Language", Q_NULLPTR));
        label_9->setText(QApplication::translate("OptionsDialog", "User Interface Language:", Q_NULLPTR));
        lbl_i18n_info_2->setText(QApplication::translate("OptionsDialog", "(Requires restart)", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("OptionsDialog", "Transfer List", Q_NULLPTR));
        confirmDeletion->setText(QApplication::translate("OptionsDialog", "Confirm when deleting torrents", Q_NULLPTR));
        checkAltRowColors->setText(QApplication::translate("OptionsDialog", "Use alternating row colors", Q_NULLPTR));
        checkHideZero->setText(QApplication::translate("OptionsDialog", "Hide zero and infinity values", Q_NULLPTR));
        comboHideZero->clear();
        comboHideZero->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Always", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Paused torrents only", Q_NULLPTR)
        );
        groupBox_7->setTitle(QApplication::translate("OptionsDialog", "Action on double-click", Q_NULLPTR));
        lblDlList_2->setText(QApplication::translate("OptionsDialog", "Downloading torrents:", Q_NULLPTR));
        actionTorrentDlOnDblClBox->clear();
        actionTorrentDlOnDblClBox->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Start / Stop Torrent", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Open destination folder", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "No action", Q_NULLPTR)
        );
        lblUploadList->setText(QApplication::translate("OptionsDialog", "Completed torrents:", Q_NULLPTR));
        actionTorrentFnOnDblClBox->clear();
        actionTorrentFnOnDblClBox->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Start / Stop Torrent", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Open destination folder", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "No action", Q_NULLPTR)
        );
        systrayBox->setTitle(QApplication::translate("OptionsDialog", "Desktop", Q_NULLPTR));
        checkStartup->setText(QApplication::translate("OptionsDialog", "Start qBittorrent on Windows start up", Q_NULLPTR));
        checkShowSplash->setText(QApplication::translate("OptionsDialog", "Show splash screen on start up", Q_NULLPTR));
        checkStartMinimized->setText(QApplication::translate("OptionsDialog", "Start qBittorrent minimized", Q_NULLPTR));
        checkProgramExitConfirm->setText(QApplication::translate("OptionsDialog", "Confirmation on exit when torrents are active", Q_NULLPTR));
        checkProgramAutoExitConfirm->setText(QApplication::translate("OptionsDialog", "Confirmation on auto-exit when downloads finish", Q_NULLPTR));
        checkShowSystray->setTitle(QApplication::translate("OptionsDialog", "Show &qBittorrent in notification area", Q_NULLPTR));
        checkMinimizeToSysTray->setText(QApplication::translate("OptionsDialog", "Minimize qBittorrent to notification area", Q_NULLPTR));
        checkCloseToSystray->setText(QApplication::translate("OptionsDialog", "Close qBittorrent to notification area", "i.e: The systray tray icon will still be visible when closing the main window."));
        label_trayIconStyle->setText(QApplication::translate("OptionsDialog", "Tray icon style:", Q_NULLPTR));
        comboTrayIcon->clear();
        comboTrayIcon->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Normal", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Monochrome (Dark theme)", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Monochrome (Light theme)", Q_NULLPTR)
        );
        groupFileAssociation->setTitle(QApplication::translate("OptionsDialog", "File association", Q_NULLPTR));
        checkAssociateTorrents->setText(QApplication::translate("OptionsDialog", "Use qBittorrent for .torrent files", Q_NULLPTR));
        checkAssociateMagnetLinks->setText(QApplication::translate("OptionsDialog", "Use qBittorrent for magnet links", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("OptionsDialog", "Power Management", Q_NULLPTR));
        checkPreventFromSuspend->setText(QApplication::translate("OptionsDialog", "Inhibit system sleep when torrents are active", Q_NULLPTR));
        checkFileLog->setTitle(QApplication::translate("OptionsDialog", "&Log file", Q_NULLPTR));
        label_4->setText(QApplication::translate("OptionsDialog", "Save path:", Q_NULLPTR));
        checkFileLogBackup->setText(QApplication::translate("OptionsDialog", "Backup the log file after:", Q_NULLPTR));
        spinFileLogSize->setSuffix(QApplication::translate("OptionsDialog", " MB", Q_NULLPTR));
        checkFileLogDelete->setText(QApplication::translate("OptionsDialog", "Delete backup logs older than:", Q_NULLPTR));
        comboFileLogAgeType->clear();
        comboFileLogAgeType->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "days", "Delete backup logs older than 10 months")
         << QApplication::translate("OptionsDialog", "months", "Delete backup logs older than 10 months")
         << QApplication::translate("OptionsDialog", "years", "Delete backup logs older than 10 years")
        );
        torrentAdditionBox->setTitle(QApplication::translate("OptionsDialog", "When adding a torrent", Q_NULLPTR));
        checkAdditionDialog->setTitle(QApplication::translate("OptionsDialog", "Display &torrent content and some options", Q_NULLPTR));
        checkAdditionDialogFront->setText(QApplication::translate("OptionsDialog", "Bring torrent dialog to the front", Q_NULLPTR));
        checkCreateSubfolder->setText(QApplication::translate("OptionsDialog", "Create subfolder for torrents with multiple files", Q_NULLPTR));
        checkStartPaused->setText(QApplication::translate("OptionsDialog", "Do not start the download automatically", "The torrent will be added to download list in pause state"));
#ifndef QT_NO_TOOLTIP
        deleteTorrentBox->setToolTip(QApplication::translate("OptionsDialog", "Should the .torrent file be deleted after adding it", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        deleteTorrentBox->setTitle(QApplication::translate("OptionsDialog", "De&lete .torrent files afterwards ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        deleteCancelledTorrentBox->setToolTip(QApplication::translate("OptionsDialog", "Also delete .torrent files whose addition was cancelled", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        deleteCancelledTorrentBox->setText(QApplication::translate("OptionsDialog", "Also when addition is cancelled", Q_NULLPTR));
        deleteTorrentWarningLabel->setText(QApplication::translate("OptionsDialog", "Warning! Data loss possible!", Q_NULLPTR));
        groupSavingManagement->setTitle(QApplication::translate("OptionsDialog", "Saving Management", Q_NULLPTR));
        label_40->setText(QApplication::translate("OptionsDialog", "Default Torrent Management Mode:", Q_NULLPTR));
        comboSavingMode->clear();
        comboSavingMode->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Manual", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Automatic", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        comboSavingMode->setToolTip(QApplication::translate("OptionsDialog", "Automatic mode means that various torrent properties (e.g. save path) will be decided by the associated category", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTorrentCategoryChanged->setText(QApplication::translate("OptionsDialog", "When Torrent Category changed:", Q_NULLPTR));
        comboTorrentCategoryChanged->clear();
        comboTorrentCategoryChanged->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Relocate torrent", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Switch torrent to Manual Mode", Q_NULLPTR)
        );
        labelCategoryDefaultPathChanged->setText(QApplication::translate("OptionsDialog", "When Default Save Path changed:", Q_NULLPTR));
        comboCategoryDefaultPathChanged->clear();
        comboCategoryDefaultPathChanged->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Relocate affected torrents", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Switch affected torrents to Manual Mode", Q_NULLPTR)
        );
        labelCategoryChanged->setText(QApplication::translate("OptionsDialog", "When Category changed:", Q_NULLPTR));
        comboCategoryChanged->clear();
        comboCategoryChanged->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Relocate affected torrents", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Switch affected torrents to Manual Mode", Q_NULLPTR)
        );
        checkUseSubcategories->setText(QApplication::translate("OptionsDialog", "Use Subcategories", Q_NULLPTR));
        checkExportDirFin->setText(QApplication::translate("OptionsDialog", "Copy .torrent files for finished downloads to:", Q_NULLPTR));
        labelSavePath->setText(QApplication::translate("OptionsDialog", "Default Save Path:", Q_NULLPTR));
        checkExportDir->setText(QApplication::translate("OptionsDialog", "Copy .torrent files to:", Q_NULLPTR));
        checkTempFolder->setText(QApplication::translate("OptionsDialog", "Keep incomplete torrents in:", Q_NULLPTR));
        checkPreallocateAll->setText(QApplication::translate("OptionsDialog", "Pre-allocate disk space for all files", Q_NULLPTR));
        checkAppendqB->setText(QApplication::translate("OptionsDialog", "Append .!qB extension to incomplete files", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("OptionsDialog", "Automatically add torrents from:", Q_NULLPTR));
        addScanFolderButton->setText(QApplication::translate("OptionsDialog", "Add entry", Q_NULLPTR));
        removeScanFolderButton->setText(QApplication::translate("OptionsDialog", "Remove entry", Q_NULLPTR));
        groupMailNotification->setTitle(QApplication::translate("OptionsDialog", "Email notification &upon download completion", Q_NULLPTR));
        label_2->setText(QApplication::translate("OptionsDialog", "To:", Q_NULLPTR));
        label_3->setText(QApplication::translate("OptionsDialog", "SMTP server:", Q_NULLPTR));
        label_25->setText(QApplication::translate("OptionsDialog", "From:", Q_NULLPTR));
        checkSmtpSSL->setText(QApplication::translate("OptionsDialog", "This server requires a secure connection (SSL)", Q_NULLPTR));
        groupMailNotifAuth->setTitle(QApplication::translate("OptionsDialog", "Authentication", Q_NULLPTR));
        label_7->setText(QApplication::translate("OptionsDialog", "Username:", Q_NULLPTR));
        label_8->setText(QApplication::translate("OptionsDialog", "Password:", Q_NULLPTR));
        autoRunBox->setTitle(QApplication::translate("OptionsDialog", "Run e&xternal program on torrent completion", Q_NULLPTR));
        label_24->setText(QApplication::translate("OptionsDialog", "Enabled protocol:", Q_NULLPTR));
        comboProtocol->setItemText(0, QApplication::translate("OptionsDialog", "TCP and \316\274TP", Q_NULLPTR));

        ListeningPortBox->setTitle(QApplication::translate("OptionsDialog", "Listening Port", Q_NULLPTR));
        lbl_ports->setText(QApplication::translate("OptionsDialog", "Port used for incoming connections:", Q_NULLPTR));
        randomButton->setText(QApplication::translate("OptionsDialog", "Random", Q_NULLPTR));
        checkUPnP->setText(QApplication::translate("OptionsDialog", "Use UPnP / NAT-PMP port forwarding from my router", Q_NULLPTR));
        checkRandomPort->setText(QApplication::translate("OptionsDialog", "Use different port on each startup", Q_NULLPTR));
        nbConnecBox->setTitle(QApplication::translate("OptionsDialog", "Connections Limits", Q_NULLPTR));
        checkMaxConnecsPerTorrent->setText(QApplication::translate("OptionsDialog", "Maximum number of connections per torrent:", Q_NULLPTR));
        checkMaxConnecs->setText(QApplication::translate("OptionsDialog", "Global maximum number of connections:", Q_NULLPTR));
        checkMaxUploadsPerTorrent->setText(QApplication::translate("OptionsDialog", "Maximum number of upload slots per torrent:", Q_NULLPTR));
        checkMaxUploads->setText(QApplication::translate("OptionsDialog", "Global maximum number of upload slots:", Q_NULLPTR));
        groupProxy->setTitle(QApplication::translate("OptionsDialog", "Proxy Server", Q_NULLPTR));
        ProxyType_lbl->setText(QApplication::translate("OptionsDialog", "Type:", Q_NULLPTR));
        comboProxyType->clear();
        comboProxyType->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "(None)", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "SOCKS4", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "SOCKS5", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "HTTP", Q_NULLPTR)
        );
        lblProxyIP->setText(QApplication::translate("OptionsDialog", "Host:", Q_NULLPTR));
        textProxyIP->setText(QString());
        lblProxyPort->setText(QApplication::translate("OptionsDialog", "Port:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkProxyPeerConnecs->setToolTip(QApplication::translate("OptionsDialog", "Otherwise, the proxy server is only used for tracker connections", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkProxyPeerConnecs->setText(QApplication::translate("OptionsDialog", "Use proxy for peer connections", Q_NULLPTR));
        checkForceProxy->setText(QApplication::translate("OptionsDialog", "Disable connections not supported by proxies", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        isProxyOnlyForTorrents->setToolTip(QApplication::translate("OptionsDialog", "RSS feeds, search engine, software updates or anything else other than torrent transfers and related operations (such as peer exchanges) will use a direct connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        isProxyOnlyForTorrents->setText(QApplication::translate("OptionsDialog", "Use proxy only for torrents", Q_NULLPTR));
        checkProxyAuth->setTitle(QApplication::translate("OptionsDialog", "A&uthentication", Q_NULLPTR));
        lblProxyUsername->setText(QApplication::translate("OptionsDialog", "Username:", Q_NULLPTR));
        lblProxyPassword->setText(QApplication::translate("OptionsDialog", "Password:", Q_NULLPTR));
        label_23->setText(QApplication::translate("OptionsDialog", "Info: The password is saved unencrypted", Q_NULLPTR));
        groupIPFilter->setTitle(QApplication::translate("OptionsDialog", "IP Fi&ltering", Q_NULLPTR));
        checkIPFilter->setText(QApplication::translate("OptionsDialog", "Filter path (.dat, .p2p, .p2b):", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        IpFilterRefreshBtn->setToolTip(QApplication::translate("OptionsDialog", "Reload the filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        banListButton->setText(QApplication::translate("OptionsDialog", "Manually banned IP addresses...", Q_NULLPTR));
        checkIpFilterTrackers->setText(QApplication::translate("OptionsDialog", "Apply to trackers", Q_NULLPTR));
        rateLimitBox->setTitle(QApplication::translate("OptionsDialog", "Global Rate Limits", Q_NULLPTR));
        checkUploadLimit->setText(QApplication::translate("OptionsDialog", "Upload:", Q_NULLPTR));
        label_10->setText(QApplication::translate("OptionsDialog", "KiB/s", Q_NULLPTR));
        label_13->setText(QApplication::translate("OptionsDialog", "KiB/s", Q_NULLPTR));
        checkDownloadLimit->setText(QApplication::translate("OptionsDialog", "Download:", Q_NULLPTR));
        altRateLimitBox->setTitle(QApplication::translate("OptionsDialog", "Alternative Rate Limits", Q_NULLPTR));
        check_schedule->setTitle(QApplication::translate("OptionsDialog", "Schedule &the use of alternative rate limits", Q_NULLPTR));
        label_6->setText(QApplication::translate("OptionsDialog", "From:", Q_NULLPTR));
        label_17->setText(QApplication::translate("OptionsDialog", "To:", Q_NULLPTR));
        label_18->setText(QApplication::translate("OptionsDialog", "When:", Q_NULLPTR));
        schedule_days->clear();
        schedule_days->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Every day", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Weekdays", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Weekends", Q_NULLPTR)
        );
        checkUploadLimitAlt->setText(QApplication::translate("OptionsDialog", "Upload:", Q_NULLPTR));
        checkDownloadLimitAlt->setText(QApplication::translate("OptionsDialog", "Download:", Q_NULLPTR));
        label_14->setText(QApplication::translate("OptionsDialog", "KiB/s", Q_NULLPTR));
        label_15->setText(QApplication::translate("OptionsDialog", "KiB/s", Q_NULLPTR));
        rateLimitsGroupBox->setTitle(QApplication::translate("OptionsDialog", "Rate Limits Settings", Q_NULLPTR));
        checkLimituTPConnections->setText(QApplication::translate("OptionsDialog", "Apply rate limit to \302\265TP protocol", Q_NULLPTR));
        checkLimitTransportOverhead->setText(QApplication::translate("OptionsDialog", "Apply rate limit to transport overhead", Q_NULLPTR));
        checkLimitLocalPeerRate->setText(QApplication::translate("OptionsDialog", "Apply rate limit to peers on LAN", Q_NULLPTR));
        AddBTFeaturesBox->setTitle(QApplication::translate("OptionsDialog", "Privacy", Q_NULLPTR));
        checkDHT->setText(QApplication::translate("OptionsDialog", "Enable DHT (decentralized network) to find more peers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkPeX->setToolTip(QApplication::translate("OptionsDialog", "Exchange peers with compatible Bittorrent clients (\302\265Torrent, Vuze, ...)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkPeX->setText(QApplication::translate("OptionsDialog", "Enable Peer Exchange (PeX) to find more peers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkLSD->setToolTip(QApplication::translate("OptionsDialog", "Look for peers on your local network", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkLSD->setText(QApplication::translate("OptionsDialog", "Enable Local Peer Discovery to find more peers", Q_NULLPTR));
        lbl_encryption->setText(QApplication::translate("OptionsDialog", "Encryption mode:", Q_NULLPTR));
        comboEncryption->clear();
        comboEncryption->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Prefer encryption", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Require encryption", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Disable encryption", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        checkAnonymousMode->setToolTip(QApplication::translate("OptionsDialog", "Enable when using a proxy or a VPN connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkAnonymousMode->setText(QApplication::translate("OptionsDialog", "Enable anonymous mode", Q_NULLPTR));
        label_anonymous->setText(QApplication::translate("OptionsDialog", " (<a href=\"https://github.com/qbittorrent/qBittorrent/wiki/Anonymous-Mode\">More information</a>)", Q_NULLPTR));
        checkEnableQueueing->setTitle(QApplication::translate("OptionsDialog", "&Torrent Queueing", Q_NULLPTR));
        label_max_active_dl->setText(QApplication::translate("OptionsDialog", "Maximum active downloads:", Q_NULLPTR));
        label_max_active_up->setText(QApplication::translate("OptionsDialog", "Maximum active uploads:", Q_NULLPTR));
        maxActiveTorrents_lbl->setText(QApplication::translate("OptionsDialog", "Maximum active torrents:", Q_NULLPTR));
        checkIgnoreSlowTorrentsForQueueing->setText(QApplication::translate("OptionsDialog", "Do not count slow torrents in these limits", Q_NULLPTR));
        ratioBox->setTitle(QApplication::translate("OptionsDialog", "Share Ratio Limiting", Q_NULLPTR));
        checkMaxRatio->setText(QApplication::translate("OptionsDialog", "Seed torrents until their ratio reaches", Q_NULLPTR));
        label->setText(QApplication::translate("OptionsDialog", "then", Q_NULLPTR));
        comboRatioLimitAct->clear();
        comboRatioLimitAct->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "Pause them", Q_NULLPTR)
         << QApplication::translate("OptionsDialog", "Remove them", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("OptionsDialog", "minutes", Q_NULLPTR));
        checkMaxSeedingMinutes->setText(QApplication::translate("OptionsDialog", "Seed torrents until their seeding time reaches", Q_NULLPTR));
        checkEnableAddTrackers->setTitle(QApplication::translate("OptionsDialog", "A&utomatically add these trackers to new downloads:", Q_NULLPTR));
        groupRSSReader->setTitle(QApplication::translate("OptionsDialog", "RSS Reader", Q_NULLPTR));
        checkRSSEnable->setText(QApplication::translate("OptionsDialog", "Enable fetching RSS feeds", Q_NULLPTR));
        label_111->setText(QApplication::translate("OptionsDialog", "Feeds refresh interval:", Q_NULLPTR));
        label_12->setText(QApplication::translate("OptionsDialog", "Maximum number of articles per feed:", Q_NULLPTR));
        spinRSSRefreshInterval->setSuffix(QApplication::translate("OptionsDialog", " min", Q_NULLPTR));
        groupRSSAutoDownloader->setTitle(QApplication::translate("OptionsDialog", "RSS Torrent Auto Downloader", Q_NULLPTR));
        checkRSSAutoDownloaderEnable->setText(QApplication::translate("OptionsDialog", "Enable auto downloading of RSS torrents", Q_NULLPTR));
        btnEditRules->setText(QApplication::translate("OptionsDialog", "Edit auto downloading rules...", Q_NULLPTR));
        checkWebUi->setTitle(QApplication::translate("OptionsDialog", "Web User Interface (Remote control)", Q_NULLPTR));
        lblWebUiAddress->setText(QApplication::translate("OptionsDialog", "IP address:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        textWebUiAddress->setToolTip(QApplication::translate("OptionsDialog", "IP address that the Web UI will bind to.\n"
"Specify an IPv4 or IPv6 address. You can specify \"0.0.0.0\" for any IPv4 address,\n"
"\"::\" for any IPv6 address, or \"*\" for both IPv4 and IPv6.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblWebUiPort->setText(QApplication::translate("OptionsDialog", "Port:", Q_NULLPTR));
        labelServerDomains->setText(QApplication::translate("OptionsDialog", "Server domains:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        textServerDomains->setToolTip(QApplication::translate("OptionsDialog", "Whitelist for filtering HTTP Host header values.\n"
"In order to defend against DNS rebinding attack,\n"
"you should put in domain names used by WebUI server.\n"
"\n"
"Use ';' to split multiple entries. Can use wildcard '*'.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkWebUIUPnP->setText(QApplication::translate("OptionsDialog", "Use UPnP / NAT-PMP to forward the port from my router", Q_NULLPTR));
        checkWebUiHttps->setTitle(QApplication::translate("OptionsDialog", "&Use HTTPS instead of HTTP", Q_NULLPTR));
        lblSslCertStatus->setText(QString());
        lblWebUiCrt->setText(QApplication::translate("OptionsDialog", "Certificate:", Q_NULLPTR));
        btnWebUiCrt->setText(QApplication::translate("OptionsDialog", "Import SSL Certificate", Q_NULLPTR));
        lblSslKeyStatus->setText(QString());
        lblWebUiKey->setText(QApplication::translate("OptionsDialog", "Key:", Q_NULLPTR));
        btnWebUiKey->setText(QApplication::translate("OptionsDialog", "Import SSL Key", Q_NULLPTR));
        lblWebUIInfo->setText(QApplication::translate("OptionsDialog", "<a href=https://httpd.apache.org/docs/current/ssl/ssl_faq.html#aboutcerts>Information about certificates</a>", Q_NULLPTR));
        groupWebUiAuth->setTitle(QApplication::translate("OptionsDialog", "Authentication", Q_NULLPTR));
        textWebUiUsername->setText(QString());
        textWebUiPassword->setText(QString());
        checkBypassLocalAuth->setText(QApplication::translate("OptionsDialog", "Bypass authentication for clients on localhost", Q_NULLPTR));
        checkBypassAuthSubnetWhitelist->setText(QApplication::translate("OptionsDialog", "Bypass authentication for clients in whitelisted IP subnets", Q_NULLPTR));
        IPSubnetWhitelistButton->setText(QApplication::translate("OptionsDialog", "IP subnet whitelist...", Q_NULLPTR));
        lblWebUiUsername->setText(QApplication::translate("OptionsDialog", "Username:", Q_NULLPTR));
        lblWebUiPassword->setText(QApplication::translate("OptionsDialog", "Password:", Q_NULLPTR));
        checkDynDNS->setTitle(QApplication::translate("OptionsDialog", "Upda&te my dynamic domain name", Q_NULLPTR));
        label_19->setText(QApplication::translate("OptionsDialog", "Service:", Q_NULLPTR));
        registerDNSBtn->setText(QApplication::translate("OptionsDialog", "Register", Q_NULLPTR));
        label_20->setText(QApplication::translate("OptionsDialog", "Domain name:", Q_NULLPTR));
        label_21->setText(QApplication::translate("OptionsDialog", "Username:", Q_NULLPTR));
        label_22->setText(QApplication::translate("OptionsDialog", "Password:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDLG_H
