/********************************************************************************
** Form generated from reading UI file 'rsswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RSSWIDGET_H
#define UI_RSSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/rss/htmlbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_RSSWidget
{
public:
    QAction *actionDelete;
    QAction *actionRename;
    QAction *actionUpdate;
    QAction *actionNewSubscription;
    QAction *actionUpdateAllFeeds;
    QAction *actionMarkItemsRead;
    QAction *actionDownloadTorrent;
    QAction *actionOpenNewsURL;
    QAction *actionCopyFeedURL;
    QAction *actionNewFolder;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelWarn;
    QHBoxLayout *horizontalLayout;
    QPushButton *newFeedButton;
    QPushButton *markReadButton;
    QPushButton *updateAllButton;
    QSpacerItem *spacer1;
    QPushButton *rssDownloaderBtn;
    QSplitter *splitterSide;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *news_lbl;
    QSplitter *splitterMain;
    HtmlBrowser *textBrowser;

    void setupUi(QWidget *RSSWidget)
    {
        if (RSSWidget->objectName().isEmpty())
            RSSWidget->setObjectName(QStringLiteral("RSSWidget"));
        RSSWidget->resize(811, 447);
        RSSWidget->setAcceptDrops(false);
        actionDelete = new QAction(RSSWidget);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionRename = new QAction(RSSWidget);
        actionRename->setObjectName(QStringLiteral("actionRename"));
        actionUpdate = new QAction(RSSWidget);
        actionUpdate->setObjectName(QStringLiteral("actionUpdate"));
        actionNewSubscription = new QAction(RSSWidget);
        actionNewSubscription->setObjectName(QStringLiteral("actionNewSubscription"));
        actionUpdateAllFeeds = new QAction(RSSWidget);
        actionUpdateAllFeeds->setObjectName(QStringLiteral("actionUpdateAllFeeds"));
        actionMarkItemsRead = new QAction(RSSWidget);
        actionMarkItemsRead->setObjectName(QStringLiteral("actionMarkItemsRead"));
        actionDownloadTorrent = new QAction(RSSWidget);
        actionDownloadTorrent->setObjectName(QStringLiteral("actionDownloadTorrent"));
        actionOpenNewsURL = new QAction(RSSWidget);
        actionOpenNewsURL->setObjectName(QStringLiteral("actionOpenNewsURL"));
        actionCopyFeedURL = new QAction(RSSWidget);
        actionCopyFeedURL->setObjectName(QStringLiteral("actionCopyFeedURL"));
        actionNewFolder = new QAction(RSSWidget);
        actionNewFolder->setObjectName(QStringLiteral("actionNewFolder"));
        verticalLayout_2 = new QVBoxLayout(RSSWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelWarn = new QLabel(RSSWidget);
        labelWarn->setObjectName(QStringLiteral("labelWarn"));
        QFont font;
        font.setItalic(true);
        labelWarn->setFont(font);
        labelWarn->setStyleSheet(QStringLiteral("color: red;"));
        labelWarn->setWordWrap(true);

        verticalLayout_2->addWidget(labelWarn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newFeedButton = new QPushButton(RSSWidget);
        newFeedButton->setObjectName(QStringLiteral("newFeedButton"));

        horizontalLayout->addWidget(newFeedButton);

        markReadButton = new QPushButton(RSSWidget);
        markReadButton->setObjectName(QStringLiteral("markReadButton"));

        horizontalLayout->addWidget(markReadButton);

        updateAllButton = new QPushButton(RSSWidget);
        updateAllButton->setObjectName(QStringLiteral("updateAllButton"));

        horizontalLayout->addWidget(updateAllButton);

        spacer1 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer1);

        rssDownloaderBtn = new QPushButton(RSSWidget);
        rssDownloaderBtn->setObjectName(QStringLiteral("rssDownloaderBtn"));

        horizontalLayout->addWidget(rssDownloaderBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        splitterSide = new QSplitter(RSSWidget);
        splitterSide->setObjectName(QStringLiteral("splitterSide"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitterSide->sizePolicy().hasHeightForWidth());
        splitterSide->setSizePolicy(sizePolicy);
        splitterSide->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitterSide);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        news_lbl = new QLabel(layoutWidget);
        news_lbl->setObjectName(QStringLiteral("news_lbl"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        news_lbl->setFont(font1);

        verticalLayout->addWidget(news_lbl);

        splitterMain = new QSplitter(layoutWidget);
        splitterMain->setObjectName(QStringLiteral("splitterMain"));
        sizePolicy.setHeightForWidth(splitterMain->sizePolicy().hasHeightForWidth());
        splitterMain->setSizePolicy(sizePolicy);
        splitterMain->setOrientation(Qt::Horizontal);
        textBrowser = new HtmlBrowser(splitterMain);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setOpenExternalLinks(true);
        splitterMain->addWidget(textBrowser);

        verticalLayout->addWidget(splitterMain);

        splitterSide->addWidget(layoutWidget);

        verticalLayout_2->addWidget(splitterSide);


        retranslateUi(RSSWidget);

        QMetaObject::connectSlotsByName(RSSWidget);
    } // setupUi

    void retranslateUi(QWidget *RSSWidget)
    {
        RSSWidget->setWindowTitle(QApplication::translate("RSSWidget", "Search", nullptr));
        actionDelete->setText(QApplication::translate("RSSWidget", "Delete", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("RSSWidget", "Delete", nullptr));
#endif // QT_NO_TOOLTIP
        actionRename->setText(QApplication::translate("RSSWidget", "Rename...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRename->setToolTip(QApplication::translate("RSSWidget", "Rename", nullptr));
#endif // QT_NO_TOOLTIP
        actionUpdate->setText(QApplication::translate("RSSWidget", "Update", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUpdate->setToolTip(QApplication::translate("RSSWidget", "Update", nullptr));
#endif // QT_NO_TOOLTIP
        actionNewSubscription->setText(QApplication::translate("RSSWidget", "New subscription...", nullptr));
        actionUpdateAllFeeds->setText(QApplication::translate("RSSWidget", "Update all feeds", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUpdateAllFeeds->setToolTip(QApplication::translate("RSSWidget", "Update all feeds", nullptr));
#endif // QT_NO_TOOLTIP
        actionMarkItemsRead->setText(QApplication::translate("RSSWidget", "Mark items read", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMarkItemsRead->setToolTip(QApplication::translate("RSSWidget", "Mark items read", nullptr));
#endif // QT_NO_TOOLTIP
        actionDownloadTorrent->setText(QApplication::translate("RSSWidget", "Download torrent", nullptr));
        actionOpenNewsURL->setText(QApplication::translate("RSSWidget", "Open news URL", nullptr));
        actionCopyFeedURL->setText(QApplication::translate("RSSWidget", "Copy feed URL", nullptr));
        actionNewFolder->setText(QApplication::translate("RSSWidget", "New folder...", nullptr));
        labelWarn->setText(QApplication::translate("RSSWidget", "Fetching of RSS feeds is disabled now! You can enable it in application settings.", nullptr));
        newFeedButton->setText(QApplication::translate("RSSWidget", "New subscription", nullptr));
        markReadButton->setText(QApplication::translate("RSSWidget", "Mark items read", nullptr));
#ifndef QT_NO_TOOLTIP
        updateAllButton->setToolTip(QApplication::translate("RSSWidget", "Refresh RSS streams", nullptr));
#endif // QT_NO_TOOLTIP
        updateAllButton->setText(QApplication::translate("RSSWidget", "Update all", nullptr));
        rssDownloaderBtn->setText(QApplication::translate("RSSWidget", "RSS Downloader...", nullptr));
        news_lbl->setText(QApplication::translate("RSSWidget", "Torrents: (double-click to download)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RSSWidget: public Ui_RSSWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RSSWIDGET_H
