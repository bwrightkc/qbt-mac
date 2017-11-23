/********************************************************************************
** Form generated from reading UI file 'bandwidth_limit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANDWIDTH_LIMIT_H
#define UI_BANDWIDTH_LIMIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_bandwidth_dlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *bandwidthSlider;
    QSpinBox *spinBandwidth;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *bandwidth_dlg)
    {
        if (bandwidth_dlg->objectName().isEmpty())
            bandwidth_dlg->setObjectName(QStringLiteral("bandwidth_dlg"));
        bandwidth_dlg->resize(338, 83);
        verticalLayout = new QVBoxLayout(bandwidth_dlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bandwidthSlider = new QSlider(bandwidth_dlg);
        bandwidthSlider->setObjectName(QStringLiteral("bandwidthSlider"));
        bandwidthSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bandwidthSlider);

        spinBandwidth = new QSpinBox(bandwidth_dlg);
        spinBandwidth->setObjectName(QStringLiteral("spinBandwidth"));
        spinBandwidth->setMaximum(65535);
        spinBandwidth->setValue(0);

        horizontalLayout->addWidget(spinBandwidth);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(bandwidth_dlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(bandwidth_dlg);
        QObject::connect(buttonBox, SIGNAL(rejected()), bandwidth_dlg, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), bandwidth_dlg, SLOT(accept()));

        QMetaObject::connectSlotsByName(bandwidth_dlg);
    } // setupUi

    void retranslateUi(QDialog *bandwidth_dlg)
    {
        Q_UNUSED(bandwidth_dlg);
    } // retranslateUi

};

namespace Ui {
    class bandwidth_dlg: public Ui_bandwidth_dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANDWIDTH_LIMIT_H
