/********************************************************************************
** Form generated from reading UI file 'peersadditiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEERSADDITIONDLG_H
#define UI_PEERSADDITIONDLG_H

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

class Ui_addPeersDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *peers_txt;
    QLabel *label_format;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addPeersDialog)
    {
        if (addPeersDialog->objectName().isEmpty())
            addPeersDialog->setObjectName(QStringLiteral("addPeersDialog"));
        addPeersDialog->resize(367, 274);
        verticalLayout = new QVBoxLayout(addPeersDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(addPeersDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        peers_txt = new QTextEdit(addPeersDialog);
        peers_txt->setObjectName(QStringLiteral("peers_txt"));
        peers_txt->setLineWrapMode(QTextEdit::NoWrap);
        peers_txt->setAcceptRichText(false);

        verticalLayout->addWidget(peers_txt);

        label_format = new QLabel(addPeersDialog);
        label_format->setObjectName(QStringLiteral("label_format"));

        verticalLayout->addWidget(label_format);

        buttonBox = new QDialogButtonBox(addPeersDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(addPeersDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), addPeersDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(addPeersDialog);
    } // setupUi

    void retranslateUi(QDialog *addPeersDialog)
    {
        addPeersDialog->setWindowTitle(QApplication::translate("addPeersDialog", "Add Peers", Q_NULLPTR));
        label->setText(QApplication::translate("addPeersDialog", "List of peers to add (one IP per line):", Q_NULLPTR));
        label_format->setText(QApplication::translate("addPeersDialog", "Format: IPv4:port / [IPv6]:port", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addPeersDialog: public Ui_addPeersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEERSADDITIONDLG_H
