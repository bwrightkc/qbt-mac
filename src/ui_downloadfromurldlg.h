/********************************************************************************
** Form generated from reading UI file 'downloadfromurldlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADFROMURLDLG_H
#define UI_DOWNLOADFROMURLDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_downloadFromURL
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *downloadURL_lbl;
    QTextEdit *textUrls;
    QLabel *label_infos;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *downloadFromURL)
    {
        if (downloadFromURL->objectName().isEmpty())
            downloadFromURL->setObjectName(QStringLiteral("downloadFromURL"));
        downloadFromURL->resize(501, 220);
        vboxLayout = new QVBoxLayout(downloadFromURL);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        downloadURL_lbl = new QLabel(downloadFromURL);
        downloadURL_lbl->setObjectName(QStringLiteral("downloadURL_lbl"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        downloadURL_lbl->setFont(font);

        vboxLayout->addWidget(downloadURL_lbl);

        textUrls = new QTextEdit(downloadFromURL);
        textUrls->setObjectName(QStringLiteral("textUrls"));
        textUrls->setTabChangesFocus(true);
        textUrls->setAcceptRichText(false);

        vboxLayout->addWidget(textUrls);

        label_infos = new QLabel(downloadFromURL);
        label_infos->setObjectName(QStringLiteral("label_infos"));
        QFont font1;
        font1.setItalic(true);
        label_infos->setFont(font1);

        vboxLayout->addWidget(label_infos);

        buttonBox = new QDialogButtonBox(downloadFromURL);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(downloadFromURL);

        QMetaObject::connectSlotsByName(downloadFromURL);
    } // setupUi

    void retranslateUi(QDialog *downloadFromURL)
    {
        downloadFromURL->setWindowTitle(QApplication::translate("downloadFromURL", "Download from URLs", Q_NULLPTR));
        downloadURL_lbl->setText(QApplication::translate("downloadFromURL", "Add torrent links", Q_NULLPTR));
        label_infos->setText(QApplication::translate("downloadFromURL", "One link per line (HTTP links, Magnet links and info-hashes are supported)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class downloadFromURL: public Ui_downloadFromURL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADFROMURLDLG_H
