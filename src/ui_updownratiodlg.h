/********************************************************************************
** Form generated from reading UI file 'updownratiodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDOWNRATIODLG_H
#define UI_UPDOWNRATIODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpDownRatioDlg
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

    void setupUi(QDialog *UpDownRatioDlg)
    {
        if (UpDownRatioDlg->objectName().isEmpty())
            UpDownRatioDlg->setObjectName(QStringLiteral("UpDownRatioDlg"));
        UpDownRatioDlg->resize(399, 195);
        verticalLayout = new QVBoxLayout(UpDownRatioDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        useDefaultButton = new QRadioButton(UpDownRatioDlg);
        buttonGroup = new QButtonGroup(UpDownRatioDlg);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(useDefaultButton);
        useDefaultButton->setObjectName(QStringLiteral("useDefaultButton"));

        verticalLayout->addWidget(useDefaultButton);

        noLimitButton = new QRadioButton(UpDownRatioDlg);
        buttonGroup->addButton(noLimitButton);
        noLimitButton->setObjectName(QStringLiteral("noLimitButton"));

        verticalLayout->addWidget(noLimitButton);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        torrentLimitButton = new QRadioButton(UpDownRatioDlg);
        buttonGroup->addButton(torrentLimitButton);
        torrentLimitButton->setObjectName(QStringLiteral("torrentLimitButton"));

        gridLayout->addWidget(torrentLimitButton, 0, 0, 1, 1);

        ratioSpinBox = new QDoubleSpinBox(UpDownRatioDlg);
        ratioSpinBox->setObjectName(QStringLiteral("ratioSpinBox"));
        ratioSpinBox->setMaximum(9998);
        ratioSpinBox->setSingleStep(0.05);
        ratioSpinBox->setValue(1);

        gridLayout->addWidget(ratioSpinBox, 0, 2, 1, 1);

        timeSpinBox = new QDoubleSpinBox(UpDownRatioDlg);
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

        checkMaxRatio = new QCheckBox(UpDownRatioDlg);
        checkMaxRatio->setObjectName(QStringLiteral("checkMaxRatio"));

        gridLayout->addWidget(checkMaxRatio, 0, 1, 1, 1);

        checkMaxTime = new QCheckBox(UpDownRatioDlg);
        checkMaxTime->setObjectName(QStringLiteral("checkMaxTime"));

        gridLayout->addWidget(checkMaxTime, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(UpDownRatioDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UpDownRatioDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), UpDownRatioDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UpDownRatioDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(UpDownRatioDlg);
    } // setupUi

    void retranslateUi(QDialog *UpDownRatioDlg)
    {
        UpDownRatioDlg->setWindowTitle(QApplication::translate("UpDownRatioDlg", "Torrent Upload/Download Ratio Limiting", Q_NULLPTR));
        useDefaultButton->setText(QApplication::translate("UpDownRatioDlg", "Use global share limit", Q_NULLPTR));
        noLimitButton->setText(QApplication::translate("UpDownRatioDlg", "Set no share limit", Q_NULLPTR));
        torrentLimitButton->setText(QApplication::translate("UpDownRatioDlg", "Set share limit to", Q_NULLPTR));
        checkMaxRatio->setText(QApplication::translate("UpDownRatioDlg", "ratio", Q_NULLPTR));
        checkMaxTime->setText(QApplication::translate("UpDownRatioDlg", "minutes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpDownRatioDlg: public Ui_UpDownRatioDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDOWNRATIODLG_H
