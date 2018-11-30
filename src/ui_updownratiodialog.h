/********************************************************************************
** Form generated from reading UI file 'updownratiodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDOWNRATIODIALOG_H
#define UI_UPDOWNRATIODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpDownRatioDialog
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *useDefaultButton;
    QRadioButton *noLimitButton;
    QGridLayout *gridLayout;
    QRadioButton *torrentLimitButton;
    QDoubleSpinBox *ratioSpinBox;
    QDoubleSpinBox *timeSpinBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkMaxRatio;
    QCheckBox *checkMaxTime;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QButtonGroup *shareButtonGroup;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *UpDownRatioDialog)
    {
        if (UpDownRatioDialog->objectName().isEmpty())
            UpDownRatioDialog->setObjectName(QStringLiteral("UpDownRatioDialog"));
        UpDownRatioDialog->resize(399, 195);
        verticalLayout = new QVBoxLayout(UpDownRatioDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        useDefaultButton = new QRadioButton(UpDownRatioDialog);
        buttonGroup = new QButtonGroup(UpDownRatioDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(useDefaultButton);
        useDefaultButton->setObjectName(QStringLiteral("useDefaultButton"));

        verticalLayout->addWidget(useDefaultButton);

        noLimitButton = new QRadioButton(UpDownRatioDialog);
        buttonGroup->addButton(noLimitButton);
        noLimitButton->setObjectName(QStringLiteral("noLimitButton"));

        verticalLayout->addWidget(noLimitButton);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        torrentLimitButton = new QRadioButton(UpDownRatioDialog);
        buttonGroup->addButton(torrentLimitButton);
        torrentLimitButton->setObjectName(QStringLiteral("torrentLimitButton"));

        gridLayout->addWidget(torrentLimitButton, 0, 0, 1, 1);

        ratioSpinBox = new QDoubleSpinBox(UpDownRatioDialog);
        ratioSpinBox->setObjectName(QStringLiteral("ratioSpinBox"));
        ratioSpinBox->setMaximum(9998);
        ratioSpinBox->setSingleStep(0.05);
        ratioSpinBox->setValue(1);

        gridLayout->addWidget(ratioSpinBox, 0, 2, 1, 1);

        timeSpinBox = new QDoubleSpinBox(UpDownRatioDialog);
        timeSpinBox->setObjectName(QStringLiteral("timeSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timeSpinBox->sizePolicy().hasHeightForWidth());
        timeSpinBox->setSizePolicy(sizePolicy);
        timeSpinBox->setDecimals(0);
        timeSpinBox->setMaximum(525600);
        timeSpinBox->setSingleStep(1);
        timeSpinBox->setValue(1440);

        gridLayout->addWidget(timeSpinBox, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        checkMaxRatio = new QCheckBox(UpDownRatioDialog);
        checkMaxRatio->setObjectName(QStringLiteral("checkMaxRatio"));

        gridLayout->addWidget(checkMaxRatio, 0, 1, 1, 1);

        checkMaxTime = new QCheckBox(UpDownRatioDialog);
        checkMaxTime->setObjectName(QStringLiteral("checkMaxTime"));

        gridLayout->addWidget(checkMaxTime, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(UpDownRatioDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UpDownRatioDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UpDownRatioDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UpDownRatioDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UpDownRatioDialog);
    } // setupUi

    void retranslateUi(QDialog *UpDownRatioDialog)
    {
        UpDownRatioDialog->setWindowTitle(QApplication::translate("UpDownRatioDialog", "Torrent Upload/Download Ratio Limiting", nullptr));
        useDefaultButton->setText(QApplication::translate("UpDownRatioDialog", "Use global share limit", nullptr));
        noLimitButton->setText(QApplication::translate("UpDownRatioDialog", "Set no share limit", nullptr));
        torrentLimitButton->setText(QApplication::translate("UpDownRatioDialog", "Set share limit to", nullptr));
        checkMaxRatio->setText(QApplication::translate("UpDownRatioDialog", "ratio", nullptr));
        checkMaxTime->setText(QApplication::translate("UpDownRatioDialog", "minutes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpDownRatioDialog: public Ui_UpDownRatioDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDOWNRATIODIALOG_H
