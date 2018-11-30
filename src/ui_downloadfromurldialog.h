/********************************************************************************
** Form generated from reading UI file 'downloadfromurldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADFROMURLDIALOG_H
#define UI_DOWNLOADFROMURLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadFromURLDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *downloadURL_lbl;
    QTextEdit *textUrls;
    QLabel *label_infos;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DownloadFromURLDialog)
    {
        if (DownloadFromURLDialog->objectName().isEmpty())
            DownloadFromURLDialog->setObjectName(QStringLiteral("DownloadFromURLDialog"));
        DownloadFromURLDialog->resize(501, 220);
        vboxLayout = new QVBoxLayout(DownloadFromURLDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        downloadURL_lbl = new QLabel(DownloadFromURLDialog);
        downloadURL_lbl->setObjectName(QStringLiteral("downloadURL_lbl"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        downloadURL_lbl->setFont(font);

        vboxLayout->addWidget(downloadURL_lbl);

        textUrls = new QTextEdit(DownloadFromURLDialog);
        textUrls->setObjectName(QStringLiteral("textUrls"));
        textUrls->setTabChangesFocus(true);
        textUrls->setAcceptRichText(false);

        vboxLayout->addWidget(textUrls);

        label_infos = new QLabel(DownloadFromURLDialog);
        label_infos->setObjectName(QStringLiteral("label_infos"));
        QFont font1;
        font1.setItalic(true);
        label_infos->setFont(font1);

        vboxLayout->addWidget(label_infos);

        buttonBox = new QDialogButtonBox(DownloadFromURLDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(DownloadFromURLDialog);

        QMetaObject::connectSlotsByName(DownloadFromURLDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadFromURLDialog)
    {
        DownloadFromURLDialog->setWindowTitle(QApplication::translate("DownloadFromURLDialog", "Download from URLs", nullptr));
        downloadURL_lbl->setText(QApplication::translate("DownloadFromURLDialog", "Add torrent links", nullptr));
        label_infos->setText(QApplication::translate("DownloadFromURLDialog", "One link per line (HTTP links, Magnet links and info-hashes are supported)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadFromURLDialog: public Ui_DownloadFromURLDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADFROMURLDIALOG_H
