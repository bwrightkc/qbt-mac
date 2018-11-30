/********************************************************************************
** Form generated from reading UI file 'banlistoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANLISTOPTIONSDIALOG_H
#define UI_BANLISTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BanListOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *bannedIPBox;
    QVBoxLayout *verticalLayout_21;
    QTreeView *bannedIPList;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *txtIP;
    QPushButton *buttonBanIP;
    QPushButton *buttonDeleteIP;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BanListOptionsDialog)
    {
        if (BanListOptionsDialog->objectName().isEmpty())
            BanListOptionsDialog->setObjectName(QStringLiteral("BanListOptionsDialog"));
        BanListOptionsDialog->resize(360, 450);
        verticalLayout = new QVBoxLayout(BanListOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        bannedIPBox = new QFrame(BanListOptionsDialog);
        bannedIPBox->setObjectName(QStringLiteral("bannedIPBox"));
        bannedIPBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bannedIPBox->sizePolicy().hasHeightForWidth());
        bannedIPBox->setSizePolicy(sizePolicy);
        bannedIPBox->setAutoFillBackground(true);
        bannedIPBox->setFrameShape(QFrame::Panel);
        bannedIPBox->setFrameShadow(QFrame::Raised);
        bannedIPBox->setLineWidth(1);
        bannedIPBox->setMidLineWidth(0);
        verticalLayout_21 = new QVBoxLayout(bannedIPBox);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        bannedIPList = new QTreeView(bannedIPBox);
        bannedIPList->setObjectName(QStringLiteral("bannedIPList"));
        sizePolicy.setHeightForWidth(bannedIPList->sizePolicy().hasHeightForWidth());
        bannedIPList->setSizePolicy(sizePolicy);
        bannedIPList->setRootIsDecorated(false);
        bannedIPList->setUniformRowHeights(true);
        bannedIPList->setItemsExpandable(false);
        bannedIPList->setSortingEnabled(true);
        bannedIPList->header()->setVisible(false);

        verticalLayout_21->addWidget(bannedIPList);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        txtIP = new QLineEdit(bannedIPBox);
        txtIP->setObjectName(QStringLiteral("txtIP"));

        horizontalLayout_18->addWidget(txtIP);

        buttonBanIP = new QPushButton(bannedIPBox);
        buttonBanIP->setObjectName(QStringLiteral("buttonBanIP"));

        horizontalLayout_18->addWidget(buttonBanIP);

        buttonDeleteIP = new QPushButton(bannedIPBox);
        buttonDeleteIP->setObjectName(QStringLiteral("buttonDeleteIP"));

        horizontalLayout_18->addWidget(buttonDeleteIP);


        verticalLayout_21->addLayout(horizontalLayout_18);


        verticalLayout->addWidget(bannedIPBox);

        buttonBox = new QDialogButtonBox(BanListOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(bannedIPList, txtIP);
        QWidget::setTabOrder(txtIP, buttonBanIP);
        QWidget::setTabOrder(buttonBanIP, buttonDeleteIP);

        retranslateUi(BanListOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), BanListOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BanListOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *BanListOptionsDialog)
    {
        BanListOptionsDialog->setWindowTitle(QApplication::translate("BanListOptionsDialog", "List of banned IP addresses", nullptr));
        buttonBanIP->setText(QApplication::translate("BanListOptionsDialog", "Ban IP", nullptr));
        buttonDeleteIP->setText(QApplication::translate("BanListOptionsDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BanListOptionsDialog: public Ui_BanListOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANLISTOPTIONSDIALOG_H
