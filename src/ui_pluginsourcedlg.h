/********************************************************************************
** Form generated from reading UI file 'pluginsourcedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINSOURCEDLG_H
#define UI_PLUGINSOURCEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginSourceDlg
{
public:
    QVBoxLayout *pluginSourceLayout;
    QLabel *source_lbl;
    QHBoxLayout *layout1;
    QPushButton *localButton;
    QPushButton *urlButton;

    void setupUi(QDialog *PluginSourceDlg)
    {
        if (PluginSourceDlg->objectName().isEmpty())
            PluginSourceDlg->setObjectName(QStringLiteral("PluginSourceDlg"));
        PluginSourceDlg->resize(207, 76);
        pluginSourceLayout = new QVBoxLayout(PluginSourceDlg);
        pluginSourceLayout->setObjectName(QStringLiteral("pluginSourceLayout"));
        source_lbl = new QLabel(PluginSourceDlg);
        source_lbl->setObjectName(QStringLiteral("source_lbl"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        source_lbl->setFont(font);

        pluginSourceLayout->addWidget(source_lbl);

        layout1 = new QHBoxLayout();
        layout1->setObjectName(QStringLiteral("layout1"));
        localButton = new QPushButton(PluginSourceDlg);
        localButton->setObjectName(QStringLiteral("localButton"));

        layout1->addWidget(localButton);

        urlButton = new QPushButton(PluginSourceDlg);
        urlButton->setObjectName(QStringLiteral("urlButton"));

        layout1->addWidget(urlButton);


        pluginSourceLayout->addLayout(layout1);


        retranslateUi(PluginSourceDlg);

        QMetaObject::connectSlotsByName(PluginSourceDlg);
    } // setupUi

    void retranslateUi(QDialog *PluginSourceDlg)
    {
        PluginSourceDlg->setWindowTitle(QApplication::translate("PluginSourceDlg", "Plugin source", Q_NULLPTR));
        source_lbl->setText(QApplication::translate("PluginSourceDlg", "Search plugin source:", Q_NULLPTR));
        localButton->setText(QApplication::translate("PluginSourceDlg", "Local file", Q_NULLPTR));
        urlButton->setText(QApplication::translate("PluginSourceDlg", "Web link", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PluginSourceDlg: public Ui_PluginSourceDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINSOURCEDLG_H
