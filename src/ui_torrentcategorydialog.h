/********************************************************************************
** Form generated from reading UI file 'torrentcategorydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TORRENTCATEGORYDIALOG_H
#define UI_TORRENTCATEGORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "fspathedit.h"

QT_BEGIN_NAMESPACE

class Ui_TorrentCategoryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelCategoryName;
    QLineEdit *textCategoryName;
    QLabel *labelSavePath;
    FileSystemPathComboEdit *comboSavePath;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TorrentCategoryDialog)
    {
        if (TorrentCategoryDialog->objectName().isEmpty())
            TorrentCategoryDialog->setObjectName(QStringLiteral("TorrentCategoryDialog"));
        TorrentCategoryDialog->resize(400, 100);
        verticalLayout = new QVBoxLayout(TorrentCategoryDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelCategoryName = new QLabel(TorrentCategoryDialog);
        labelCategoryName->setObjectName(QStringLiteral("labelCategoryName"));

        gridLayout->addWidget(labelCategoryName, 0, 0, 1, 1);

        textCategoryName = new QLineEdit(TorrentCategoryDialog);
        textCategoryName->setObjectName(QStringLiteral("textCategoryName"));

        gridLayout->addWidget(textCategoryName, 0, 1, 1, 1);

        labelSavePath = new QLabel(TorrentCategoryDialog);
        labelSavePath->setObjectName(QStringLiteral("labelSavePath"));

        gridLayout->addWidget(labelSavePath, 1, 0, 1, 1);

        comboSavePath = new FileSystemPathComboEdit(TorrentCategoryDialog);
        comboSavePath->setObjectName(QStringLiteral("comboSavePath"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboSavePath->sizePolicy().hasHeightForWidth());
        comboSavePath->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboSavePath, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(TorrentCategoryDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TorrentCategoryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TorrentCategoryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TorrentCategoryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TorrentCategoryDialog);
    } // setupUi

    void retranslateUi(QDialog *TorrentCategoryDialog)
    {
        TorrentCategoryDialog->setWindowTitle(QApplication::translate("TorrentCategoryDialog", "Torrent Category Properties", Q_NULLPTR));
        labelCategoryName->setText(QApplication::translate("TorrentCategoryDialog", "Name:", Q_NULLPTR));
        labelSavePath->setText(QApplication::translate("TorrentCategoryDialog", "Save path:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TorrentCategoryDialog: public Ui_TorrentCategoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TORRENTCATEGORYDIALOG_H
