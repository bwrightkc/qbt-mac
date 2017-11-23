/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionOptions;
    QAction *actionAbout;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionStartAll;
    QAction *actionPauseAll;
    QAction *actionDelete;
    QAction *actionDownloadFromURL;
    QAction *actionCreateTorrent;
    QAction *actionSetUploadLimit;
    QAction *actionSetDownloadLimit;
    QAction *actionDocumentation;
    QAction *actionSetGlobalDownloadLimit;
    QAction *actionSetGlobalUploadLimit;
    QAction *actionBottomPriority;
    QAction *actionTopPriority;
    QAction *actionDecreasePriority;
    QAction *actionIncreasePriority;
    QAction *actionUseAlternativeSpeedLimits;
    QAction *actionTopToolBar;
    QAction *actionShowStatusbar;
    QAction *actionSpeedInTitleBar;
    QAction *actionRSSReader;
    QAction *actionSearchWidget;
    QAction *actionLock;
    QAction *actionDonateMoney;
    QAction *actionAutoExit;
    QAction *actionAutoSuspend;
    QAction *actionAutoHibernate;
    QAction *actionAutoShutdown;
    QAction *actionAutoShutdownDisabled;
    QAction *actionToggleVisibility;
    QAction *actionMinimize;
    QAction *actionStatistics;
    QAction *actionCheckForUpdates;
    QAction *actionManageCookies;
    QAction *actionExecutionLogs;
    QAction *actionNormalMessages;
    QAction *actionInformationMessages;
    QAction *actionWarningMessages;
    QAction *actionCriticalMessages;
    QWidget *centralWidget;
    QVBoxLayout *centralWidgetLayout;
    QMenuBar *menubar;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuOptions;
    QMenu *menuAutoShutdownOnDownloadsCompletion;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuLog;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(914, 563);
        MainWindow->setContextMenuPolicy(Qt::CustomContextMenu);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionStartAll = new QAction(MainWindow);
        actionStartAll->setObjectName(QStringLiteral("actionStartAll"));
        actionPauseAll = new QAction(MainWindow);
        actionPauseAll->setObjectName(QStringLiteral("actionPauseAll"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionDownloadFromURL = new QAction(MainWindow);
        actionDownloadFromURL->setObjectName(QStringLiteral("actionDownloadFromURL"));
        actionCreateTorrent = new QAction(MainWindow);
        actionCreateTorrent->setObjectName(QStringLiteral("actionCreateTorrent"));
        actionSetUploadLimit = new QAction(MainWindow);
        actionSetUploadLimit->setObjectName(QStringLiteral("actionSetUploadLimit"));
        actionSetDownloadLimit = new QAction(MainWindow);
        actionSetDownloadLimit->setObjectName(QStringLiteral("actionSetDownloadLimit"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QStringLiteral("actionDocumentation"));
        actionSetGlobalDownloadLimit = new QAction(MainWindow);
        actionSetGlobalDownloadLimit->setObjectName(QStringLiteral("actionSetGlobalDownloadLimit"));
        actionSetGlobalUploadLimit = new QAction(MainWindow);
        actionSetGlobalUploadLimit->setObjectName(QStringLiteral("actionSetGlobalUploadLimit"));
        actionBottomPriority = new QAction(MainWindow);
        actionBottomPriority->setObjectName(QStringLiteral("actionBottomPriority"));
        actionBottomPriority->setVisible(true);
        actionTopPriority = new QAction(MainWindow);
        actionTopPriority->setObjectName(QStringLiteral("actionTopPriority"));
        actionTopPriority->setVisible(true);
        actionDecreasePriority = new QAction(MainWindow);
        actionDecreasePriority->setObjectName(QStringLiteral("actionDecreasePriority"));
        actionDecreasePriority->setVisible(true);
        actionIncreasePriority = new QAction(MainWindow);
        actionIncreasePriority->setObjectName(QStringLiteral("actionIncreasePriority"));
        actionIncreasePriority->setVisible(true);
        actionUseAlternativeSpeedLimits = new QAction(MainWindow);
        actionUseAlternativeSpeedLimits->setObjectName(QStringLiteral("actionUseAlternativeSpeedLimits"));
        actionUseAlternativeSpeedLimits->setCheckable(true);
        actionTopToolBar = new QAction(MainWindow);
        actionTopToolBar->setObjectName(QStringLiteral("actionTopToolBar"));
        actionTopToolBar->setCheckable(true);
        actionShowStatusbar = new QAction(MainWindow);
        actionShowStatusbar->setObjectName(QStringLiteral("actionShowStatusbar"));
        actionShowStatusbar->setCheckable(true);
        actionSpeedInTitleBar = new QAction(MainWindow);
        actionSpeedInTitleBar->setObjectName(QStringLiteral("actionSpeedInTitleBar"));
        actionSpeedInTitleBar->setCheckable(true);
        actionRSSReader = new QAction(MainWindow);
        actionRSSReader->setObjectName(QStringLiteral("actionRSSReader"));
        actionRSSReader->setCheckable(true);
        actionSearchWidget = new QAction(MainWindow);
        actionSearchWidget->setObjectName(QStringLiteral("actionSearchWidget"));
        actionSearchWidget->setCheckable(true);
        actionLock = new QAction(MainWindow);
        actionLock->setObjectName(QStringLiteral("actionLock"));
#ifndef QT_NO_SHORTCUT
        actionLock->setShortcut(QStringLiteral("Ctrl+L"));
#endif // QT_NO_SHORTCUT
        actionDonateMoney = new QAction(MainWindow);
        actionDonateMoney->setObjectName(QStringLiteral("actionDonateMoney"));
        actionAutoExit = new QAction(MainWindow);
        actionAutoExit->setObjectName(QStringLiteral("actionAutoExit"));
        actionAutoExit->setCheckable(true);
        actionAutoSuspend = new QAction(MainWindow);
        actionAutoSuspend->setObjectName(QStringLiteral("actionAutoSuspend"));
        actionAutoSuspend->setCheckable(true);
        actionAutoHibernate = new QAction(MainWindow);
        actionAutoHibernate->setObjectName(QStringLiteral("actionAutoHibernate"));
        actionAutoHibernate->setCheckable(true);
        actionAutoShutdown = new QAction(MainWindow);
        actionAutoShutdown->setObjectName(QStringLiteral("actionAutoShutdown"));
        actionAutoShutdown->setCheckable(true);
        actionAutoShutdownDisabled = new QAction(MainWindow);
        actionAutoShutdownDisabled->setObjectName(QStringLiteral("actionAutoShutdownDisabled"));
        actionAutoShutdownDisabled->setCheckable(true);
        actionToggleVisibility = new QAction(MainWindow);
        actionToggleVisibility->setObjectName(QStringLiteral("actionToggleVisibility"));
        actionMinimize = new QAction(MainWindow);
        actionMinimize->setObjectName(QStringLiteral("actionMinimize"));
        actionMinimize->setText(QStringLiteral("Minimize"));
        actionStatistics = new QAction(MainWindow);
        actionStatistics->setObjectName(QStringLiteral("actionStatistics"));
        actionCheckForUpdates = new QAction(MainWindow);
        actionCheckForUpdates->setObjectName(QStringLiteral("actionCheckForUpdates"));
        actionManageCookies = new QAction(MainWindow);
        actionManageCookies->setObjectName(QStringLiteral("actionManageCookies"));
        actionExecutionLogs = new QAction(MainWindow);
        actionExecutionLogs->setObjectName(QStringLiteral("actionExecutionLogs"));
        actionExecutionLogs->setCheckable(true);
        actionNormalMessages = new QAction(MainWindow);
        actionNormalMessages->setObjectName(QStringLiteral("actionNormalMessages"));
        actionNormalMessages->setCheckable(true);
        actionInformationMessages = new QAction(MainWindow);
        actionInformationMessages->setObjectName(QStringLiteral("actionInformationMessages"));
        actionInformationMessages->setCheckable(true);
        actionWarningMessages = new QAction(MainWindow);
        actionWarningMessages->setObjectName(QStringLiteral("actionWarningMessages"));
        actionWarningMessages->setCheckable(true);
        actionCriticalMessages = new QAction(MainWindow);
        actionCriticalMessages->setObjectName(QStringLiteral("actionCriticalMessages"));
        actionCriticalMessages->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidgetLayout = new QVBoxLayout(centralWidget);
        centralWidgetLayout->setObjectName(QStringLiteral("centralWidgetLayout"));
        centralWidgetLayout->setContentsMargins(7, 3, 5, 0);
        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 914, 22));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuAutoShutdownOnDownloadsCompletion = new QMenu(menuOptions);
        menuAutoShutdownOnDownloadsCompletion->setObjectName(QStringLiteral("menuAutoShutdownOnDownloadsCompletion"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuLog = new QMenu(menuView);
        menuLog->setObjectName(QStringLiteral("menuLog"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setOrientation(Qt::Horizontal);
        toolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuEdit->addAction(actionStart);
        menuEdit->addAction(actionPause);
        menuEdit->addAction(actionStartAll);
        menuEdit->addAction(actionPauseAll);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionTopPriority);
        menuEdit->addAction(actionIncreasePriority);
        menuEdit->addAction(actionDecreasePriority);
        menuEdit->addAction(actionBottomPriority);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addAction(actionCheckForUpdates);
        menuHelp->addSeparator();
        menuHelp->addAction(actionDonateMoney);
        menuHelp->addAction(actionAbout);
        menuOptions->addAction(actionCreateTorrent);
        menuOptions->addSeparator();
        menuOptions->addAction(actionManageCookies);
        menuOptions->addAction(actionOptions);
        menuOptions->addSeparator();
        menuOptions->addAction(menuAutoShutdownOnDownloadsCompletion->menuAction());
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoShutdownDisabled);
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoExit);
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoSuspend);
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoHibernate);
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoShutdown);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionDownloadFromURL);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addSeparator();
        menuView->addAction(actionTopToolBar);
        menuView->addAction(actionShowStatusbar);
        menuView->addAction(actionSpeedInTitleBar);
        menuView->addSeparator();
        menuView->addAction(actionSearchWidget);
        menuView->addAction(actionRSSReader);
        menuView->addAction(menuLog->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionStatistics);
        menuView->addSeparator();
        menuView->addAction(actionLock);
        menuLog->addAction(actionExecutionLogs);
        menuLog->addSeparator();
        menuLog->addAction(actionNormalMessages);
        menuLog->addAction(actionInformationMessages);
        menuLog->addAction(actionWarningMessages);
        menuLog->addAction(actionCriticalMessages);
        toolBar->addAction(actionDownloadFromURL);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionStart);
        toolBar->addAction(actionPause);
        toolBar->addAction(actionTopPriority);
        toolBar->addAction(actionIncreasePriority);
        toolBar->addAction(actionDecreasePriority);
        toolBar->addAction(actionBottomPriority);
        toolBar->addSeparator();
        toolBar->addAction(actionOptions);
        toolBar->addAction(actionLock);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionOpen->setText(QApplication::translate("MainWindow", "&Add Torrent File...", Q_NULLPTR));
        actionOpen->setIconText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
        actionOptions->setText(QApplication::translate("MainWindow", "&Options...", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
        actionStart->setText(QApplication::translate("MainWindow", "&Resume", Q_NULLPTR));
        actionPause->setText(QApplication::translate("MainWindow", "&Pause", Q_NULLPTR));
        actionStartAll->setText(QApplication::translate("MainWindow", "R&esume All", Q_NULLPTR));
        actionPauseAll->setText(QApplication::translate("MainWindow", "P&ause All", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("MainWindow", "&Delete", Q_NULLPTR));
        actionDownloadFromURL->setText(QApplication::translate("MainWindow", "Add Torrent &Link...", Q_NULLPTR));
        actionDownloadFromURL->setIconText(QApplication::translate("MainWindow", "Open URL", Q_NULLPTR));
        actionCreateTorrent->setText(QApplication::translate("MainWindow", "Torrent &Creator", Q_NULLPTR));
        actionSetUploadLimit->setText(QApplication::translate("MainWindow", "Set Upload Limit...", Q_NULLPTR));
        actionSetDownloadLimit->setText(QApplication::translate("MainWindow", "Set Download Limit...", Q_NULLPTR));
        actionDocumentation->setText(QApplication::translate("MainWindow", "&Documentation", Q_NULLPTR));
        actionSetGlobalDownloadLimit->setText(QApplication::translate("MainWindow", "Set Global Download Limit...", Q_NULLPTR));
        actionSetGlobalUploadLimit->setText(QApplication::translate("MainWindow", "Set Global Upload Limit...", Q_NULLPTR));
        actionBottomPriority->setText(QApplication::translate("MainWindow", "Minimum Priority", Q_NULLPTR));
        actionTopPriority->setText(QApplication::translate("MainWindow", "Top Priority", Q_NULLPTR));
        actionDecreasePriority->setText(QApplication::translate("MainWindow", "Decrease Priority", Q_NULLPTR));
        actionIncreasePriority->setText(QApplication::translate("MainWindow", "Increase Priority", Q_NULLPTR));
        actionUseAlternativeSpeedLimits->setText(QApplication::translate("MainWindow", "Alternative Speed Limits", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUseAlternativeSpeedLimits->setToolTip(QApplication::translate("MainWindow", "Alternative Speed Limits", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTopToolBar->setText(QApplication::translate("MainWindow", "&Top Toolbar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTopToolBar->setToolTip(QApplication::translate("MainWindow", "Display Top Toolbar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowStatusbar->setText(QApplication::translate("MainWindow", "Status &Bar", Q_NULLPTR));
        actionSpeedInTitleBar->setText(QApplication::translate("MainWindow", "S&peed in Title Bar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSpeedInTitleBar->setToolTip(QApplication::translate("MainWindow", "Show Transfer Speed in Title Bar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRSSReader->setText(QApplication::translate("MainWindow", "&RSS Reader", Q_NULLPTR));
        actionSearchWidget->setText(QApplication::translate("MainWindow", "Search &Engine", Q_NULLPTR));
        actionLock->setText(QApplication::translate("MainWindow", "L&ock qBittorrent", Q_NULLPTR));
        actionLock->setIconText(QApplication::translate("MainWindow", "Lock", Q_NULLPTR));
        actionDonateMoney->setText(QApplication::translate("MainWindow", "Do&nate!", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDonateMoney->setToolTip(QApplication::translate("MainWindow", "If you like qBittorrent, please donate!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAutoExit->setText(QApplication::translate("MainWindow", "&Exit qBittorrent", Q_NULLPTR));
        actionAutoSuspend->setText(QApplication::translate("MainWindow", "&Suspend System", Q_NULLPTR));
        actionAutoHibernate->setText(QApplication::translate("MainWindow", "&Hibernate System", Q_NULLPTR));
        actionAutoShutdown->setText(QApplication::translate("MainWindow", "S&hutdown System", Q_NULLPTR));
        actionAutoShutdownDisabled->setText(QApplication::translate("MainWindow", "&Disabled", Q_NULLPTR));
        actionToggleVisibility->setText(QApplication::translate("MainWindow", "Show", Q_NULLPTR));
        actionStatistics->setText(QApplication::translate("MainWindow", "&Statistics", Q_NULLPTR));
        actionCheckForUpdates->setText(QApplication::translate("MainWindow", "Check for Updates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCheckForUpdates->setToolTip(QApplication::translate("MainWindow", "Check for Program Updates", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionManageCookies->setText(QApplication::translate("MainWindow", "Manage Cookies...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionManageCookies->setToolTip(QApplication::translate("MainWindow", "Manage stored network cookies", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionExecutionLogs->setText(QApplication::translate("MainWindow", "Show", Q_NULLPTR));
        actionNormalMessages->setText(QApplication::translate("MainWindow", "Normal Messages", Q_NULLPTR));
        actionInformationMessages->setText(QApplication::translate("MainWindow", "Information Messages", Q_NULLPTR));
        actionWarningMessages->setText(QApplication::translate("MainWindow", "Warning Messages", Q_NULLPTR));
        actionCriticalMessages->setText(QApplication::translate("MainWindow", "Critical Messages", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("MainWindow", "&Tools", Q_NULLPTR));
        menuAutoShutdownOnDownloadsCompletion->setTitle(QApplication::translate("MainWindow", "On Downloads &Done", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", Q_NULLPTR));
        menuLog->setTitle(QApplication::translate("MainWindow", "&Log", Q_NULLPTR));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H