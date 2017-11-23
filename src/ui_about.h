/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDlg
{
public:
    QVBoxLayout *aboutDlgLayout;
    QHBoxLayout *titleHBoxLayout;
    QLabel *logo;
    QLabel *lb_name;
    QSpacerItem *horizontalSpacer_6;
    QTabWidget *tw_tabs;
    QWidget *aboutTab;
    QGridLayout *aboutTabLayout;
    QLabel *mascot_lbl;
    QLabel *lb_about;
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
    QTextBrowser *te_thanks;
    QWidget *translationTab;
    QVBoxLayout *translationTabLayout;
    QTextBrowser *te_translation;
    QWidget *licenseTab;
    QVBoxLayout *licenseTabLayout;
    QTextBrowser *te_license;
    QWidget *librariesTab;
    QVBoxLayout *librariesTabLayout;
    QLabel *label;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName(QStringLiteral("AboutDlg"));
        AboutDlg->resize(545, 295);
        aboutDlgLayout = new QVBoxLayout(AboutDlg);
        aboutDlgLayout->setSpacing(6);
        aboutDlgLayout->setContentsMargins(11, 11, 11, 11);
        aboutDlgLayout->setObjectName(QStringLiteral("aboutDlgLayout"));
        titleHBoxLayout = new QHBoxLayout();
        titleHBoxLayout->setSpacing(6);
        titleHBoxLayout->setObjectName(QStringLiteral("titleHBoxLayout"));
        logo = new QLabel(AboutDlg);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/icons/skin/qbittorrent32.png")));

        titleHBoxLayout->addWidget(logo);

        lb_name = new QLabel(AboutDlg);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        lb_name->setText(QStringLiteral("qBittorrent"));

        titleHBoxLayout->addWidget(lb_name);

        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        titleHBoxLayout->addItem(horizontalSpacer_6);


        aboutDlgLayout->addLayout(titleHBoxLayout);

        tw_tabs = new QTabWidget(AboutDlg);
        tw_tabs->setObjectName(QStringLiteral("tw_tabs"));
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        aboutTabLayout = new QGridLayout(aboutTab);
        aboutTabLayout->setSpacing(6);
        aboutTabLayout->setContentsMargins(11, 11, 11, 11);
        aboutTabLayout->setObjectName(QStringLiteral("aboutTabLayout"));
        mascot_lbl = new QLabel(aboutTab);
        mascot_lbl->setObjectName(QStringLiteral("mascot_lbl"));
        mascot_lbl->setPixmap(QPixmap(QString::fromUtf8(":/icons/skin/mascot.png")));

        aboutTabLayout->addWidget(mascot_lbl, 0, 0, 1, 1);

        lb_about = new QLabel(aboutTab);
        lb_about->setObjectName(QStringLiteral("lb_about"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_about->sizePolicy().hasHeightForWidth());
        lb_about->setSizePolicy(sizePolicy);
        lb_about->setTextFormat(Qt::RichText);
        lb_about->setWordWrap(true);
        lb_about->setOpenExternalLinks(true);

        aboutTabLayout->addWidget(lb_about, 0, 1, 1, 1);

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
        te_thanks = new QTextBrowser(thanksTab);
        te_thanks->setObjectName(QStringLiteral("te_thanks"));
        te_thanks->setOpenExternalLinks(true);

        thanksTabLayout->addWidget(te_thanks);

        tw_tabs->addTab(thanksTab, QString());
        translationTab = new QWidget();
        translationTab->setObjectName(QStringLiteral("translationTab"));
        translationTabLayout = new QVBoxLayout(translationTab);
        translationTabLayout->setSpacing(6);
        translationTabLayout->setContentsMargins(11, 11, 11, 11);
        translationTabLayout->setObjectName(QStringLiteral("translationTabLayout"));
        translationTabLayout->setContentsMargins(0, 0, 0, 0);
        te_translation = new QTextBrowser(translationTab);
        te_translation->setObjectName(QStringLiteral("te_translation"));
        te_translation->setLineWrapMode(QTextEdit::NoWrap);

        translationTabLayout->addWidget(te_translation);

        tw_tabs->addTab(translationTab, QString());
        licenseTab = new QWidget();
        licenseTab->setObjectName(QStringLiteral("licenseTab"));
        licenseTabLayout = new QVBoxLayout(licenseTab);
        licenseTabLayout->setSpacing(6);
        licenseTabLayout->setContentsMargins(11, 11, 11, 11);
        licenseTabLayout->setObjectName(QStringLiteral("licenseTabLayout"));
        licenseTabLayout->setContentsMargins(0, 0, 0, 0);
        te_license = new QTextBrowser(licenseTab);
        te_license->setObjectName(QStringLiteral("te_license"));
        te_license->setOpenExternalLinks(true);

        licenseTabLayout->addWidget(te_license);

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
        label_13 = new QLabel(librariesTab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_13, 2, 2, 1, 1);

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

        label_11 = new QLabel(librariesTab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_11, 0, 2, 1, 1);

        label_12 = new QLabel(librariesTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

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


        retranslateUi(AboutDlg);

        tw_tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QDialog *AboutDlg)
    {
        AboutDlg->setWindowTitle(QApplication::translate("AboutDlg", "About qBittorrent", Q_NULLPTR));
        tw_tabs->setTabText(tw_tabs->indexOf(aboutTab), QApplication::translate("AboutDlg", "About", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("AboutDlg", "Current maintainer", Q_NULLPTR));
        label_18->setText(QApplication::translate("AboutDlg", "Greece", Q_NULLPTR));
        label_15->setText(QApplication::translate("AboutDlg", "Nationality:", Q_NULLPTR));
        label_16->setText(QApplication::translate("AboutDlg", "E-mail:", Q_NULLPTR));
        label_14->setText(QApplication::translate("AboutDlg", "Name:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AboutDlg", "Original author", Q_NULLPTR));
        label_7->setText(QApplication::translate("AboutDlg", "France", Q_NULLPTR));
        label_3->setText(QApplication::translate("AboutDlg", "Name:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AboutDlg", "E-mail:", Q_NULLPTR));
        label_4->setText(QApplication::translate("AboutDlg", "Nationality:", Q_NULLPTR));
        tw_tabs->setTabText(tw_tabs->indexOf(authorTab), QApplication::translate("AboutDlg", "Author", Q_NULLPTR));
        tw_tabs->setTabText(tw_tabs->indexOf(thanksTab), QApplication::translate("AboutDlg", "Special Thanks", Q_NULLPTR));
        tw_tabs->setTabText(tw_tabs->indexOf(translationTab), QApplication::translate("AboutDlg", "Translators", Q_NULLPTR));
        tw_tabs->setTabText(tw_tabs->indexOf(licenseTab), QApplication::translate("AboutDlg", "License", Q_NULLPTR));
        label->setText(QApplication::translate("AboutDlg", "qBittorrent was built with the following libraries:", Q_NULLPTR));
        tw_tabs->setTabText(tw_tabs->indexOf(librariesTab), QApplication::translate("AboutDlg", "Libraries", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
