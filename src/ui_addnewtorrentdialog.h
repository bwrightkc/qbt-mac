/********************************************************************************
** Form generated from reading UI file 'addnewtorrentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWTORRENTDIALOG_H
#define UI_ADDNEWTORRENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fspathedit.h"
#include "torrentcontenttreeview.h"

QT_BEGIN_NAMESPACE

class Ui_AddNewTorrentDialog
{
public:
    QAction *actionNormal;
    QAction *actionHigh;
    QAction *actionMaximum;
    QAction *actionNot_downloaded;
    QVBoxLayout *AddNewTorrentDialogLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTorrentManagementMode;
    QComboBox *comboTTM;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxSavePath;
    QVBoxLayout *verticalLayout_2;
    FileSystemPathComboEdit *savePath;
    QCheckBox *defaultSavePathCheckBox;
    QCheckBox *doNotDeleteTorrentCheckBox;
    QCheckBox *never_show_cb;
    QToolButton *adv_button;
    QGroupBox *settings_group;
    QGridLayout *gridLayout_3;
    QCheckBox *defaultCategoryCheckbox;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label_5;
    QComboBox *categoryComboBox;
    QCheckBox *startTorrentCheckBox;
    QCheckBox *skipCheckingCheckBox;
    QSpacerItem *horizontalSpacer2;
    QCheckBox *createSubfolderCheckBox;
    QGroupBox *infoGroup;
    QGridLayout *gridLayout_2;
    QLabel *lblhash;
    QLabel *label_4;
    TorrentContentTreeView *contentTreeView;
    QLabel *date_lbl;
    QLabel *label_3;
    QLabel *label;
    QLabel *size_lbl;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QLabel *commentLabel;
    QHBoxLayout *buttonsHLayout;
    QProgressBar *progMetaLoading;
    QLabel *lblMetaLoading;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddNewTorrentDialog)
    {
        if (AddNewTorrentDialog->objectName().isEmpty())
            AddNewTorrentDialog->setObjectName(QStringLiteral("AddNewTorrentDialog"));
        AddNewTorrentDialog->resize(414, 630);
        actionNormal = new QAction(AddNewTorrentDialog);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        actionHigh = new QAction(AddNewTorrentDialog);
        actionHigh->setObjectName(QStringLiteral("actionHigh"));
        actionMaximum = new QAction(AddNewTorrentDialog);
        actionMaximum->setObjectName(QStringLiteral("actionMaximum"));
        actionNot_downloaded = new QAction(AddNewTorrentDialog);
        actionNot_downloaded->setObjectName(QStringLiteral("actionNot_downloaded"));
        AddNewTorrentDialogLayout = new QVBoxLayout(AddNewTorrentDialog);
        AddNewTorrentDialogLayout->setObjectName(QStringLiteral("AddNewTorrentDialogLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTorrentManagementMode = new QLabel(AddNewTorrentDialog);
        labelTorrentManagementMode->setObjectName(QStringLiteral("labelTorrentManagementMode"));

        horizontalLayout->addWidget(labelTorrentManagementMode);

        comboTTM = new QComboBox(AddNewTorrentDialog);
        comboTTM->setObjectName(QStringLiteral("comboTTM"));

        horizontalLayout->addWidget(comboTTM);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        AddNewTorrentDialogLayout->addLayout(horizontalLayout);

        groupBoxSavePath = new QGroupBox(AddNewTorrentDialog);
        groupBoxSavePath->setObjectName(QStringLiteral("groupBoxSavePath"));
        verticalLayout_2 = new QVBoxLayout(groupBoxSavePath);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        savePath = new FileSystemPathComboEdit(groupBoxSavePath);
        savePath->setObjectName(QStringLiteral("savePath"));

        verticalLayout_2->addWidget(savePath);

        defaultSavePathCheckBox = new QCheckBox(groupBoxSavePath);
        defaultSavePathCheckBox->setObjectName(QStringLiteral("defaultSavePathCheckBox"));

        verticalLayout_2->addWidget(defaultSavePathCheckBox);


        AddNewTorrentDialogLayout->addWidget(groupBoxSavePath);

        doNotDeleteTorrentCheckBox = new QCheckBox(AddNewTorrentDialog);
        doNotDeleteTorrentCheckBox->setObjectName(QStringLiteral("doNotDeleteTorrentCheckBox"));

        AddNewTorrentDialogLayout->addWidget(doNotDeleteTorrentCheckBox);

        never_show_cb = new QCheckBox(AddNewTorrentDialog);
        never_show_cb->setObjectName(QStringLiteral("never_show_cb"));

        AddNewTorrentDialogLayout->addWidget(never_show_cb);

        adv_button = new QToolButton(AddNewTorrentDialog);
        adv_button->setObjectName(QStringLiteral("adv_button"));
        adv_button->setText(QString::fromUtf8("\342\226\274"));
        adv_button->setCheckable(true);

        AddNewTorrentDialogLayout->addWidget(adv_button);

        settings_group = new QGroupBox(AddNewTorrentDialog);
        settings_group->setObjectName(QStringLiteral("settings_group"));
        gridLayout_3 = new QGridLayout(settings_group);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        defaultCategoryCheckbox = new QCheckBox(settings_group);
        defaultCategoryCheckbox->setObjectName(QStringLiteral("defaultCategoryCheckbox"));

        gridLayout_3->addWidget(defaultCategoryCheckbox, 1, 2, 1, 1);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        label_5 = new QLabel(settings_group);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_1->addWidget(label_5);

        categoryComboBox = new QComboBox(settings_group);
        categoryComboBox->setObjectName(QStringLiteral("categoryComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(categoryComboBox->sizePolicy().hasHeightForWidth());
        categoryComboBox->setSizePolicy(sizePolicy);
        categoryComboBox->setEditable(true);
        categoryComboBox->setInsertPolicy(QComboBox::InsertAtTop);

        horizontalLayout_1->addWidget(categoryComboBox);


        gridLayout_3->addLayout(horizontalLayout_1, 0, 2, 1, 1);

        startTorrentCheckBox = new QCheckBox(settings_group);
        startTorrentCheckBox->setObjectName(QStringLiteral("startTorrentCheckBox"));
        startTorrentCheckBox->setChecked(true);

        gridLayout_3->addWidget(startTorrentCheckBox, 0, 0, 1, 1);

        skipCheckingCheckBox = new QCheckBox(settings_group);
        skipCheckingCheckBox->setObjectName(QStringLiteral("skipCheckingCheckBox"));

        gridLayout_3->addWidget(skipCheckingCheckBox, 1, 0, 1, 1);

        horizontalSpacer2 = new QSpacerItem(35, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer2, 0, 1, 1, 1);

        createSubfolderCheckBox = new QCheckBox(settings_group);
        createSubfolderCheckBox->setObjectName(QStringLiteral("createSubfolderCheckBox"));
        createSubfolderCheckBox->setChecked(true);

        gridLayout_3->addWidget(createSubfolderCheckBox, 2, 0, 1, 1);


        AddNewTorrentDialogLayout->addWidget(settings_group);

        infoGroup = new QGroupBox(AddNewTorrentDialog);
        infoGroup->setObjectName(QStringLiteral("infoGroup"));
        gridLayout_2 = new QGridLayout(infoGroup);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lblhash = new QLabel(infoGroup);
        lblhash->setObjectName(QStringLiteral("lblhash"));
        lblhash->setTextFormat(Qt::PlainText);
        lblhash->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(lblhash, 2, 1, 1, 1);

        label_4 = new QLabel(infoGroup);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        contentTreeView = new TorrentContentTreeView(infoGroup);
        contentTreeView->setObjectName(QStringLiteral("contentTreeView"));
        contentTreeView->setContextMenuPolicy(Qt::CustomContextMenu);
        contentTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        contentTreeView->setSortingEnabled(true);

        gridLayout_2->addWidget(contentTreeView, 4, 0, 1, 2);

        date_lbl = new QLabel(infoGroup);
        date_lbl->setObjectName(QStringLiteral("date_lbl"));

        gridLayout_2->addWidget(date_lbl, 1, 1, 1, 1);

        label_3 = new QLabel(infoGroup);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(infoGroup);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        size_lbl = new QLabel(infoGroup);
        size_lbl->setObjectName(QStringLiteral("size_lbl"));

        gridLayout_2->addWidget(size_lbl, 0, 1, 1, 1);

        label_2 = new QLabel(infoGroup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        scrollArea = new QScrollArea(infoGroup);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 321, 69));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        commentLabel = new QLabel(scrollAreaWidgetContents_2);
        commentLabel->setObjectName(QStringLiteral("commentLabel"));
        commentLabel->setTextFormat(Qt::RichText);
        commentLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        commentLabel->setWordWrap(true);
        commentLabel->setOpenExternalLinks(true);
        commentLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(commentLabel);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea, 3, 1, 1, 1);


        AddNewTorrentDialogLayout->addWidget(infoGroup);

        buttonsHLayout = new QHBoxLayout();
        buttonsHLayout->setObjectName(QStringLiteral("buttonsHLayout"));
        progMetaLoading = new QProgressBar(AddNewTorrentDialog);
        progMetaLoading->setObjectName(QStringLiteral("progMetaLoading"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progMetaLoading->sizePolicy().hasHeightForWidth());
        progMetaLoading->setSizePolicy(sizePolicy1);
        progMetaLoading->setMaximum(0);
        progMetaLoading->setValue(-1);
        progMetaLoading->setTextVisible(false);
        progMetaLoading->setFormat(QStringLiteral("%p%"));

        buttonsHLayout->addWidget(progMetaLoading);

        lblMetaLoading = new QLabel(AddNewTorrentDialog);
        lblMetaLoading->setObjectName(QStringLiteral("lblMetaLoading"));

        buttonsHLayout->addWidget(lblMetaLoading);

        buttonBox = new QDialogButtonBox(AddNewTorrentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        buttonsHLayout->addWidget(buttonBox);


        AddNewTorrentDialogLayout->addLayout(buttonsHLayout);

        QWidget::setTabOrder(savePath, defaultSavePathCheckBox);
        QWidget::setTabOrder(defaultSavePathCheckBox, never_show_cb);
        QWidget::setTabOrder(never_show_cb, adv_button);
        QWidget::setTabOrder(adv_button, startTorrentCheckBox);
        QWidget::setTabOrder(startTorrentCheckBox, skipCheckingCheckBox);
        QWidget::setTabOrder(skipCheckingCheckBox, categoryComboBox);
        QWidget::setTabOrder(categoryComboBox, defaultCategoryCheckbox);
        QWidget::setTabOrder(defaultCategoryCheckbox, scrollArea);
        QWidget::setTabOrder(scrollArea, contentTreeView);

        retranslateUi(AddNewTorrentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddNewTorrentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddNewTorrentDialog, SLOT(reject()));
        QObject::connect(categoryComboBox, SIGNAL(currentIndexChanged(int)), AddNewTorrentDialog, SLOT(categoryChanged(int)));
        QObject::connect(comboTTM, SIGNAL(currentIndexChanged(int)), AddNewTorrentDialog, SLOT(TMMChanged(int)));

        QMetaObject::connectSlotsByName(AddNewTorrentDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewTorrentDialog)
    {
        actionNormal->setText(QApplication::translate("AddNewTorrentDialog", "Normal", Q_NULLPTR));
        actionHigh->setText(QApplication::translate("AddNewTorrentDialog", "High", Q_NULLPTR));
        actionMaximum->setText(QApplication::translate("AddNewTorrentDialog", "Maximum", Q_NULLPTR));
        actionNot_downloaded->setText(QApplication::translate("AddNewTorrentDialog", "Do not download", Q_NULLPTR));
        labelTorrentManagementMode->setText(QApplication::translate("AddNewTorrentDialog", "Torrent Management Mode:", Q_NULLPTR));
        comboTTM->clear();
        comboTTM->insertItems(0, QStringList()
         << QApplication::translate("AddNewTorrentDialog", "Manual", Q_NULLPTR)
         << QApplication::translate("AddNewTorrentDialog", "Automatic", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        comboTTM->setToolTip(QApplication::translate("AddNewTorrentDialog", "Automatic mode means that various torrent properties(eg save path) will be decided by the associated category", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBoxSavePath->setTitle(QApplication::translate("AddNewTorrentDialog", "Save at", Q_NULLPTR));
        defaultSavePathCheckBox->setText(QApplication::translate("AddNewTorrentDialog", "Set as default save path", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        doNotDeleteTorrentCheckBox->setToolTip(QApplication::translate("AddNewTorrentDialog", "When checked, the .torrent file will not be deleted despite the settings at the \"Download\" page of the options dialog", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        doNotDeleteTorrentCheckBox->setText(QApplication::translate("AddNewTorrentDialog", "Do not delete .torrent file", Q_NULLPTR));
        never_show_cb->setText(QApplication::translate("AddNewTorrentDialog", "Never show again", Q_NULLPTR));
        settings_group->setTitle(QApplication::translate("AddNewTorrentDialog", "Torrent settings", Q_NULLPTR));
        defaultCategoryCheckbox->setText(QApplication::translate("AddNewTorrentDialog", "Set as default category", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddNewTorrentDialog", "Category:", Q_NULLPTR));
        startTorrentCheckBox->setText(QApplication::translate("AddNewTorrentDialog", "Start torrent", Q_NULLPTR));
        skipCheckingCheckBox->setText(QApplication::translate("AddNewTorrentDialog", "Skip hash check", Q_NULLPTR));
        createSubfolderCheckBox->setText(QApplication::translate("AddNewTorrentDialog", "Create subfolder", Q_NULLPTR));
        infoGroup->setTitle(QApplication::translate("AddNewTorrentDialog", "Torrent information", Q_NULLPTR));
        lblhash->setText(QString());
        label_4->setText(QApplication::translate("AddNewTorrentDialog", "Hash:", Q_NULLPTR));
        date_lbl->setText(QString());
        label_3->setText(QApplication::translate("AddNewTorrentDialog", "Date:", Q_NULLPTR));
        label->setText(QApplication::translate("AddNewTorrentDialog", "Size:", Q_NULLPTR));
        size_lbl->setText(QString());
        label_2->setText(QApplication::translate("AddNewTorrentDialog", "Comment:", Q_NULLPTR));
        commentLabel->setText(QString());
        Q_UNUSED(AddNewTorrentDialog);
    } // retranslateUi

};

namespace Ui {
    class AddNewTorrentDialog: public Ui_AddNewTorrentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWTORRENTDIALOG_H
