/********************************************************************************
** Form generated from reading UI file 'speedlimitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEEDLIMITDIALOG_H
#define UI_SPEEDLIMITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpeedLimitDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *bandwidthSlider;
    QSpinBox *spinBandwidth;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SpeedLimitDialog)
    {
        if (SpeedLimitDialog->objectName().isEmpty())
            SpeedLimitDialog->setObjectName(QStringLiteral("SpeedLimitDialog"));
        SpeedLimitDialog->resize(338, 83);
        verticalLayout = new QVBoxLayout(SpeedLimitDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bandwidthSlider = new QSlider(SpeedLimitDialog);
        bandwidthSlider->setObjectName(QStringLiteral("bandwidthSlider"));
        bandwidthSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bandwidthSlider);

        spinBandwidth = new QSpinBox(SpeedLimitDialog);
        spinBandwidth->setObjectName(QStringLiteral("spinBandwidth"));
        spinBandwidth->setMaximum(65535);

        horizontalLayout->addWidget(spinBandwidth);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SpeedLimitDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SpeedLimitDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), SpeedLimitDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), SpeedLimitDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SpeedLimitDialog);
    } // setupUi

    void retranslateUi(QDialog *SpeedLimitDialog)
    {
        spinBandwidth->setSpecialValueText(QApplication::translate("SpeedLimitDialog", "\342\210\236", nullptr));
        spinBandwidth->setSuffix(QApplication::translate("SpeedLimitDialog", " KiB/s", nullptr));
        Q_UNUSED(SpeedLimitDialog);
    } // retranslateUi

};

namespace Ui {
    class SpeedLimitDialog: public Ui_SpeedLimitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEEDLIMITDIALOG_H
