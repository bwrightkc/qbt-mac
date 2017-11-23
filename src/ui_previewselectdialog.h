/********************************************************************************
** Form generated from reading UI file 'previewselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEWSELECTDIALOG_H
#define UI_PREVIEWSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_preview
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QTreeView *previewList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *preview)
    {
        if (preview->objectName().isEmpty())
            preview->setObjectName(QStringLiteral("preview"));
        preview->resize(462, 256);
        vboxLayout = new QVBoxLayout(preview);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        label = new QLabel(preview);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        vboxLayout->addWidget(label);

        previewList = new QTreeView(preview);
        previewList->setObjectName(QStringLiteral("previewList"));
        previewList->setSortingEnabled(true);

        vboxLayout->addWidget(previewList);

        buttonBox = new QDialogButtonBox(preview);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(preview);

        QMetaObject::connectSlotsByName(preview);
    } // setupUi

    void retranslateUi(QDialog *preview)
    {
        preview->setWindowTitle(QApplication::translate("preview", "Preview selection", Q_NULLPTR));
        label->setText(QApplication::translate("preview", "The following files support previewing, please select one of them:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class preview: public Ui_preview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEWSELECTDIALOG_H
