/********************************************************************************
** Form generated from reading UI file 'automatedrssdownloader.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOMATEDRSSDOWNLOADER_H
#define UI_AUTOMATEDRSSDOWNLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutomatedRssDownloader
{
public:
    QVBoxLayout *verticalLayout_5;
    QLabel *labelWarn;
    QSplitter *hsplitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QToolButton *removeRuleBtn;
    QToolButton *addRuleBtn;
    QListWidget *listRules;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *ruleDefBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkRegex;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblEFilter;
    QLabel *lblEFilterStat;
    QLabel *lbl_mustnot_stat;
    QLineEdit *lineContains;
    QLabel *lbl_must_stat;
    QLabel *lbl_epfilter_stat;
    QLineEdit *lineNotContains;
    QLineEdit *lineEFilter;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *comboCategory;
    QCheckBox *saveDiffDir_check;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineSavePath;
    QToolButton *browseSP;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lblIgnoreDays;
    QSpinBox *spinIgnorePeriod;
    QLabel *lblLastMatch;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lblAddPaused;
    QComboBox *comboAddPaused;
    QVBoxLayout *verticalLayout;
    QLabel *lblListFeeds;
    QListWidget *listFeeds;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTreeWidget *treeMatchingArticles;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *importBtn;
    QPushButton *exportBtn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AutomatedRssDownloader)
    {
        if (AutomatedRssDownloader->objectName().isEmpty())
            AutomatedRssDownloader->setObjectName(QStringLiteral("AutomatedRssDownloader"));
        AutomatedRssDownloader->resize(816, 523);
        verticalLayout_5 = new QVBoxLayout(AutomatedRssDownloader);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelWarn = new QLabel(AutomatedRssDownloader);
        labelWarn->setObjectName(QStringLiteral("labelWarn"));
        QFont font;
        font.setItalic(true);
        labelWarn->setFont(font);
        labelWarn->setStyleSheet(QStringLiteral("color: red;"));
        labelWarn->setWordWrap(true);

        verticalLayout_5->addWidget(labelWarn);

        hsplitter = new QSplitter(AutomatedRssDownloader);
        hsplitter->setObjectName(QStringLiteral("hsplitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hsplitter->sizePolicy().hasHeightForWidth());
        hsplitter->setSizePolicy(sizePolicy);
        hsplitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(hsplitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        removeRuleBtn = new QToolButton(layoutWidget);
        removeRuleBtn->setObjectName(QStringLiteral("removeRuleBtn"));
        removeRuleBtn->setIconSize(QSize(24, 20));

        horizontalLayout_2->addWidget(removeRuleBtn);

        addRuleBtn = new QToolButton(layoutWidget);
        addRuleBtn->setObjectName(QStringLiteral("addRuleBtn"));
        addRuleBtn->setIconSize(QSize(24, 20));

        horizontalLayout_2->addWidget(addRuleBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        listRules = new QListWidget(layoutWidget);
        listRules->setObjectName(QStringLiteral("listRules"));
        listRules->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_3->addWidget(listRules);

        hsplitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(hsplitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        ruleDefBox = new QGroupBox(layoutWidget1);
        ruleDefBox->setObjectName(QStringLiteral("ruleDefBox"));
        verticalLayout_6 = new QVBoxLayout(ruleDefBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        checkRegex = new QCheckBox(ruleDefBox);
        checkRegex->setObjectName(QStringLiteral("checkRegex"));

        verticalLayout_6->addWidget(checkRegex);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(ruleDefBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(ruleDefBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        lblEFilter = new QLabel(ruleDefBox);
        lblEFilter->setObjectName(QStringLiteral("lblEFilter"));

        gridLayout->addWidget(lblEFilter, 2, 0, 1, 1);

        lblEFilterStat = new QLabel(ruleDefBox);
        lblEFilterStat->setObjectName(QStringLiteral("lblEFilterStat"));
        lblEFilterStat->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(lblEFilterStat, 2, 2, 1, 1);

        lbl_mustnot_stat = new QLabel(ruleDefBox);
        lbl_mustnot_stat->setObjectName(QStringLiteral("lbl_mustnot_stat"));
        lbl_mustnot_stat->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(lbl_mustnot_stat, 1, 2, 1, 1);

        lineContains = new QLineEdit(ruleDefBox);
        lineContains->setObjectName(QStringLiteral("lineContains"));

        gridLayout->addWidget(lineContains, 0, 1, 1, 1);

        lbl_must_stat = new QLabel(ruleDefBox);
        lbl_must_stat->setObjectName(QStringLiteral("lbl_must_stat"));
        lbl_must_stat->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(lbl_must_stat, 0, 2, 1, 1);

        lbl_epfilter_stat = new QLabel(ruleDefBox);
        lbl_epfilter_stat->setObjectName(QStringLiteral("lbl_epfilter_stat"));
        lbl_epfilter_stat->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(lbl_epfilter_stat, 2, 2, 1, 1);

        lineNotContains = new QLineEdit(ruleDefBox);
        lineNotContains->setObjectName(QStringLiteral("lineNotContains"));

        gridLayout->addWidget(lineNotContains, 1, 1, 1, 1);

        lineEFilter = new QLineEdit(ruleDefBox);
        lineEFilter->setObjectName(QStringLiteral("lineEFilter"));

        gridLayout->addWidget(lineEFilter, 2, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        line = new QFrame(ruleDefBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(ruleDefBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_7);

        comboCategory = new QComboBox(ruleDefBox);
        comboCategory->setObjectName(QStringLiteral("comboCategory"));
        comboCategory->setEditable(false);

        horizontalLayout_3->addWidget(comboCategory);


        verticalLayout_6->addLayout(horizontalLayout_3);

        saveDiffDir_check = new QCheckBox(ruleDefBox);
        saveDiffDir_check->setObjectName(QStringLiteral("saveDiffDir_check"));

        verticalLayout_6->addWidget(saveDiffDir_check);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(ruleDefBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(false);

        horizontalLayout_5->addWidget(label_6);

        lineSavePath = new QLineEdit(ruleDefBox);
        lineSavePath->setObjectName(QStringLiteral("lineSavePath"));
        lineSavePath->setEnabled(false);

        horizontalLayout_5->addWidget(lineSavePath);

        browseSP = new QToolButton(ruleDefBox);
        browseSP->setObjectName(QStringLiteral("browseSP"));
        browseSP->setEnabled(false);
        browseSP->setText(QStringLiteral("..."));

        horizontalLayout_5->addWidget(browseSP);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lblIgnoreDays = new QLabel(ruleDefBox);
        lblIgnoreDays->setObjectName(QStringLiteral("lblIgnoreDays"));

        horizontalLayout_8->addWidget(lblIgnoreDays);

        spinIgnorePeriod = new QSpinBox(ruleDefBox);
        spinIgnorePeriod->setObjectName(QStringLiteral("spinIgnorePeriod"));
        spinIgnorePeriod->setEnabled(true);
        spinIgnorePeriod->setMinimum(0);
        spinIgnorePeriod->setMaximum(365);

        horizontalLayout_8->addWidget(spinIgnorePeriod);


        verticalLayout_6->addLayout(horizontalLayout_8);

        lblLastMatch = new QLabel(ruleDefBox);
        lblLastMatch->setObjectName(QStringLiteral("lblLastMatch"));
        lblLastMatch->setEnabled(true);
        lblLastMatch->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(lblLastMatch);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lblAddPaused = new QLabel(ruleDefBox);
        lblAddPaused->setObjectName(QStringLiteral("lblAddPaused"));
        sizePolicy1.setHeightForWidth(lblAddPaused->sizePolicy().hasHeightForWidth());
        lblAddPaused->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(lblAddPaused);

        comboAddPaused = new QComboBox(ruleDefBox);
        comboAddPaused->setObjectName(QStringLiteral("comboAddPaused"));

        horizontalLayout_9->addWidget(comboAddPaused);


        verticalLayout_6->addLayout(horizontalLayout_9);


        verticalLayout_4->addWidget(ruleDefBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblListFeeds = new QLabel(layoutWidget1);
        lblListFeeds->setObjectName(QStringLiteral("lblListFeeds"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        lblListFeeds->setFont(font2);

        verticalLayout->addWidget(lblListFeeds);

        listFeeds = new QListWidget(layoutWidget1);
        listFeeds->setObjectName(QStringLiteral("listFeeds"));

        verticalLayout->addWidget(listFeeds);


        verticalLayout_4->addLayout(verticalLayout);

        hsplitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(hsplitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        treeMatchingArticles = new QTreeWidget(layoutWidget2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeMatchingArticles->setHeaderItem(__qtreewidgetitem);
        treeMatchingArticles->setObjectName(QStringLiteral("treeMatchingArticles"));
        treeMatchingArticles->header()->setVisible(false);

        verticalLayout_2->addWidget(treeMatchingArticles);

        hsplitter->addWidget(layoutWidget2);

        verticalLayout_5->addWidget(hsplitter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        importBtn = new QPushButton(AutomatedRssDownloader);
        importBtn->setObjectName(QStringLiteral("importBtn"));
        importBtn->setEnabled(false);

        horizontalLayout_4->addWidget(importBtn);

        exportBtn = new QPushButton(AutomatedRssDownloader);
        exportBtn->setObjectName(QStringLiteral("exportBtn"));
        exportBtn->setEnabled(false);

        horizontalLayout_4->addWidget(exportBtn);

        buttonBox = new QDialogButtonBox(AutomatedRssDownloader);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout_5->addLayout(horizontalLayout_4);


        retranslateUi(AutomatedRssDownloader);
        QObject::connect(buttonBox, SIGNAL(accepted()), AutomatedRssDownloader, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AutomatedRssDownloader, SLOT(reject()));
        QObject::connect(saveDiffDir_check, SIGNAL(toggled(bool)), label_6, SLOT(setEnabled(bool)));
        QObject::connect(saveDiffDir_check, SIGNAL(toggled(bool)), lineSavePath, SLOT(setEnabled(bool)));
        QObject::connect(saveDiffDir_check, SIGNAL(toggled(bool)), browseSP, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AutomatedRssDownloader);
    } // setupUi

    void retranslateUi(QDialog *AutomatedRssDownloader)
    {
        AutomatedRssDownloader->setWindowTitle(QApplication::translate("AutomatedRssDownloader", "RSS Downloader", Q_NULLPTR));
        labelWarn->setText(QApplication::translate("AutomatedRssDownloader", "Auto downloading of RSS torrents is disabled now! You can enable it in application settings.", Q_NULLPTR));
        label->setText(QApplication::translate("AutomatedRssDownloader", "Download Rules", Q_NULLPTR));
        ruleDefBox->setTitle(QApplication::translate("AutomatedRssDownloader", "Rule Definition", Q_NULLPTR));
        checkRegex->setText(QApplication::translate("AutomatedRssDownloader", "Use Regular Expressions", Q_NULLPTR));
        label_4->setText(QApplication::translate("AutomatedRssDownloader", "Must Contain:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AutomatedRssDownloader", "Must Not Contain:", Q_NULLPTR));
        lblEFilter->setText(QApplication::translate("AutomatedRssDownloader", "Episode Filter:", Q_NULLPTR));
        label_7->setText(QApplication::translate("AutomatedRssDownloader", "Assign Category:", Q_NULLPTR));
        saveDiffDir_check->setText(QApplication::translate("AutomatedRssDownloader", "Save to a Different Directory", Q_NULLPTR));
        label_6->setText(QApplication::translate("AutomatedRssDownloader", "Save to:", Q_NULLPTR));
        lblIgnoreDays->setText(QApplication::translate("AutomatedRssDownloader", "Ignore Subsequent Matches for (0 to Disable)", "... X days"));
        spinIgnorePeriod->setSpecialValueText(QApplication::translate("AutomatedRssDownloader", "Disabled", Q_NULLPTR));
        spinIgnorePeriod->setSuffix(QApplication::translate("AutomatedRssDownloader", " days", Q_NULLPTR));
        lblAddPaused->setText(QApplication::translate("AutomatedRssDownloader", "Add Paused:", Q_NULLPTR));
        comboAddPaused->clear();
        comboAddPaused->insertItems(0, QStringList()
         << QApplication::translate("AutomatedRssDownloader", "Use global settings", Q_NULLPTR)
         << QApplication::translate("AutomatedRssDownloader", "Always", Q_NULLPTR)
         << QApplication::translate("AutomatedRssDownloader", "Never", Q_NULLPTR)
        );
        lblListFeeds->setText(QApplication::translate("AutomatedRssDownloader", "Apply Rule to Feeds:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AutomatedRssDownloader", "Matching RSS Articles", Q_NULLPTR));
        importBtn->setText(QApplication::translate("AutomatedRssDownloader", "&Import...", Q_NULLPTR));
        exportBtn->setText(QApplication::translate("AutomatedRssDownloader", "&Export...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AutomatedRssDownloader: public Ui_AutomatedRssDownloader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMATEDRSSDOWNLOADER_H
