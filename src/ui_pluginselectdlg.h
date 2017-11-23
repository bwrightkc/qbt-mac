/********************************************************************************
** Form generated from reading UI file 'pluginselectdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINSELECTDLG_H
#define UI_PLUGINSELECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginSelectDlg
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

    void setupUi(QDialog *PluginSelectDlg)
    {
        if (PluginSelectDlg->objectName().isEmpty())
            PluginSelectDlg->setObjectName(QStringLiteral("PluginSelectDlg"));
        PluginSelectDlg->resize(600, 345);
        PluginSelectDlg->setAcceptDrops(true);
        actionEnable = new QAction(PluginSelectDlg);
        actionEnable->setObjectName(QStringLiteral("actionEnable"));
        actionEnable->setCheckable(true);
        actionUninstall = new QAction(PluginSelectDlg);
        actionUninstall->setObjectName(QStringLiteral("actionUninstall"));
        pluginSelectLayout = new QVBoxLayout(PluginSelectDlg);
        pluginSelectLayout->setObjectName(QStringLiteral("pluginSelectLayout"));
        lbl_plugins = new QLabel(PluginSelectDlg);
        lbl_plugins->setObjectName(QStringLiteral("lbl_plugins"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        lbl_plugins->setFont(font);

        pluginSelectLayout->addWidget(lbl_plugins);

        pluginsTree = new QTreeWidget(PluginSelectDlg);
        pluginsTree->headerItem()->setText(4, QString());
        pluginsTree->setObjectName(QStringLiteral("pluginsTree"));
        pluginsTree->setContextMenuPolicy(Qt::CustomContextMenu);
        pluginsTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        pluginsTree->setUniformRowHeights(true);
        pluginsTree->setItemsExpandable(false);
        pluginsTree->setSortingEnabled(true);

        pluginSelectLayout->addWidget(pluginsTree);

        label = new QLabel(PluginSelectDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        pluginSelectLayout->addWidget(label);

        getNewPlugin_lbl = new QLabel(PluginSelectDlg);
        getNewPlugin_lbl->setObjectName(QStringLiteral("getNewPlugin_lbl"));
        QFont font1;
        font1.setItalic(true);
        getNewPlugin_lbl->setFont(font1);
        getNewPlugin_lbl->setOpenExternalLinks(true);

        pluginSelectLayout->addWidget(getNewPlugin_lbl);

        layout1 = new QHBoxLayout();
        layout1->setObjectName(QStringLiteral("layout1"));
        installButton = new QPushButton(PluginSelectDlg);
        installButton->setObjectName(QStringLiteral("installButton"));

        layout1->addWidget(installButton);

        updateButton = new QPushButton(PluginSelectDlg);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        layout1->addWidget(updateButton);

        closeButton = new QPushButton(PluginSelectDlg);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        layout1->addWidget(closeButton);


        pluginSelectLayout->addLayout(layout1);


        retranslateUi(PluginSelectDlg);

        QMetaObject::connectSlotsByName(PluginSelectDlg);
    } // setupUi

    void retranslateUi(QDialog *PluginSelectDlg)
    {
        PluginSelectDlg->setWindowTitle(QApplication::translate("PluginSelectDlg", "Search plugins", Q_NULLPTR));
        actionEnable->setText(QApplication::translate("PluginSelectDlg", "Enabled", Q_NULLPTR));
        actionUninstall->setText(QApplication::translate("PluginSelectDlg", "Uninstall", Q_NULLPTR));
        lbl_plugins->setText(QApplication::translate("PluginSelectDlg", "Installed search plugins:", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = pluginsTree->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("PluginSelectDlg", "Enabled", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("PluginSelectDlg", "Url", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("PluginSelectDlg", "Version", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("PluginSelectDlg", "Name", Q_NULLPTR));
        label->setText(QApplication::translate("PluginSelectDlg", "Warning: Be sure to comply with your country's copyright laws when downloading torrents from any of these search engines.", Q_NULLPTR));
        getNewPlugin_lbl->setText(QApplication::translate("PluginSelectDlg", "You can get new search engine plugins here: <a href=\"http://plugins.qbittorrent.org\">http://plugins.qbittorrent.org</a>", Q_NULLPTR));
        installButton->setText(QApplication::translate("PluginSelectDlg", "Install a new one", Q_NULLPTR));
        updateButton->setText(QApplication::translate("PluginSelectDlg", "Check for updates", Q_NULLPTR));
        closeButton->setText(QApplication::translate("PluginSelectDlg", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PluginSelectDlg: public Ui_PluginSelectDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINSELECTDLG_H
