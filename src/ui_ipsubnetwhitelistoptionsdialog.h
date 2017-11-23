/********************************************************************************
** Form generated from reading UI file 'ipsubnetwhitelistoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPSUBNETWHITELISTOPTIONSDIALOG_H
#define UI_IPSUBNETWHITELISTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_IPSubnetWhitelistOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *whitelistedIPSubnetBox;
    QVBoxLayout *verticalLayout_21;
    QTreeView *whitelistedIPSubnetList;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *txtIPSubnet;
    QPushButton *buttonWhitelistIPSubnet;
    QPushButton *buttonDeleteIPSubnet;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IPSubnetWhitelistOptionsDialog)
    {
        if (IPSubnetWhitelistOptionsDialog->objectName().isEmpty())
            IPSubnetWhitelistOptionsDialog->setObjectName(QStringLiteral("IPSubnetWhitelistOptionsDialog"));
        IPSubnetWhitelistOptionsDialog->resize(360, 450);
        verticalLayout = new QVBoxLayout(IPSubnetWhitelistOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        whitelistedIPSubnetBox = new QFrame(IPSubnetWhitelistOptionsDialog);
        whitelistedIPSubnetBox->setObjectName(QStringLiteral("whitelistedIPSubnetBox"));
        whitelistedIPSubnetBox->setAutoFillBackground(true);
        whitelistedIPSubnetBox->setFrameShape(QFrame::Panel);
        whitelistedIPSubnetBox->setFrameShadow(QFrame::Raised);
        verticalLayout_21 = new QVBoxLayout(whitelistedIPSubnetBox);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        whitelistedIPSubnetList = new QTreeView(whitelistedIPSubnetBox);
        whitelistedIPSubnetList->setObjectName(QStringLiteral("whitelistedIPSubnetList"));
        whitelistedIPSubnetList->setRootIsDecorated(false);
        whitelistedIPSubnetList->setUniformRowHeights(true);
        whitelistedIPSubnetList->setItemsExpandable(false);
        whitelistedIPSubnetList->setSortingEnabled(true);
        whitelistedIPSubnetList->header()->setVisible(false);

        verticalLayout_21->addWidget(whitelistedIPSubnetList);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        txtIPSubnet = new QLineEdit(whitelistedIPSubnetBox);
        txtIPSubnet->setObjectName(QStringLiteral("txtIPSubnet"));

        horizontalLayout_18->addWidget(txtIPSubnet);

        buttonWhitelistIPSubnet = new QPushButton(whitelistedIPSubnetBox);
        buttonWhitelistIPSubnet->setObjectName(QStringLiteral("buttonWhitelistIPSubnet"));

        horizontalLayout_18->addWidget(buttonWhitelistIPSubnet);

        buttonDeleteIPSubnet = new QPushButton(whitelistedIPSubnetBox);
        buttonDeleteIPSubnet->setObjectName(QStringLiteral("buttonDeleteIPSubnet"));

        horizontalLayout_18->addWidget(buttonDeleteIPSubnet);


        verticalLayout_21->addLayout(horizontalLayout_18);


        verticalLayout->addWidget(whitelistedIPSubnetBox);

        buttonBox = new QDialogButtonBox(IPSubnetWhitelistOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(whitelistedIPSubnetList, txtIPSubnet);
        QWidget::setTabOrder(txtIPSubnet, buttonWhitelistIPSubnet);
        QWidget::setTabOrder(buttonWhitelistIPSubnet, buttonDeleteIPSubnet);

        retranslateUi(IPSubnetWhitelistOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), IPSubnetWhitelistOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(IPSubnetWhitelistOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *IPSubnetWhitelistOptionsDialog)
    {
        IPSubnetWhitelistOptionsDialog->setWindowTitle(QApplication::translate("IPSubnetWhitelistOptionsDialog", "List of whitelisted IP subnets", Q_NULLPTR));
        txtIPSubnet->setPlaceholderText(QApplication::translate("IPSubnetWhitelistOptionsDialog", "Example: 172.17.32.0/24, fdff:ffff:c8::/40", Q_NULLPTR));
        buttonWhitelistIPSubnet->setText(QApplication::translate("IPSubnetWhitelistOptionsDialog", "Add subnet", Q_NULLPTR));
        buttonDeleteIPSubnet->setText(QApplication::translate("IPSubnetWhitelistOptionsDialog", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IPSubnetWhitelistOptionsDialog: public Ui_IPSubnetWhitelistOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPSUBNETWHITELISTOPTIONSDIALOG_H
