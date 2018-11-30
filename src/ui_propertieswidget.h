/********************************************************************************
** Form generated from reading UI file 'propertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESWIDGET_H
#define UI_PROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <torrentcontenttreeview.h>

QT_BEGIN_NAMESPACE

class Ui_PropertiesWidget
{
public:
    QAction *actionNotDownloaded;
    QAction *actionMaximum;
    QAction *actionHigh;
    QAction *actionNormal;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedProperties;
    QWidget *pageGeneral;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *groupBar;
    QGridLayout *groupBarLayout;
    QLabel *labelDownloadedPieces;
    QLabel *labelProgressVal;
    QLabel *labelPiecesAvailability;
    QLabel *labelAverageAvailabilityVal;
    QLabel *tempAvailabilityBarArea;
    QLabel *tempProgressBarArea;
    QFrame *lineBelowBars;
    QGroupBox *groupTransferBox;
    QGridLayout *gridLayout_2;
    QLabel *labelDlSpeedVal;
    QLabel *labelUpSpeed;
    QLabel *labelUpSpeedVal;
    QLabel *labelPeers;
    QLabel *labelConnections;
    QLabel *labelReannounceInVal;
    QLabel *labelETAVal;
    QLabel *labelDlLimit;
    QLabel *labelRatio;
    QLabel *labelConnectionsVal;
    QLabel *labelPeersVal;
    QLabel *labelDownloaded;
    QLabel *labelUpLimit;
    QLabel *labelLastSeenComplete;
    QLabel *labelDlLimitVal;
    QLabel *labelUpTotalVal;
    QLabel *labelReannounceIn;
    QLabel *labelLastSeenCompleteVal;
    QLabel *labelSeeds;
    QLabel *labelDlSpeed;
    QLabel *labelDlTotalVal;
    QLabel *labelWastedVal;
    QLabel *labelShareRatioVal;
    QLabel *labelUploaded;
    QLabel *labelSeedsVal;
    QLabel *labelElapsedVal;
    QLabel *labelTimeActive;
    QLabel *labelUpLimitVal;
    QLabel *labelETA;
    QLabel *labelWasted;
    QGroupBox *groupInfosBox;
    QGridLayout *gridLayout;
    QLabel *labelTotalSize;
    QLabel *labelTotalSizeVal;
    QLabel *labelTotalPieces;
    QLabel *labelTotalPiecesVal;
    QLabel *labelCreatedBy;
    QLabel *labelCreatedByVal;
    QLabel *labelAddedOn;
    QLabel *labelAddedOnVal;
    QLabel *labelCompletedOn;
    QLabel *labelCompletedOnVal;
    QLabel *labelCreatedOn;
    QLabel *labelCreatedOnVal;
    QLabel *labelHash;
    QLabel *labelHashVal;
    QLabel *labelSavePath;
    QLabel *labelSavePathVal;
    QLabel *labelComment;
    QLabel *labelCommentVal;
    QWidget *pageTrackers;
    QHBoxLayout *hBoxLayoutTrackers;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_2;
    QPushButton *trackerUpButton;
    QPushButton *trackerDownButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *pagePeers;
    QVBoxLayout *vBoxLayoutPeerPage;
    QWidget *pageSources;
    QVBoxLayout *verticalLayout_9;
    QListWidget *listWebSeeds;
    QWidget *pageContents;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *contentFilterLayout;
    QPushButton *selectAllButton;
    QPushButton *selectNoneButton;
    QSpacerItem *horizontalSpacer;
    TorrentContentTreeView *filesList;
    QWidget *pageSpeed;
    QVBoxLayout *speedLayout;

    void setupUi(QWidget *PropertiesWidget)
    {
        if (PropertiesWidget->objectName().isEmpty())
            PropertiesWidget->setObjectName(QStringLiteral("PropertiesWidget"));
        PropertiesWidget->resize(551, 452);
        actionNotDownloaded = new QAction(PropertiesWidget);
        actionNotDownloaded->setObjectName(QStringLiteral("actionNotDownloaded"));
        actionMaximum = new QAction(PropertiesWidget);
        actionMaximum->setObjectName(QStringLiteral("actionMaximum"));
        actionHigh = new QAction(PropertiesWidget);
        actionHigh->setObjectName(QStringLiteral("actionHigh"));
        actionNormal = new QAction(PropertiesWidget);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        verticalLayout = new QVBoxLayout(PropertiesWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedProperties = new QStackedWidget(PropertiesWidget);
        stackedProperties->setObjectName(QStringLiteral("stackedProperties"));
        pageGeneral = new QWidget();
        pageGeneral->setObjectName(QStringLiteral("pageGeneral"));
        verticalLayout_7 = new QVBoxLayout(pageGeneral);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(pageGeneral);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 450));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBar = new QWidget(scrollAreaWidgetContents);
        groupBar->setObjectName(QStringLiteral("groupBar"));
        groupBarLayout = new QGridLayout(groupBar);
        groupBarLayout->setObjectName(QStringLiteral("groupBarLayout"));
        groupBarLayout->setContentsMargins(-1, 4, -1, 4);
        labelDownloadedPieces = new QLabel(groupBar);
        labelDownloadedPieces->setObjectName(QStringLiteral("labelDownloadedPieces"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelDownloadedPieces->sizePolicy().hasHeightForWidth());
        labelDownloadedPieces->setSizePolicy(sizePolicy);
        labelDownloadedPieces->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        groupBarLayout->addWidget(labelDownloadedPieces, 0, 0, 1, 1);

        labelProgressVal = new QLabel(groupBar);
        labelProgressVal->setObjectName(QStringLiteral("labelProgressVal"));
        sizePolicy.setHeightForWidth(labelProgressVal->sizePolicy().hasHeightForWidth());
        labelProgressVal->setSizePolicy(sizePolicy);
        labelProgressVal->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(labelProgressVal, 0, 2, 1, 1);

        labelPiecesAvailability = new QLabel(groupBar);
        labelPiecesAvailability->setObjectName(QStringLiteral("labelPiecesAvailability"));
        sizePolicy.setHeightForWidth(labelPiecesAvailability->sizePolicy().hasHeightForWidth());
        labelPiecesAvailability->setSizePolicy(sizePolicy);
        labelPiecesAvailability->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        groupBarLayout->addWidget(labelPiecesAvailability, 1, 0, 1, 1);

        labelAverageAvailabilityVal = new QLabel(groupBar);
        labelAverageAvailabilityVal->setObjectName(QStringLiteral("labelAverageAvailabilityVal"));
        sizePolicy.setHeightForWidth(labelAverageAvailabilityVal->sizePolicy().hasHeightForWidth());
        labelAverageAvailabilityVal->setSizePolicy(sizePolicy);
        labelAverageAvailabilityVal->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(labelAverageAvailabilityVal, 1, 2, 1, 1);

        tempAvailabilityBarArea = new QLabel(groupBar);
        tempAvailabilityBarArea->setObjectName(QStringLiteral("tempAvailabilityBarArea"));
        tempAvailabilityBarArea->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(tempAvailabilityBarArea, 1, 1, 1, 1);

        tempProgressBarArea = new QLabel(groupBar);
        tempProgressBarArea->setObjectName(QStringLiteral("tempProgressBarArea"));
        tempProgressBarArea->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(tempProgressBarArea, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBar);

        lineBelowBars = new QFrame(scrollAreaWidgetContents);
        lineBelowBars->setObjectName(QStringLiteral("lineBelowBars"));
        lineBelowBars->setFrameShape(QFrame::HLine);
        lineBelowBars->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(lineBelowBars);

        groupTransferBox = new QGroupBox(scrollAreaWidgetContents);
        groupTransferBox->setObjectName(QStringLiteral("groupTransferBox"));
        gridLayout_2 = new QGridLayout(groupTransferBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 4, -1, 4);
        labelDlSpeedVal = new QLabel(groupTransferBox);
        labelDlSpeedVal->setObjectName(QStringLiteral("labelDlSpeedVal"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelDlSpeedVal->sizePolicy().hasHeightForWidth());
        labelDlSpeedVal->setSizePolicy(sizePolicy1);
        labelDlSpeedVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelDlSpeedVal, 2, 1, 1, 1);

        labelUpSpeed = new QLabel(groupTransferBox);
        labelUpSpeed->setObjectName(QStringLiteral("labelUpSpeed"));
        sizePolicy.setHeightForWidth(labelUpSpeed->sizePolicy().hasHeightForWidth());
        labelUpSpeed->setSizePolicy(sizePolicy);
        labelUpSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelUpSpeed, 2, 2, 1, 1);

        labelUpSpeedVal = new QLabel(groupTransferBox);
        labelUpSpeedVal->setObjectName(QStringLiteral("labelUpSpeedVal"));
        sizePolicy1.setHeightForWidth(labelUpSpeedVal->sizePolicy().hasHeightForWidth());
        labelUpSpeedVal->setSizePolicy(sizePolicy1);
        labelUpSpeedVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelUpSpeedVal, 2, 3, 1, 4);

        labelPeers = new QLabel(groupTransferBox);
        labelPeers->setObjectName(QStringLiteral("labelPeers"));
        sizePolicy.setHeightForWidth(labelPeers->sizePolicy().hasHeightForWidth());
        labelPeers->setSizePolicy(sizePolicy);
        labelPeers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelPeers, 2, 4, 1, 1);

        labelConnections = new QLabel(groupTransferBox);
        labelConnections->setObjectName(QStringLiteral("labelConnections"));
        sizePolicy.setHeightForWidth(labelConnections->sizePolicy().hasHeightForWidth());
        labelConnections->setSizePolicy(sizePolicy);
        labelConnections->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelConnections, 0, 4, 1, 1);

        labelReannounceInVal = new QLabel(groupTransferBox);
        labelReannounceInVal->setObjectName(QStringLiteral("labelReannounceInVal"));
        sizePolicy1.setHeightForWidth(labelReannounceInVal->sizePolicy().hasHeightForWidth());
        labelReannounceInVal->setSizePolicy(sizePolicy1);
        labelReannounceInVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelReannounceInVal, 4, 3, 1, 1);

        labelETAVal = new QLabel(groupTransferBox);
        labelETAVal->setObjectName(QStringLiteral("labelETAVal"));
        sizePolicy1.setHeightForWidth(labelETAVal->sizePolicy().hasHeightForWidth());
        labelETAVal->setSizePolicy(sizePolicy1);
        labelETAVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelETAVal, 0, 3, 1, 1);

        labelDlLimit = new QLabel(groupTransferBox);
        labelDlLimit->setObjectName(QStringLiteral("labelDlLimit"));
        sizePolicy.setHeightForWidth(labelDlLimit->sizePolicy().hasHeightForWidth());
        labelDlLimit->setSizePolicy(sizePolicy);
        labelDlLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelDlLimit, 3, 0, 1, 1);

        labelRatio = new QLabel(groupTransferBox);
        labelRatio->setObjectName(QStringLiteral("labelRatio"));
        sizePolicy.setHeightForWidth(labelRatio->sizePolicy().hasHeightForWidth());
        labelRatio->setSizePolicy(sizePolicy);
        labelRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelRatio, 4, 0, 1, 1);

        labelConnectionsVal = new QLabel(groupTransferBox);
        labelConnectionsVal->setObjectName(QStringLiteral("labelConnectionsVal"));
        sizePolicy1.setHeightForWidth(labelConnectionsVal->sizePolicy().hasHeightForWidth());
        labelConnectionsVal->setSizePolicy(sizePolicy1);
        labelConnectionsVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelConnectionsVal, 0, 5, 1, 1);

        labelPeersVal = new QLabel(groupTransferBox);
        labelPeersVal->setObjectName(QStringLiteral("labelPeersVal"));
        sizePolicy1.setHeightForWidth(labelPeersVal->sizePolicy().hasHeightForWidth());
        labelPeersVal->setSizePolicy(sizePolicy1);
        labelPeersVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelPeersVal, 2, 5, 1, 1);

        labelDownloaded = new QLabel(groupTransferBox);
        labelDownloaded->setObjectName(QStringLiteral("labelDownloaded"));
        sizePolicy.setHeightForWidth(labelDownloaded->sizePolicy().hasHeightForWidth());
        labelDownloaded->setSizePolicy(sizePolicy);
        labelDownloaded->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelDownloaded, 1, 0, 1, 1);

        labelUpLimit = new QLabel(groupTransferBox);
        labelUpLimit->setObjectName(QStringLiteral("labelUpLimit"));
        sizePolicy.setHeightForWidth(labelUpLimit->sizePolicy().hasHeightForWidth());
        labelUpLimit->setSizePolicy(sizePolicy);
        labelUpLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelUpLimit, 3, 2, 1, 1);

        labelLastSeenComplete = new QLabel(groupTransferBox);
        labelLastSeenComplete->setObjectName(QStringLiteral("labelLastSeenComplete"));
        sizePolicy.setHeightForWidth(labelLastSeenComplete->sizePolicy().hasHeightForWidth());
        labelLastSeenComplete->setSizePolicy(sizePolicy);
        labelLastSeenComplete->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelLastSeenComplete, 4, 4, 1, 1);

        labelDlLimitVal = new QLabel(groupTransferBox);
        labelDlLimitVal->setObjectName(QStringLiteral("labelDlLimitVal"));
        sizePolicy1.setHeightForWidth(labelDlLimitVal->sizePolicy().hasHeightForWidth());
        labelDlLimitVal->setSizePolicy(sizePolicy1);
        labelDlLimitVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelDlLimitVal, 3, 1, 1, 1);

        labelUpTotalVal = new QLabel(groupTransferBox);
        labelUpTotalVal->setObjectName(QStringLiteral("labelUpTotalVal"));
        sizePolicy1.setHeightForWidth(labelUpTotalVal->sizePolicy().hasHeightForWidth());
        labelUpTotalVal->setSizePolicy(sizePolicy1);
        labelUpTotalVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelUpTotalVal, 1, 3, 1, 4);

        labelReannounceIn = new QLabel(groupTransferBox);
        labelReannounceIn->setObjectName(QStringLiteral("labelReannounceIn"));
        sizePolicy.setHeightForWidth(labelReannounceIn->sizePolicy().hasHeightForWidth());
        labelReannounceIn->setSizePolicy(sizePolicy);
        labelReannounceIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelReannounceIn, 4, 2, 1, 1);

        labelLastSeenCompleteVal = new QLabel(groupTransferBox);
        labelLastSeenCompleteVal->setObjectName(QStringLiteral("labelLastSeenCompleteVal"));
        sizePolicy1.setHeightForWidth(labelLastSeenCompleteVal->sizePolicy().hasHeightForWidth());
        labelLastSeenCompleteVal->setSizePolicy(sizePolicy1);
        labelLastSeenCompleteVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelLastSeenCompleteVal, 4, 5, 1, 1);

        labelSeeds = new QLabel(groupTransferBox);
        labelSeeds->setObjectName(QStringLiteral("labelSeeds"));
        sizePolicy.setHeightForWidth(labelSeeds->sizePolicy().hasHeightForWidth());
        labelSeeds->setSizePolicy(sizePolicy);
        labelSeeds->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelSeeds, 1, 4, 1, 1);

        labelDlSpeed = new QLabel(groupTransferBox);
        labelDlSpeed->setObjectName(QStringLiteral("labelDlSpeed"));
        sizePolicy.setHeightForWidth(labelDlSpeed->sizePolicy().hasHeightForWidth());
        labelDlSpeed->setSizePolicy(sizePolicy);
        labelDlSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelDlSpeed, 2, 0, 1, 1);

        labelDlTotalVal = new QLabel(groupTransferBox);
        labelDlTotalVal->setObjectName(QStringLiteral("labelDlTotalVal"));
        sizePolicy1.setHeightForWidth(labelDlTotalVal->sizePolicy().hasHeightForWidth());
        labelDlTotalVal->setSizePolicy(sizePolicy1);
        labelDlTotalVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelDlTotalVal, 1, 1, 1, 1);

        labelWastedVal = new QLabel(groupTransferBox);
        labelWastedVal->setObjectName(QStringLiteral("labelWastedVal"));
        sizePolicy1.setHeightForWidth(labelWastedVal->sizePolicy().hasHeightForWidth());
        labelWastedVal->setSizePolicy(sizePolicy1);
        labelWastedVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelWastedVal, 3, 5, 1, 1);

        labelShareRatioVal = new QLabel(groupTransferBox);
        labelShareRatioVal->setObjectName(QStringLiteral("labelShareRatioVal"));
        sizePolicy1.setHeightForWidth(labelShareRatioVal->sizePolicy().hasHeightForWidth());
        labelShareRatioVal->setSizePolicy(sizePolicy1);
        labelShareRatioVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelShareRatioVal, 4, 1, 1, 1);

        labelUploaded = new QLabel(groupTransferBox);
        labelUploaded->setObjectName(QStringLiteral("labelUploaded"));
        sizePolicy.setHeightForWidth(labelUploaded->sizePolicy().hasHeightForWidth());
        labelUploaded->setSizePolicy(sizePolicy);
        labelUploaded->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelUploaded, 1, 2, 1, 1);

        labelSeedsVal = new QLabel(groupTransferBox);
        labelSeedsVal->setObjectName(QStringLiteral("labelSeedsVal"));
        sizePolicy1.setHeightForWidth(labelSeedsVal->sizePolicy().hasHeightForWidth());
        labelSeedsVal->setSizePolicy(sizePolicy1);
        labelSeedsVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelSeedsVal, 1, 5, 1, 1);

        labelElapsedVal = new QLabel(groupTransferBox);
        labelElapsedVal->setObjectName(QStringLiteral("labelElapsedVal"));
        sizePolicy1.setHeightForWidth(labelElapsedVal->sizePolicy().hasHeightForWidth());
        labelElapsedVal->setSizePolicy(sizePolicy1);
        labelElapsedVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelElapsedVal, 0, 1, 1, 1);

        labelTimeActive = new QLabel(groupTransferBox);
        labelTimeActive->setObjectName(QStringLiteral("labelTimeActive"));
        sizePolicy.setHeightForWidth(labelTimeActive->sizePolicy().hasHeightForWidth());
        labelTimeActive->setSizePolicy(sizePolicy);
        labelTimeActive->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelTimeActive, 0, 0, 1, 1);

        labelUpLimitVal = new QLabel(groupTransferBox);
        labelUpLimitVal->setObjectName(QStringLiteral("labelUpLimitVal"));
        sizePolicy1.setHeightForWidth(labelUpLimitVal->sizePolicy().hasHeightForWidth());
        labelUpLimitVal->setSizePolicy(sizePolicy1);
        labelUpLimitVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelUpLimitVal, 3, 3, 1, 1);

        labelETA = new QLabel(groupTransferBox);
        labelETA->setObjectName(QStringLiteral("labelETA"));
        sizePolicy.setHeightForWidth(labelETA->sizePolicy().hasHeightForWidth());
        labelETA->setSizePolicy(sizePolicy);
        labelETA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelETA, 0, 2, 1, 1);

        labelWasted = new QLabel(groupTransferBox);
        labelWasted->setObjectName(QStringLiteral("labelWasted"));
        sizePolicy.setHeightForWidth(labelWasted->sizePolicy().hasHeightForWidth());
        labelWasted->setSizePolicy(sizePolicy);
        labelWasted->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelWasted, 3, 4, 1, 1);


        verticalLayout_2->addWidget(groupTransferBox);

        groupInfosBox = new QGroupBox(scrollAreaWidgetContents);
        groupInfosBox->setObjectName(QStringLiteral("groupInfosBox"));
        gridLayout = new QGridLayout(groupInfosBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 4, -1, 2);
        labelTotalSize = new QLabel(groupInfosBox);
        labelTotalSize->setObjectName(QStringLiteral("labelTotalSize"));
        sizePolicy.setHeightForWidth(labelTotalSize->sizePolicy().hasHeightForWidth());
        labelTotalSize->setSizePolicy(sizePolicy);
        labelTotalSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTotalSize, 0, 0, 1, 1);

        labelTotalSizeVal = new QLabel(groupInfosBox);
        labelTotalSizeVal->setObjectName(QStringLiteral("labelTotalSizeVal"));
        sizePolicy1.setHeightForWidth(labelTotalSizeVal->sizePolicy().hasHeightForWidth());
        labelTotalSizeVal->setSizePolicy(sizePolicy1);
        labelTotalSizeVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelTotalSizeVal, 0, 1, 1, 1);

        labelTotalPieces = new QLabel(groupInfosBox);
        labelTotalPieces->setObjectName(QStringLiteral("labelTotalPieces"));
        sizePolicy.setHeightForWidth(labelTotalPieces->sizePolicy().hasHeightForWidth());
        labelTotalPieces->setSizePolicy(sizePolicy);
        labelTotalPieces->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTotalPieces, 0, 2, 1, 1);

        labelTotalPiecesVal = new QLabel(groupInfosBox);
        labelTotalPiecesVal->setObjectName(QStringLiteral("labelTotalPiecesVal"));
        sizePolicy1.setHeightForWidth(labelTotalPiecesVal->sizePolicy().hasHeightForWidth());
        labelTotalPiecesVal->setSizePolicy(sizePolicy1);
        labelTotalPiecesVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelTotalPiecesVal, 0, 3, 1, 1);

        labelCreatedBy = new QLabel(groupInfosBox);
        labelCreatedBy->setObjectName(QStringLiteral("labelCreatedBy"));
        sizePolicy.setHeightForWidth(labelCreatedBy->sizePolicy().hasHeightForWidth());
        labelCreatedBy->setSizePolicy(sizePolicy);
        labelCreatedBy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCreatedBy, 0, 4, 1, 1);

        labelCreatedByVal = new QLabel(groupInfosBox);
        labelCreatedByVal->setObjectName(QStringLiteral("labelCreatedByVal"));
        sizePolicy1.setHeightForWidth(labelCreatedByVal->sizePolicy().hasHeightForWidth());
        labelCreatedByVal->setSizePolicy(sizePolicy1);
        labelCreatedByVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelCreatedByVal, 0, 5, 1, 1);

        labelAddedOn = new QLabel(groupInfosBox);
        labelAddedOn->setObjectName(QStringLiteral("labelAddedOn"));
        sizePolicy.setHeightForWidth(labelAddedOn->sizePolicy().hasHeightForWidth());
        labelAddedOn->setSizePolicy(sizePolicy);
        labelAddedOn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAddedOn, 1, 0, 1, 1);

        labelAddedOnVal = new QLabel(groupInfosBox);
        labelAddedOnVal->setObjectName(QStringLiteral("labelAddedOnVal"));
        sizePolicy1.setHeightForWidth(labelAddedOnVal->sizePolicy().hasHeightForWidth());
        labelAddedOnVal->setSizePolicy(sizePolicy1);
        labelAddedOnVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelAddedOnVal, 1, 1, 1, 1);

        labelCompletedOn = new QLabel(groupInfosBox);
        labelCompletedOn->setObjectName(QStringLiteral("labelCompletedOn"));
        sizePolicy.setHeightForWidth(labelCompletedOn->sizePolicy().hasHeightForWidth());
        labelCompletedOn->setSizePolicy(sizePolicy);
        labelCompletedOn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCompletedOn, 1, 2, 1, 1);

        labelCompletedOnVal = new QLabel(groupInfosBox);
        labelCompletedOnVal->setObjectName(QStringLiteral("labelCompletedOnVal"));
        sizePolicy1.setHeightForWidth(labelCompletedOnVal->sizePolicy().hasHeightForWidth());
        labelCompletedOnVal->setSizePolicy(sizePolicy1);
        labelCompletedOnVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelCompletedOnVal, 1, 3, 1, 1);

        labelCreatedOn = new QLabel(groupInfosBox);
        labelCreatedOn->setObjectName(QStringLiteral("labelCreatedOn"));
        sizePolicy.setHeightForWidth(labelCreatedOn->sizePolicy().hasHeightForWidth());
        labelCreatedOn->setSizePolicy(sizePolicy);
        labelCreatedOn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCreatedOn, 1, 4, 1, 1);

        labelCreatedOnVal = new QLabel(groupInfosBox);
        labelCreatedOnVal->setObjectName(QStringLiteral("labelCreatedOnVal"));
        sizePolicy1.setHeightForWidth(labelCreatedOnVal->sizePolicy().hasHeightForWidth());
        labelCreatedOnVal->setSizePolicy(sizePolicy1);
        labelCreatedOnVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelCreatedOnVal, 1, 5, 1, 1);

        labelHash = new QLabel(groupInfosBox);
        labelHash->setObjectName(QStringLiteral("labelHash"));
        sizePolicy.setHeightForWidth(labelHash->sizePolicy().hasHeightForWidth());
        labelHash->setSizePolicy(sizePolicy);
        labelHash->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelHash, 2, 0, 1, 1);

        labelHashVal = new QLabel(groupInfosBox);
        labelHashVal->setObjectName(QStringLiteral("labelHashVal"));
        sizePolicy1.setHeightForWidth(labelHashVal->sizePolicy().hasHeightForWidth());
        labelHashVal->setSizePolicy(sizePolicy1);
        labelHashVal->setTextFormat(Qt::PlainText);
        labelHashVal->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelHashVal, 2, 1, 1, 5);

        labelSavePath = new QLabel(groupInfosBox);
        labelSavePath->setObjectName(QStringLiteral("labelSavePath"));
        sizePolicy.setHeightForWidth(labelSavePath->sizePolicy().hasHeightForWidth());
        labelSavePath->setSizePolicy(sizePolicy);
        labelSavePath->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(labelSavePath, 3, 0, 1, 1);

        labelSavePathVal = new QLabel(groupInfosBox);
        labelSavePathVal->setObjectName(QStringLiteral("labelSavePathVal"));
        sizePolicy1.setHeightForWidth(labelSavePathVal->sizePolicy().hasHeightForWidth());
        labelSavePathVal->setSizePolicy(sizePolicy1);
        labelSavePathVal->setTextFormat(Qt::PlainText);
        labelSavePathVal->setWordWrap(true);
        labelSavePathVal->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelSavePathVal, 3, 1, 1, 5);

        labelComment = new QLabel(groupInfosBox);
        labelComment->setObjectName(QStringLiteral("labelComment"));
        sizePolicy.setHeightForWidth(labelComment->sizePolicy().hasHeightForWidth());
        labelComment->setSizePolicy(sizePolicy);
        labelComment->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(labelComment, 4, 0, 1, 1);

        labelCommentVal = new QLabel(groupInfosBox);
        labelCommentVal->setObjectName(QStringLiteral("labelCommentVal"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelCommentVal->sizePolicy().hasHeightForWidth());
        labelCommentVal->setSizePolicy(sizePolicy2);
        labelCommentVal->setTextFormat(Qt::RichText);
        labelCommentVal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelCommentVal->setWordWrap(true);
        labelCommentVal->setOpenExternalLinks(true);
        labelCommentVal->setTextInteractionFlags(Qt::TextBrowserInteraction);
        labelCommentVal->setProperty("openLinks", QVariant(true));

        gridLayout->addWidget(labelCommentVal, 4, 1, 1, 5);


        verticalLayout_2->addWidget(groupInfosBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_7->addWidget(scrollArea);

        stackedProperties->addWidget(pageGeneral);
        pageTrackers = new QWidget();
        pageTrackers->setObjectName(QStringLiteral("pageTrackers"));
        hBoxLayoutTrackers = new QHBoxLayout(pageTrackers);
        hBoxLayoutTrackers->setObjectName(QStringLiteral("hBoxLayoutTrackers"));
        hBoxLayoutTrackers->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        trackerUpButton = new QPushButton(pageTrackers);
        trackerUpButton->setObjectName(QStringLiteral("trackerUpButton"));

        verticalLayout_10->addWidget(trackerUpButton);

        trackerDownButton = new QPushButton(pageTrackers);
        trackerDownButton->setObjectName(QStringLiteral("trackerDownButton"));

        verticalLayout_10->addWidget(trackerDownButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);


        hBoxLayoutTrackers->addLayout(verticalLayout_10);

        stackedProperties->addWidget(pageTrackers);
        pagePeers = new QWidget();
        pagePeers->setObjectName(QStringLiteral("pagePeers"));
        vBoxLayoutPeerPage = new QVBoxLayout(pagePeers);
        vBoxLayoutPeerPage->setObjectName(QStringLiteral("vBoxLayoutPeerPage"));
        vBoxLayoutPeerPage->setContentsMargins(0, 0, 0, 0);
        stackedProperties->addWidget(pagePeers);
        pageSources = new QWidget();
        pageSources->setObjectName(QStringLiteral("pageSources"));
        verticalLayout_9 = new QVBoxLayout(pageSources);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        listWebSeeds = new QListWidget(pageSources);
        listWebSeeds->setObjectName(QStringLiteral("listWebSeeds"));
        listWebSeeds->setContextMenuPolicy(Qt::CustomContextMenu);
        listWebSeeds->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_9->addWidget(listWebSeeds);

        stackedProperties->addWidget(pageSources);
        pageContents = new QWidget();
        pageContents->setObjectName(QStringLiteral("pageContents"));
        verticalLayout_3 = new QVBoxLayout(pageContents);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        contentFilterLayout = new QHBoxLayout();
        contentFilterLayout->setObjectName(QStringLiteral("contentFilterLayout"));
        selectAllButton = new QPushButton(pageContents);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));

        contentFilterLayout->addWidget(selectAllButton);

        selectNoneButton = new QPushButton(pageContents);
        selectNoneButton->setObjectName(QStringLiteral("selectNoneButton"));

        contentFilterLayout->addWidget(selectNoneButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        contentFilterLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(contentFilterLayout);

        filesList = new TorrentContentTreeView(pageContents);
        filesList->setObjectName(QStringLiteral("filesList"));
        filesList->setContextMenuPolicy(Qt::CustomContextMenu);
        filesList->setEditTriggers(QAbstractItemView::AllEditTriggers);
        filesList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        filesList->setAllColumnsShowFocus(true);

        verticalLayout_3->addWidget(filesList);

        stackedProperties->addWidget(pageContents);
        pageSpeed = new QWidget();
        pageSpeed->setObjectName(QStringLiteral("pageSpeed"));
        speedLayout = new QVBoxLayout(pageSpeed);
        speedLayout->setObjectName(QStringLiteral("speedLayout"));
        speedLayout->setContentsMargins(0, 0, 0, 0);
        stackedProperties->addWidget(pageSpeed);

        verticalLayout->addWidget(stackedProperties);


        retranslateUi(PropertiesWidget);

        stackedProperties->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *PropertiesWidget)
    {
        actionNotDownloaded->setText(QApplication::translate("PropertiesWidget", "Do not download", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNotDownloaded->setToolTip(QApplication::translate("PropertiesWidget", "Do not download", nullptr));
#endif // QT_NO_TOOLTIP
        actionMaximum->setText(QApplication::translate("PropertiesWidget", "Maximum", nullptr));
        actionHigh->setText(QApplication::translate("PropertiesWidget", "High", nullptr));
        actionNormal->setText(QApplication::translate("PropertiesWidget", "Normal", nullptr));
        labelDownloadedPieces->setText(QApplication::translate("PropertiesWidget", "Progress:", nullptr));
        labelPiecesAvailability->setText(QApplication::translate("PropertiesWidget", "Availability:", nullptr));
        groupTransferBox->setTitle(QApplication::translate("PropertiesWidget", "Transfer", nullptr));
        labelUpSpeed->setText(QApplication::translate("PropertiesWidget", "Upload Speed:", nullptr));
        labelPeers->setText(QApplication::translate("PropertiesWidget", "Peers:", nullptr));
        labelConnections->setText(QApplication::translate("PropertiesWidget", "Connections:", nullptr));
        labelDlLimit->setText(QApplication::translate("PropertiesWidget", "Download Limit:", nullptr));
        labelRatio->setText(QApplication::translate("PropertiesWidget", "Share Ratio:", nullptr));
        labelDownloaded->setText(QApplication::translate("PropertiesWidget", "Downloaded:", nullptr));
        labelUpLimit->setText(QApplication::translate("PropertiesWidget", "Upload Limit:", nullptr));
        labelLastSeenComplete->setText(QApplication::translate("PropertiesWidget", "Last Seen Complete:", nullptr));
        labelReannounceIn->setText(QApplication::translate("PropertiesWidget", "Reannounce In:", nullptr));
        labelSeeds->setText(QApplication::translate("PropertiesWidget", "Seeds:", nullptr));
        labelDlSpeed->setText(QApplication::translate("PropertiesWidget", "Download Speed:", nullptr));
        labelUploaded->setText(QApplication::translate("PropertiesWidget", "Uploaded:", nullptr));
        labelTimeActive->setText(QApplication::translate("PropertiesWidget", "Time Active:", nullptr));
        labelETA->setText(QApplication::translate("PropertiesWidget", "ETA:", nullptr));
        labelWasted->setText(QApplication::translate("PropertiesWidget", "Wasted:", nullptr));
        groupInfosBox->setTitle(QApplication::translate("PropertiesWidget", "Information", nullptr));
        labelTotalSize->setText(QApplication::translate("PropertiesWidget", "Total Size:", nullptr));
        labelTotalPieces->setText(QApplication::translate("PropertiesWidget", "Pieces:", nullptr));
        labelCreatedBy->setText(QApplication::translate("PropertiesWidget", "Created By:", nullptr));
        labelAddedOn->setText(QApplication::translate("PropertiesWidget", "Added On:", nullptr));
        labelCompletedOn->setText(QApplication::translate("PropertiesWidget", "Completed On:", nullptr));
        labelCreatedOn->setText(QApplication::translate("PropertiesWidget", "Created On:", nullptr));
        labelHash->setText(QApplication::translate("PropertiesWidget", "Torrent Hash:", nullptr));
        labelSavePath->setText(QApplication::translate("PropertiesWidget", "Save Path:", nullptr));
        labelComment->setText(QApplication::translate("PropertiesWidget", "Comment:", nullptr));
        selectAllButton->setText(QApplication::translate("PropertiesWidget", "Select All", nullptr));
        selectNoneButton->setText(QApplication::translate("PropertiesWidget", "Select None", nullptr));
        Q_UNUSED(PropertiesWidget);
    } // retranslateUi

};

namespace Ui {
    class PropertiesWidget: public Ui_PropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESWIDGET_H
