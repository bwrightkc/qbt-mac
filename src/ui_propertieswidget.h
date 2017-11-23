/********************************************************************************
** Form generated from reading UI file 'propertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESWIDGET_H
#define UI_PROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QAction *actionNot_downloaded;
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
    QLabel *downloaded_pieces_lbl;
    QLabel *progress_lbl;
    QLabel *avail_pieces_lbl;
    QLabel *avail_average_lbl;
    QLabel *tempAvailabilityBarArea;
    QLabel *tempProgressBarArea;
    QFrame *line_2;
    QGroupBox *groupTransferBox;
    QGridLayout *gridLayout_2;
    QLabel *label_dl_speed_val;
    QLabel *label_upload_speed;
    QLabel *label_upload_speed_val;
    QLabel *label_peers;
    QLabel *label_4;
    QLabel *reannounce_lbl;
    QLabel *label_eta_val;
    QLabel *label_2;
    QLabel *lbl_ratio;
    QLabel *lbl_connections;
    QLabel *label_peers_val;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_last_complete;
    QLabel *lbl_dllimit;
    QLabel *upTotal;
    QLabel *label_10;
    QLabel *label_last_complete_val;
    QLabel *label_seeds;
    QLabel *label_dl_speed;
    QLabel *dlTotal;
    QLabel *wasted;
    QLabel *shareRatio;
    QLabel *label_5;
    QLabel *label_seeds_val;
    QLabel *lbl_elapsed;
    QLabel *label_7;
    QLabel *lbl_uplimit;
    QLabel *label_eta;
    QLabel *label_8;
    QGroupBox *groupInfosBox;
    QGridLayout *gridLayout;
    QLabel *label_total_size;
    QLabel *label_total_size_val;
    QLabel *label_total_pieces;
    QLabel *label_total_pieces_val;
    QLabel *label_created_by;
    QLabel *label_created_by_val;
    QLabel *label_added_on;
    QLabel *label_added_on_val;
    QLabel *label_completed_on;
    QLabel *label_completed_on_val;
    QLabel *label_9;
    QLabel *lbl_creationDate;
    QLabel *hash_lbl2;
    QLabel *hash_lbl;
    QLabel *savePath_lbl;
    QLabel *save_path;
    QLabel *comment_lbl2;
    QLabel *comment_text;
    QWidget *pageTrackers;
    QHBoxLayout *horizontalLayout_trackers;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_2;
    QPushButton *trackerUpButton;
    QPushButton *trackerDownButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *pagePeers;
    QVBoxLayout *peerpage_layout;
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
    QVBoxLayout *speed_layout;

    void setupUi(QWidget *PropertiesWidget)
    {
        if (PropertiesWidget->objectName().isEmpty())
            PropertiesWidget->setObjectName(QStringLiteral("PropertiesWidget"));
        PropertiesWidget->resize(551, 452);
        actionNot_downloaded = new QAction(PropertiesWidget);
        actionNot_downloaded->setObjectName(QStringLiteral("actionNot_downloaded"));
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
        downloaded_pieces_lbl = new QLabel(groupBar);
        downloaded_pieces_lbl->setObjectName(QStringLiteral("downloaded_pieces_lbl"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(downloaded_pieces_lbl->sizePolicy().hasHeightForWidth());
        downloaded_pieces_lbl->setSizePolicy(sizePolicy);
        downloaded_pieces_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        groupBarLayout->addWidget(downloaded_pieces_lbl, 0, 0, 1, 1);

        progress_lbl = new QLabel(groupBar);
        progress_lbl->setObjectName(QStringLiteral("progress_lbl"));
        sizePolicy.setHeightForWidth(progress_lbl->sizePolicy().hasHeightForWidth());
        progress_lbl->setSizePolicy(sizePolicy);
        progress_lbl->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(progress_lbl, 0, 2, 1, 1);

        avail_pieces_lbl = new QLabel(groupBar);
        avail_pieces_lbl->setObjectName(QStringLiteral("avail_pieces_lbl"));
        sizePolicy.setHeightForWidth(avail_pieces_lbl->sizePolicy().hasHeightForWidth());
        avail_pieces_lbl->setSizePolicy(sizePolicy);
        avail_pieces_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        groupBarLayout->addWidget(avail_pieces_lbl, 1, 0, 1, 1);

        avail_average_lbl = new QLabel(groupBar);
        avail_average_lbl->setObjectName(QStringLiteral("avail_average_lbl"));
        sizePolicy.setHeightForWidth(avail_average_lbl->sizePolicy().hasHeightForWidth());
        avail_average_lbl->setSizePolicy(sizePolicy);
        avail_average_lbl->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(avail_average_lbl, 1, 2, 1, 1);

        tempAvailabilityBarArea = new QLabel(groupBar);
        tempAvailabilityBarArea->setObjectName(QStringLiteral("tempAvailabilityBarArea"));
        tempAvailabilityBarArea->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(tempAvailabilityBarArea, 1, 1, 1, 1);

        tempProgressBarArea = new QLabel(groupBar);
        tempProgressBarArea->setObjectName(QStringLiteral("tempProgressBarArea"));
        tempProgressBarArea->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(tempProgressBarArea, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBar);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        groupTransferBox = new QGroupBox(scrollAreaWidgetContents);
        groupTransferBox->setObjectName(QStringLiteral("groupTransferBox"));
        gridLayout_2 = new QGridLayout(groupTransferBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 4, -1, 4);
        label_dl_speed_val = new QLabel(groupTransferBox);
        label_dl_speed_val->setObjectName(QStringLiteral("label_dl_speed_val"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_dl_speed_val->sizePolicy().hasHeightForWidth());
        label_dl_speed_val->setSizePolicy(sizePolicy1);
        label_dl_speed_val->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_dl_speed_val, 2, 1, 1, 1);

        label_upload_speed = new QLabel(groupTransferBox);
        label_upload_speed->setObjectName(QStringLiteral("label_upload_speed"));
        sizePolicy.setHeightForWidth(label_upload_speed->sizePolicy().hasHeightForWidth());
        label_upload_speed->setSizePolicy(sizePolicy);
        label_upload_speed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_upload_speed, 2, 2, 1, 1);

        label_upload_speed_val = new QLabel(groupTransferBox);
        label_upload_speed_val->setObjectName(QStringLiteral("label_upload_speed_val"));
        sizePolicy1.setHeightForWidth(label_upload_speed_val->sizePolicy().hasHeightForWidth());
        label_upload_speed_val->setSizePolicy(sizePolicy1);
        label_upload_speed_val->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_upload_speed_val, 2, 3, 1, 4);

        label_peers = new QLabel(groupTransferBox);
        label_peers->setObjectName(QStringLiteral("label_peers"));
        sizePolicy.setHeightForWidth(label_peers->sizePolicy().hasHeightForWidth());
        label_peers->setSizePolicy(sizePolicy);
        label_peers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_peers, 2, 4, 1, 1);

        label_4 = new QLabel(groupTransferBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 0, 4, 1, 1);

        reannounce_lbl = new QLabel(groupTransferBox);
        reannounce_lbl->setObjectName(QStringLiteral("reannounce_lbl"));
        sizePolicy1.setHeightForWidth(reannounce_lbl->sizePolicy().hasHeightForWidth());
        reannounce_lbl->setSizePolicy(sizePolicy1);
        reannounce_lbl->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(reannounce_lbl, 4, 3, 1, 1);

        label_eta_val = new QLabel(groupTransferBox);
        label_eta_val->setObjectName(QStringLiteral("label_eta_val"));
        sizePolicy1.setHeightForWidth(label_eta_val->sizePolicy().hasHeightForWidth());
        label_eta_val->setSizePolicy(sizePolicy1);
        label_eta_val->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_eta_val, 0, 3, 1, 1);

        label_2 = new QLabel(groupTransferBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        lbl_ratio = new QLabel(groupTransferBox);
        lbl_ratio->setObjectName(QStringLiteral("lbl_ratio"));
        sizePolicy.setHeightForWidth(lbl_ratio->sizePolicy().hasHeightForWidth());
        lbl_ratio->setSizePolicy(sizePolicy);
        lbl_ratio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lbl_ratio, 4, 0, 1, 1);

        lbl_connections = new QLabel(groupTransferBox);
        lbl_connections->setObjectName(QStringLiteral("lbl_connections"));
        sizePolicy1.setHeightForWidth(lbl_connections->sizePolicy().hasHeightForWidth());
        lbl_connections->setSizePolicy(sizePolicy1);
        lbl_connections->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(lbl_connections, 0, 5, 1, 1);

        label_peers_val = new QLabel(groupTransferBox);
        label_peers_val->setObjectName(QStringLiteral("label_peers_val"));
        sizePolicy1.setHeightForWidth(label_peers_val->sizePolicy().hasHeightForWidth());
        label_peers_val->setSizePolicy(sizePolicy1);
        label_peers_val->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_peers_val, 2, 5, 1, 1);

        label_6 = new QLabel(groupTransferBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label = new QLabel(groupTransferBox);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 3, 2, 1, 1);

        label_last_complete = new QLabel(groupTransferBox);
        label_last_complete->setObjectName(QStringLiteral("label_last_complete"));
        sizePolicy.setHeightForWidth(label_last_complete->sizePolicy().hasHeightForWidth());
        label_last_complete->setSizePolicy(sizePolicy);
        label_last_complete->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_last_complete, 4, 4, 1, 1);

        lbl_dllimit = new QLabel(groupTransferBox);
        lbl_dllimit->setObjectName(QStringLiteral("lbl_dllimit"));
        sizePolicy1.setHeightForWidth(lbl_dllimit->sizePolicy().hasHeightForWidth());
        lbl_dllimit->setSizePolicy(sizePolicy1);
        lbl_dllimit->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(lbl_dllimit, 3, 1, 1, 1);

        upTotal = new QLabel(groupTransferBox);
        upTotal->setObjectName(QStringLiteral("upTotal"));
        sizePolicy1.setHeightForWidth(upTotal->sizePolicy().hasHeightForWidth());
        upTotal->setSizePolicy(sizePolicy1);
        upTotal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(upTotal, 1, 3, 1, 4);

        label_10 = new QLabel(groupTransferBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 4, 2, 1, 1);

        label_last_complete_val = new QLabel(groupTransferBox);
        label_last_complete_val->setObjectName(QStringLiteral("label_last_complete_val"));
        sizePolicy1.setHeightForWidth(label_last_complete_val->sizePolicy().hasHeightForWidth());
        label_last_complete_val->setSizePolicy(sizePolicy1);
        label_last_complete_val->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_last_complete_val, 4, 5, 1, 1);

        label_seeds = new QLabel(groupTransferBox);
        label_seeds->setObjectName(QStringLiteral("label_seeds"));
        sizePolicy.setHeightForWidth(label_seeds->sizePolicy().hasHeightForWidth());
        label_seeds->setSizePolicy(sizePolicy);
        label_seeds->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_seeds, 1, 4, 1, 1);

        label_dl_speed = new QLabel(groupTransferBox);
        label_dl_speed->setObjectName(QStringLiteral("label_dl_speed"));
        sizePolicy.setHeightForWidth(label_dl_speed->sizePolicy().hasHeightForWidth());
        label_dl_speed->setSizePolicy(sizePolicy);
        label_dl_speed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_dl_speed, 2, 0, 1, 1);

        dlTotal = new QLabel(groupTransferBox);
        dlTotal->setObjectName(QStringLiteral("dlTotal"));
        sizePolicy1.setHeightForWidth(dlTotal->sizePolicy().hasHeightForWidth());
        dlTotal->setSizePolicy(sizePolicy1);
        dlTotal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(dlTotal, 1, 1, 1, 1);

        wasted = new QLabel(groupTransferBox);
        wasted->setObjectName(QStringLiteral("wasted"));
        sizePolicy1.setHeightForWidth(wasted->sizePolicy().hasHeightForWidth());
        wasted->setSizePolicy(sizePolicy1);
        wasted->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(wasted, 3, 5, 1, 1);

        shareRatio = new QLabel(groupTransferBox);
        shareRatio->setObjectName(QStringLiteral("shareRatio"));
        sizePolicy1.setHeightForWidth(shareRatio->sizePolicy().hasHeightForWidth());
        shareRatio->setSizePolicy(sizePolicy1);
        shareRatio->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(shareRatio, 4, 1, 1, 1);

        label_5 = new QLabel(groupTransferBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 2, 1, 1);

        label_seeds_val = new QLabel(groupTransferBox);
        label_seeds_val->setObjectName(QStringLiteral("label_seeds_val"));
        sizePolicy1.setHeightForWidth(label_seeds_val->sizePolicy().hasHeightForWidth());
        label_seeds_val->setSizePolicy(sizePolicy1);
        label_seeds_val->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_seeds_val, 1, 5, 1, 1);

        lbl_elapsed = new QLabel(groupTransferBox);
        lbl_elapsed->setObjectName(QStringLiteral("lbl_elapsed"));
        sizePolicy1.setHeightForWidth(lbl_elapsed->sizePolicy().hasHeightForWidth());
        lbl_elapsed->setSizePolicy(sizePolicy1);
        lbl_elapsed->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(lbl_elapsed, 0, 1, 1, 1);

        label_7 = new QLabel(groupTransferBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        lbl_uplimit = new QLabel(groupTransferBox);
        lbl_uplimit->setObjectName(QStringLiteral("lbl_uplimit"));
        sizePolicy1.setHeightForWidth(lbl_uplimit->sizePolicy().hasHeightForWidth());
        lbl_uplimit->setSizePolicy(sizePolicy1);
        lbl_uplimit->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(lbl_uplimit, 3, 3, 1, 1);

        label_eta = new QLabel(groupTransferBox);
        label_eta->setObjectName(QStringLiteral("label_eta"));
        sizePolicy.setHeightForWidth(label_eta->sizePolicy().hasHeightForWidth());
        label_eta->setSizePolicy(sizePolicy);
        label_eta->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_eta, 0, 2, 1, 1);

        label_8 = new QLabel(groupTransferBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 3, 4, 1, 1);


        verticalLayout_2->addWidget(groupTransferBox);

        groupInfosBox = new QGroupBox(scrollAreaWidgetContents);
        groupInfosBox->setObjectName(QStringLiteral("groupInfosBox"));
        gridLayout = new QGridLayout(groupInfosBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 4, -1, 2);
        label_total_size = new QLabel(groupInfosBox);
        label_total_size->setObjectName(QStringLiteral("label_total_size"));
        sizePolicy.setHeightForWidth(label_total_size->sizePolicy().hasHeightForWidth());
        label_total_size->setSizePolicy(sizePolicy);
        label_total_size->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_total_size, 0, 0, 1, 1);

        label_total_size_val = new QLabel(groupInfosBox);
        label_total_size_val->setObjectName(QStringLiteral("label_total_size_val"));
        sizePolicy1.setHeightForWidth(label_total_size_val->sizePolicy().hasHeightForWidth());
        label_total_size_val->setSizePolicy(sizePolicy1);
        label_total_size_val->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_total_size_val, 0, 1, 1, 1);

        label_total_pieces = new QLabel(groupInfosBox);
        label_total_pieces->setObjectName(QStringLiteral("label_total_pieces"));
        sizePolicy.setHeightForWidth(label_total_pieces->sizePolicy().hasHeightForWidth());
        label_total_pieces->setSizePolicy(sizePolicy);
        label_total_pieces->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_total_pieces, 0, 2, 1, 1);

        label_total_pieces_val = new QLabel(groupInfosBox);
        label_total_pieces_val->setObjectName(QStringLiteral("label_total_pieces_val"));
        sizePolicy1.setHeightForWidth(label_total_pieces_val->sizePolicy().hasHeightForWidth());
        label_total_pieces_val->setSizePolicy(sizePolicy1);
        label_total_pieces_val->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_total_pieces_val, 0, 3, 1, 1);

        label_created_by = new QLabel(groupInfosBox);
        label_created_by->setObjectName(QStringLiteral("label_created_by"));
        sizePolicy.setHeightForWidth(label_created_by->sizePolicy().hasHeightForWidth());
        label_created_by->setSizePolicy(sizePolicy);
        label_created_by->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_created_by, 0, 4, 1, 1);

        label_created_by_val = new QLabel(groupInfosBox);
        label_created_by_val->setObjectName(QStringLiteral("label_created_by_val"));
        sizePolicy1.setHeightForWidth(label_created_by_val->sizePolicy().hasHeightForWidth());
        label_created_by_val->setSizePolicy(sizePolicy1);
        label_created_by_val->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_created_by_val, 0, 5, 1, 1);

        label_added_on = new QLabel(groupInfosBox);
        label_added_on->setObjectName(QStringLiteral("label_added_on"));
        sizePolicy.setHeightForWidth(label_added_on->sizePolicy().hasHeightForWidth());
        label_added_on->setSizePolicy(sizePolicy);
        label_added_on->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_added_on, 1, 0, 1, 1);

        label_added_on_val = new QLabel(groupInfosBox);
        label_added_on_val->setObjectName(QStringLiteral("label_added_on_val"));
        sizePolicy1.setHeightForWidth(label_added_on_val->sizePolicy().hasHeightForWidth());
        label_added_on_val->setSizePolicy(sizePolicy1);
        label_added_on_val->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_added_on_val, 1, 1, 1, 1);

        label_completed_on = new QLabel(groupInfosBox);
        label_completed_on->setObjectName(QStringLiteral("label_completed_on"));
        sizePolicy.setHeightForWidth(label_completed_on->sizePolicy().hasHeightForWidth());
        label_completed_on->setSizePolicy(sizePolicy);
        label_completed_on->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_completed_on, 1, 2, 1, 1);

        label_completed_on_val = new QLabel(groupInfosBox);
        label_completed_on_val->setObjectName(QStringLiteral("label_completed_on_val"));
        sizePolicy1.setHeightForWidth(label_completed_on_val->sizePolicy().hasHeightForWidth());
        label_completed_on_val->setSizePolicy(sizePolicy1);
        label_completed_on_val->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_completed_on_val, 1, 3, 1, 1);

        label_9 = new QLabel(groupInfosBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 1, 4, 1, 1);

        lbl_creationDate = new QLabel(groupInfosBox);
        lbl_creationDate->setObjectName(QStringLiteral("lbl_creationDate"));
        sizePolicy1.setHeightForWidth(lbl_creationDate->sizePolicy().hasHeightForWidth());
        lbl_creationDate->setSizePolicy(sizePolicy1);
        lbl_creationDate->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lbl_creationDate, 1, 5, 1, 1);

        hash_lbl2 = new QLabel(groupInfosBox);
        hash_lbl2->setObjectName(QStringLiteral("hash_lbl2"));
        sizePolicy.setHeightForWidth(hash_lbl2->sizePolicy().hasHeightForWidth());
        hash_lbl2->setSizePolicy(sizePolicy);
        hash_lbl2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(hash_lbl2, 2, 0, 1, 1);

        hash_lbl = new QLabel(groupInfosBox);
        hash_lbl->setObjectName(QStringLiteral("hash_lbl"));
        sizePolicy1.setHeightForWidth(hash_lbl->sizePolicy().hasHeightForWidth());
        hash_lbl->setSizePolicy(sizePolicy1);
        hash_lbl->setTextFormat(Qt::PlainText);
        hash_lbl->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(hash_lbl, 2, 1, 1, 5);

        savePath_lbl = new QLabel(groupInfosBox);
        savePath_lbl->setObjectName(QStringLiteral("savePath_lbl"));
        sizePolicy.setHeightForWidth(savePath_lbl->sizePolicy().hasHeightForWidth());
        savePath_lbl->setSizePolicy(sizePolicy);
        savePath_lbl->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(savePath_lbl, 3, 0, 1, 1);

        save_path = new QLabel(groupInfosBox);
        save_path->setObjectName(QStringLiteral("save_path"));
        sizePolicy1.setHeightForWidth(save_path->sizePolicy().hasHeightForWidth());
        save_path->setSizePolicy(sizePolicy1);
        save_path->setTextFormat(Qt::PlainText);
        save_path->setWordWrap(true);
        save_path->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(save_path, 3, 1, 1, 5);

        comment_lbl2 = new QLabel(groupInfosBox);
        comment_lbl2->setObjectName(QStringLiteral("comment_lbl2"));
        sizePolicy.setHeightForWidth(comment_lbl2->sizePolicy().hasHeightForWidth());
        comment_lbl2->setSizePolicy(sizePolicy);
        comment_lbl2->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(comment_lbl2, 4, 0, 1, 1);

        comment_text = new QLabel(groupInfosBox);
        comment_text->setObjectName(QStringLiteral("comment_text"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comment_text->sizePolicy().hasHeightForWidth());
        comment_text->setSizePolicy(sizePolicy2);
        comment_text->setTextFormat(Qt::RichText);
        comment_text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        comment_text->setWordWrap(true);
        comment_text->setOpenExternalLinks(true);
        comment_text->setTextInteractionFlags(Qt::TextBrowserInteraction);
        comment_text->setProperty("openLinks", QVariant(true));

        gridLayout->addWidget(comment_text, 4, 1, 1, 5);


        verticalLayout_2->addWidget(groupInfosBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_7->addWidget(scrollArea);

        stackedProperties->addWidget(pageGeneral);
        pageTrackers = new QWidget();
        pageTrackers->setObjectName(QStringLiteral("pageTrackers"));
        horizontalLayout_trackers = new QHBoxLayout(pageTrackers);
        horizontalLayout_trackers->setObjectName(QStringLiteral("horizontalLayout_trackers"));
        horizontalLayout_trackers->setContentsMargins(0, 0, 0, 0);
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


        horizontalLayout_trackers->addLayout(verticalLayout_10);

        stackedProperties->addWidget(pageTrackers);
        pagePeers = new QWidget();
        pagePeers->setObjectName(QStringLiteral("pagePeers"));
        peerpage_layout = new QVBoxLayout(pagePeers);
        peerpage_layout->setObjectName(QStringLiteral("peerpage_layout"));
        peerpage_layout->setContentsMargins(0, 0, 0, 0);
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
        speed_layout = new QVBoxLayout(pageSpeed);
        speed_layout->setObjectName(QStringLiteral("speed_layout"));
        speed_layout->setContentsMargins(0, 0, 0, 0);
        stackedProperties->addWidget(pageSpeed);

        verticalLayout->addWidget(stackedProperties);


        retranslateUi(PropertiesWidget);

        stackedProperties->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *PropertiesWidget)
    {
        actionNot_downloaded->setText(QApplication::translate("PropertiesWidget", "Do not download", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNot_downloaded->setToolTip(QApplication::translate("PropertiesWidget", "Do not download", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMaximum->setText(QApplication::translate("PropertiesWidget", "Maximum", Q_NULLPTR));
        actionHigh->setText(QApplication::translate("PropertiesWidget", "High", Q_NULLPTR));
        actionNormal->setText(QApplication::translate("PropertiesWidget", "Normal", Q_NULLPTR));
        downloaded_pieces_lbl->setText(QApplication::translate("PropertiesWidget", "Progress:", Q_NULLPTR));
        avail_pieces_lbl->setText(QApplication::translate("PropertiesWidget", "Availability:", Q_NULLPTR));
        groupTransferBox->setTitle(QApplication::translate("PropertiesWidget", "Transfer", Q_NULLPTR));
        label_upload_speed->setText(QApplication::translate("PropertiesWidget", "Upload Speed:", Q_NULLPTR));
        label_peers->setText(QApplication::translate("PropertiesWidget", "Peers:", Q_NULLPTR));
        label_4->setText(QApplication::translate("PropertiesWidget", "Connections:", Q_NULLPTR));
        label_2->setText(QApplication::translate("PropertiesWidget", "Download Limit:", Q_NULLPTR));
        lbl_ratio->setText(QApplication::translate("PropertiesWidget", "Share Ratio:", Q_NULLPTR));
        label_6->setText(QApplication::translate("PropertiesWidget", "Downloaded:", Q_NULLPTR));
        label->setText(QApplication::translate("PropertiesWidget", "Upload Limit:", Q_NULLPTR));
        label_last_complete->setText(QApplication::translate("PropertiesWidget", "Last Seen Complete:", Q_NULLPTR));
        label_10->setText(QApplication::translate("PropertiesWidget", "Reannounce In:", Q_NULLPTR));
        label_seeds->setText(QApplication::translate("PropertiesWidget", "Seeds:", Q_NULLPTR));
        label_dl_speed->setText(QApplication::translate("PropertiesWidget", "Download Speed:", Q_NULLPTR));
        label_5->setText(QApplication::translate("PropertiesWidget", "Uploaded:", Q_NULLPTR));
        label_7->setText(QApplication::translate("PropertiesWidget", "Time Active:", Q_NULLPTR));
        label_eta->setText(QApplication::translate("PropertiesWidget", "ETA:", Q_NULLPTR));
        label_8->setText(QApplication::translate("PropertiesWidget", "Wasted:", Q_NULLPTR));
        groupInfosBox->setTitle(QApplication::translate("PropertiesWidget", "Information", Q_NULLPTR));
        label_total_size->setText(QApplication::translate("PropertiesWidget", "Total Size:", Q_NULLPTR));
        label_total_pieces->setText(QApplication::translate("PropertiesWidget", "Pieces:", Q_NULLPTR));
        label_created_by->setText(QApplication::translate("PropertiesWidget", "Created By:", Q_NULLPTR));
        label_added_on->setText(QApplication::translate("PropertiesWidget", "Added On:", Q_NULLPTR));
        label_completed_on->setText(QApplication::translate("PropertiesWidget", "Completed On:", Q_NULLPTR));
        label_9->setText(QApplication::translate("PropertiesWidget", "Created On:", Q_NULLPTR));
        hash_lbl2->setText(QApplication::translate("PropertiesWidget", "Torrent Hash:", Q_NULLPTR));
        savePath_lbl->setText(QApplication::translate("PropertiesWidget", "Save Path:", Q_NULLPTR));
        comment_lbl2->setText(QApplication::translate("PropertiesWidget", "Comment:", Q_NULLPTR));
        selectAllButton->setText(QApplication::translate("PropertiesWidget", "Select All", Q_NULLPTR));
        selectNoneButton->setText(QApplication::translate("PropertiesWidget", "Select None", Q_NULLPTR));
        Q_UNUSED(PropertiesWidget);
    } // retranslateUi

};

namespace Ui {
    class PropertiesWidget: public Ui_PropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESWIDGET_H
