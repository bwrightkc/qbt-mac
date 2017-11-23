/********************************************************************************
** Form generated from reading UI file 'banlistoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANLISTOPTIONS_H
#define UI_BANLISTOPTIONS_H

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

class Ui_BanListOptions
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

    void setupUi(QDialog *BanListOptions)
    {
        if (BanListOptions->objectName().isEmpty())
            BanListOptions->setObjectName(QStringLiteral("BanListOptions"));
        BanListOptions->resize(360, 450);
        verticalLayout = new QVBoxLayout(BanListOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        bannedIPBox = new QFrame(BanListOptions);
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

        buttonBox = new QDialogButtonBox(BanListOptions);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(bannedIPList, txtIP);
        QWidget::setTabOrder(txtIP, buttonBanIP);
        QWidget::setTabOrder(buttonBanIP, buttonDeleteIP);

        retranslateUi(BanListOptions);
        QObject::connect(buttonBox, SIGNAL(rejected()), BanListOptions, SLOT(reject()));

        QMetaObject::connectSlotsByName(BanListOptions);
    } // setupUi

    void retranslateUi(QDialog *BanListOptions)
    {
        BanListOptions->setWindowTitle(QApplication::translate("BanListOptions", "List of banned IP addresses", Q_NULLPTR));
        buttonBanIP->setText(QApplication::translate("BanListOptions", "Ban IP", Q_NULLPTR));
        buttonDeleteIP->setText(QApplication::translate("BanListOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BanListOptions: public Ui_BanListOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANLISTOPTIONS_H
