/********************************************************************************
** Form generated from reading UI file 'pluginselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINSELECTDIALOG_H
#define UI_PLUGINSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginSelectDialog
{
public:
    QAction *actionEnable;
    QAction *actionUninstall;
    QVBoxLayout *pluginSelectLayout;
    QLabel *lbl_plugins;
    QTreeWidget *pluginsTree;
    QLabel *label;
    QLabel *getNewPlugin_lbl;
    QHBoxLayout *layout1;
    QPushButton *installButton;
    QPushButton *updateButton;
    QPushButton *closeButton;

    void setupUi(QDialog *PluginSelectDialog)
    {
        if (PluginSelectDialog->objectName().isEmpty())
            PluginSelectDialog->setObjectName(QStringLiteral("PluginSelectDialog"));
        PluginSelectDialog->resize(600, 345);
        PluginSelectDialog->setAcceptDrops(true);
        actionEnable = new QAction(PluginSelectDialog);
        actionEnable->setObjectName(QStringLiteral("actionEnable"));
        actionEnable->setCheckable(true);
        actionUninstall = new QAction(PluginSelectDialog);
        actionUninstall->setObjectName(QStringLiteral("actionUninstall"));
        pluginSelectLayout = new QVBoxLayout(PluginSelectDialog);
        pluginSelectLayout->setObjectName(QStringLiteral("pluginSelectLayout"));
        lbl_plugins = new QLabel(PluginSelectDialog);
        lbl_plugins->setObjectName(QStringLiteral("lbl_plugins"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        lbl_plugins->setFont(font);

        pluginSelectLayout->addWidget(lbl_plugins);

        pluginsTree = new QTreeWidget(PluginSelectDialog);
        pluginsTree->headerItem()->setText(4, QString());
        pluginsTree->setObjectName(QStringLiteral("pluginsTree"));
        pluginsTree->setContextMenuPolicy(Qt::CustomContextMenu);
        pluginsTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        pluginsTree->setUniformRowHeights(true);
        pluginsTree->setItemsExpandable(false);
        pluginsTree->setSortingEnabled(true);

        pluginSelectLayout->addWidget(pluginsTree);

        label = new QLabel(PluginSelectDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        pluginSelectLayout->addWidget(label);

        getNewPlugin_lbl = new QLabel(PluginSelectDialog);
        getNewPlugin_lbl->setObjectName(QStringLiteral("getNewPlugin_lbl"));
        QFont font1;
        font1.setItalic(true);
        getNewPlugin_lbl->setFont(font1);
        getNewPlugin_lbl->setOpenExternalLinks(true);

        pluginSelectLayout->addWidget(getNewPlugin_lbl);

        layout1 = new QHBoxLayout();
        layout1->setObjectName(QStringLiteral("layout1"));
        installButton = new QPushButton(PluginSelectDialog);
        installButton->setObjectName(QStringLiteral("installButton"));

        layout1->addWidget(installButton);

        updateButton = new QPushButton(PluginSelectDialog);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        layout1->addWidget(updateButton);

        closeButton = new QPushButton(PluginSelectDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        layout1->addWidget(closeButton);


        pluginSelectLayout->addLayout(layout1);


        retranslateUi(PluginSelectDialog);

        QMetaObject::connectSlotsByName(PluginSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginSelectDialog)
    {
        PluginSelectDialog->setWindowTitle(QApplication::translate("PluginSelectDialog", "Search plugins", nullptr));
        actionEnable->setText(QApplication::translate("PluginSelectDialog", "Enabled", nullptr));
        actionUninstall->setText(QApplication::translate("PluginSelectDialog", "Uninstall", nullptr));
        lbl_plugins->setText(QApplication::translate("PluginSelectDialog", "Installed search plugins:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = pluginsTree->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("PluginSelectDialog", "Enabled", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("PluginSelectDialog", "Url", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("PluginSelectDialog", "Version", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("PluginSelectDialog", "Name", nullptr));
        label->setText(QApplication::translate("PluginSelectDialog", "Warning: Be sure to comply with your country's copyright laws when downloading torrents from any of these search engines.", nullptr));
        getNewPlugin_lbl->setText(QApplication::translate("PluginSelectDialog", "You can get new search engine plugins here: <a href=\"http://plugins.qbittorrent.org\">http://plugins.qbittorrent.org</a>", nullptr));
        installButton->setText(QApplication::translate("PluginSelectDialog", "Install a new one", nullptr));
        updateButton->setText(QApplication::translate("PluginSelectDialog", "Check for updates", nullptr));
        closeButton->setText(QApplication::translate("PluginSelectDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginSelectDialog: public Ui_PluginSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINSELECTDIALOG_H
