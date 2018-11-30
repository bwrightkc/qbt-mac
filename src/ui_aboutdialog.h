/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *aboutDlgLayout;
    QHBoxLayout *titleHBoxLayout;
    QLabel *logo;
    QLabel *labelName;
    QSpacerItem *horizontalSpacer_6;
    QTabWidget *tw_tabs;
    QWidget *aboutTab;
    QGridLayout *aboutTabLayout;
    QLabel *labelMascot;
    QLabel *labelAbout;
    QWidget *authorTab;
    QVBoxLayout *authorTabLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *thanksTab;
    QVBoxLayout *thanksTabLayout;
    QTextBrowser *textBrowserThanks;
    QWidget *translationTab;
    QVBoxLayout *translationTabLayout;
    QTextBrowser *textBrowserTranslation;
    QWidget *licenseTab;
    QVBoxLayout *licenseTabLayout;
    QTextBrowser *textBrowserLicense;
    QWidget *librariesTab;
    QVBoxLayout *librariesTabLayout;
    QLabel *label;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *labelBoostVer;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *labelQtVer;
    QLabel *labelLibtVer;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(545, 295);
        aboutDlgLayout = new QVBoxLayout(AboutDialog);
        aboutDlgLayout->setSpacing(6);
        aboutDlgLayout->setContentsMargins(11, 11, 11, 11);
        aboutDlgLayout->setObjectName(QStringLiteral("aboutDlgLayout"));
        titleHBoxLayout = new QHBoxLayout();
        titleHBoxLayout->setSpacing(6);
        titleHBoxLayout->setObjectName(QStringLiteral("titleHBoxLayout"));
        logo = new QLabel(AboutDialog);
        logo->setObjectName(QStringLiteral("logo"));

        titleHBoxLayout->addWidget(logo);

        labelName = new QLabel(AboutDialog);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setText(QStringLiteral("qBittorrent"));

        titleHBoxLayout->addWidget(labelName);

        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        titleHBoxLayout->addItem(horizontalSpacer_6);


        aboutDlgLayout->addLayout(titleHBoxLayout);

        tw_tabs = new QTabWidget(AboutDialog);
        tw_tabs->setObjectName(QStringLiteral("tw_tabs"));
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        aboutTabLayout = new QGridLayout(aboutTab);
        aboutTabLayout->setSpacing(6);
        aboutTabLayout->setContentsMargins(11, 11, 11, 11);
        aboutTabLayout->setObjectName(QStringLiteral("aboutTabLayout"));
        labelMascot = new QLabel(aboutTab);
        labelMascot->setObjectName(QStringLiteral("labelMascot"));

        aboutTabLayout->addWidget(labelMascot, 0, 0, 1, 1);

        labelAbout = new QLabel(aboutTab);
        labelAbout->setObjectName(QStringLiteral("labelAbout"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelAbout->sizePolicy().hasHeightForWidth());
        labelAbout->setSizePolicy(sizePolicy);
        labelAbout->setTextFormat(Qt::RichText);
        labelAbout->setWordWrap(true);
        labelAbout->setOpenExternalLinks(true);

        aboutTabLayout->addWidget(labelAbout, 0, 1, 1, 1);

        tw_tabs->addTab(aboutTab, QString());
        authorTab = new QWidget();
        authorTab->setObjectName(QStringLiteral("authorTab"));
        authorTabLayout = new QVBoxLayout(authorTab);
        authorTabLayout->setSpacing(6);
        authorTabLayout->setContentsMargins(11, 11, 11, 11);
        authorTabLayout->setObjectName(QStringLiteral("authorTabLayout"));
        groupBox_2 = new QGroupBox(authorTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 1, 1, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setText(QStringLiteral("<a href=\"mailto:sledgehammer999@qbittorrent.org\">sledgehammer999@qbittorrent.org</a>"));
        label_19->setOpenExternalLinks(true);
        label_19->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(label_19, 2, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 1, 0, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 2, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setText(QStringLiteral("Sledgehammer999"));

        gridLayout_4->addWidget(label_17, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 2, 1, 1);


        authorTabLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(authorTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setText(QStringLiteral("Christophe Dumez"));

        gridLayout_5->addWidget(label_2, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setText(QStringLiteral("<a href=\"mailto:chris@qbittorrent.org\">chris@qbittorrent.org</a>"));
        label_6->setOpenExternalLinks(true);
        label_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_6, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        authorTabLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        authorTabLayout->addItem(verticalSpacer);

        tw_tabs->addTab(authorTab, QString());
        thanksTab = new QWidget();
        thanksTab->setObjectName(QStringLiteral("thanksTab"));
        thanksTabLayout = new QVBoxLayout(thanksTab);
        thanksTabLayout->setSpacing(6);
        thanksTabLayout->setContentsMargins(11, 11, 11, 11);
        thanksTabLayout->setObjectName(QStringLiteral("thanksTabLayout"));
        thanksTabLayout->setContentsMargins(0, 0, 0, 0);
        textBrowserThanks = new QTextBrowser(thanksTab);
        textBrowserThanks->setObjectName(QStringLiteral("textBrowserThanks"));
        textBrowserThanks->setOpenExternalLinks(true);

        thanksTabLayout->addWidget(textBrowserThanks);

        tw_tabs->addTab(thanksTab, QString());
        translationTab = new QWidget();
        translationTab->setObjectName(QStringLiteral("translationTab"));
        translationTabLayout = new QVBoxLayout(translationTab);
        translationTabLayout->setSpacing(6);
        translationTabLayout->setContentsMargins(11, 11, 11, 11);
        translationTabLayout->setObjectName(QStringLiteral("translationTabLayout"));
        translationTabLayout->setContentsMargins(0, 0, 0, 0);
        textBrowserTranslation = new QTextBrowser(translationTab);
        textBrowserTranslation->setObjectName(QStringLiteral("textBrowserTranslation"));
        textBrowserTranslation->setLineWrapMode(QTextEdit::NoWrap);

        translationTabLayout->addWidget(textBrowserTranslation);

        tw_tabs->addTab(translationTab, QString());
        licenseTab = new QWidget();
        licenseTab->setObjectName(QStringLiteral("licenseTab"));
        licenseTabLayout = new QVBoxLayout(licenseTab);
        licenseTabLayout->setSpacing(6);
        licenseTabLayout->setContentsMargins(11, 11, 11, 11);
        licenseTabLayout->setObjectName(QStringLiteral("licenseTabLayout"));
        licenseTabLayout->setContentsMargins(0, 0, 0, 0);
        textBrowserLicense = new QTextBrowser(licenseTab);
        textBrowserLicense->setObjectName(QStringLiteral("textBrowserLicense"));
        textBrowserLicense->setOpenExternalLinks(true);

        licenseTabLayout->addWidget(textBrowserLicense);

        tw_tabs->addTab(licenseTab, QString());
        librariesTab = new QWidget();
        librariesTab->setObjectName(QStringLiteral("librariesTab"));
        librariesTabLayout = new QVBoxLayout(librariesTab);
        librariesTabLayout->setSpacing(6);
        librariesTabLayout->setContentsMargins(11, 11, 11, 11);
        librariesTabLayout->setObjectName(QStringLiteral("librariesTabLayout"));
        label = new QLabel(librariesTab);
        label->setObjectName(QStringLiteral("label"));

        librariesTabLayout->addWidget(label);

        line_2 = new QFrame(librariesTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        librariesTabLayout->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelBoostVer = new QLabel(librariesTab);
        labelBoostVer->setObjectName(QStringLiteral("labelBoostVer"));
        labelBoostVer->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBoostVer, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        label_8 = new QLabel(librariesTab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setText(QStringLiteral("Qt:"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_9 = new QLabel(librariesTab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setText(QStringLiteral("Libtorrent:"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_9, 1, 1, 1, 1);

        label_10 = new QLabel(librariesTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setText(QStringLiteral("Boost:"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        labelQtVer = new QLabel(librariesTab);
        labelQtVer->setObjectName(QStringLiteral("labelQtVer"));
        labelQtVer->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelQtVer, 0, 2, 1, 1);

        labelLibtVer = new QLabel(librariesTab);
        labelLibtVer->setObjectName(QStringLiteral("labelLibtVer"));
        labelLibtVer->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelLibtVer, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        librariesTabLayout->addLayout(gridLayout);

        line = new QFrame(librariesTab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        librariesTabLayout->addWidget(line);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        librariesTabLayout->addItem(verticalSpacer_2);

        tw_tabs->addTab(librariesTab, QString());

        aboutDlgLayout->addWidget(tw_tabs);


        retranslateUi(AboutDialog);

        tw_tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About qBittorrent", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(aboutTab), QApplication::translate("AboutDialog", "About", nullptr));
        groupBox_2->setTitle(QApplication::translate("AboutDialog", "Current maintainer", nullptr));
        label_18->setText(QApplication::translate("AboutDialog", "Greece", nullptr));
        label_15->setText(QApplication::translate("AboutDialog", "Nationality:", nullptr));
        label_16->setText(QApplication::translate("AboutDialog", "E-mail:", nullptr));
        label_14->setText(QApplication::translate("AboutDialog", "Name:", nullptr));
        groupBox->setTitle(QApplication::translate("AboutDialog", "Original author", nullptr));
        label_7->setText(QApplication::translate("AboutDialog", "France", nullptr));
        label_3->setText(QApplication::translate("AboutDialog", "Name:", nullptr));
        label_5->setText(QApplication::translate("AboutDialog", "E-mail:", nullptr));
        label_4->setText(QApplication::translate("AboutDialog", "Nationality:", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(authorTab), QApplication::translate("AboutDialog", "Author", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(thanksTab), QApplication::translate("AboutDialog", "Special Thanks", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(translationTab), QApplication::translate("AboutDialog", "Translators", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(licenseTab), QApplication::translate("AboutDialog", "License", nullptr));
        label->setText(QApplication::translate("AboutDialog", "qBittorrent was built with the following libraries:", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(librariesTab), QApplication::translate("AboutDialog", "Libraries", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
