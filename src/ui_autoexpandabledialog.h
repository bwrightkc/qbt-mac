/********************************************************************************
** Form generated from reading UI file 'autoexpandabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOEXPANDABLEDIALOG_H
#define UI_AUTOEXPANDABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AutoExpandableDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *textLabel;
    QLineEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AutoExpandableDialog)
    {
        if (AutoExpandableDialog->objectName().isEmpty())
            AutoExpandableDialog->setObjectName(QStringLiteral("AutoExpandableDialog"));
        AutoExpandableDialog->resize(222, 105);
        verticalLayout = new QVBoxLayout(AutoExpandableDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textLabel = new QLabel(AutoExpandableDialog);
        textLabel->setObjectName(QStringLiteral("textLabel"));

        verticalLayout->addWidget(textLabel);

        textEdit = new QLineEdit(AutoExpandableDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(AutoExpandableDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AutoExpandableDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AutoExpandableDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AutoExpandableDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AutoExpandableDialog);
    } // setupUi

    void retranslateUi(QDialog *AutoExpandableDialog)
    {
        Q_UNUSED(AutoExpandableDialog);
    } // retranslateUi

};

namespace Ui {
    class AutoExpandableDialog: public Ui_AutoExpandableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOEXPANDABLEDIALOG_H
