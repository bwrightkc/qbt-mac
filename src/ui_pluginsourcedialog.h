/********************************************************************************
** Form generated from reading UI file 'pluginsourcedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINSOURCEDIALOG_H
#define UI_PLUGINSOURCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginSourceDialog
{
public:
    QVBoxLayout *pluginSourceLayout;
    QLabel *source_lbl;
    QHBoxLayout *layout1;
    QPushButton *localButton;
    QPushButton *urlButton;

    void setupUi(QDialog *PluginSourceDialog)
    {
        if (PluginSourceDialog->objectName().isEmpty())
            PluginSourceDialog->setObjectName(QStringLiteral("PluginSourceDialog"));
        PluginSourceDialog->resize(207, 76);
        pluginSourceLayout = new QVBoxLayout(PluginSourceDialog);
        pluginSourceLayout->setObjectName(QStringLiteral("pluginSourceLayout"));
        source_lbl = new QLabel(PluginSourceDialog);
        source_lbl->setObjectName(QStringLiteral("source_lbl"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        source_lbl->setFont(font);

        pluginSourceLayout->addWidget(source_lbl);

        layout1 = new QHBoxLayout();
        layout1->setObjectName(QStringLiteral("layout1"));
        localButton = new QPushButton(PluginSourceDialog);
        localButton->setObjectName(QStringLiteral("localButton"));

        layout1->addWidget(localButton);

        urlButton = new QPushButton(PluginSourceDialog);
        urlButton->setObjectName(QStringLiteral("urlButton"));

        layout1->addWidget(urlButton);


        pluginSourceLayout->addLayout(layout1);


        retranslateUi(PluginSourceDialog);

        QMetaObject::connectSlotsByName(PluginSourceDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginSourceDialog)
    {
        PluginSourceDialog->setWindowTitle(QApplication::translate("PluginSourceDialog", "Plugin source", nullptr));
        source_lbl->setText(QApplication::translate("PluginSourceDialog", "Search plugin source:", nullptr));
        localButton->setText(QApplication::translate("PluginSourceDialog", "Local file", nullptr));
        urlButton->setText(QApplication::translate("PluginSourceDialog", "Web link", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginSourceDialog: public Ui_PluginSourceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINSOURCEDIALOG_H
