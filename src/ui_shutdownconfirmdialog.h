/********************************************************************************
** Form generated from reading UI file 'shutdownconfirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHUTDOWNCONFIRMDIALOG_H
#define UI_SHUTDOWNCONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShutdownConfirmDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *warningLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *shutdownText;
    QCheckBox *neverShowAgainCheckbox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ShutdownConfirmDialog)
    {
        if (ShutdownConfirmDialog->objectName().isEmpty())
            ShutdownConfirmDialog->setObjectName(QStringLiteral("ShutdownConfirmDialog"));
        ShutdownConfirmDialog->resize(410, 140);
        verticalLayout_3 = new QVBoxLayout(ShutdownConfirmDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 15, -1, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        warningLabel = new QLabel(ShutdownConfirmDialog);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setText(QStringLiteral("warning icon"));
        warningLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(warningLabel, 0, 0, 2, 1);

        horizontalSpacer = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        shutdownText = new QLabel(ShutdownConfirmDialog);
        shutdownText->setObjectName(QStringLiteral("shutdownText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shutdownText->sizePolicy().hasHeightForWidth());
        shutdownText->setSizePolicy(sizePolicy);
        shutdownText->setText(QStringLiteral("shutdown message goes here"));
        shutdownText->setWordWrap(true);

        gridLayout->addWidget(shutdownText, 0, 2, 1, 1);

        neverShowAgainCheckbox = new QCheckBox(ShutdownConfirmDialog);
        neverShowAgainCheckbox->setObjectName(QStringLiteral("neverShowAgainCheckbox"));

        gridLayout->addWidget(neverShowAgainCheckbox, 1, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ShutdownConfirmDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(ShutdownConfirmDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ShutdownConfirmDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ShutdownConfirmDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShutdownConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *ShutdownConfirmDialog)
    {
        neverShowAgainCheckbox->setText(QApplication::translate("ShutdownConfirmDialog", "Don't show again", nullptr));
        Q_UNUSED(ShutdownConfirmDialog);
    } // retranslateUi

};

namespace Ui {
    class ShutdownConfirmDialog: public Ui_ShutdownConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHUTDOWNCONFIRMDIALOG_H
