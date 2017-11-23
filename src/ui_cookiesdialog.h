/********************************************************************************
** Form generated from reading UI file 'cookiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOKIESDIALOG_H
#define UI_COOKIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CookiesDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QToolButton *buttonAdd;
    QSpacerItem *verticalSpacer;
    QToolButton *buttonDelete;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CookiesDialog)
    {
        if (CookiesDialog->objectName().isEmpty())
            CookiesDialog->setObjectName(QStringLiteral("CookiesDialog"));
        CookiesDialog->resize(618, 369);
        verticalLayout_2 = new QVBoxLayout(CookiesDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(CookiesDialog);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setEditTriggers(QAbstractItemView::AllEditTriggers);
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout->addWidget(treeView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonAdd = new QToolButton(CookiesDialog);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));
        buttonAdd->setText(QStringLiteral(""));
        buttonAdd->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(buttonAdd);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        buttonDelete = new QToolButton(CookiesDialog);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));
        buttonDelete->setText(QStringLiteral(""));
        buttonDelete->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(buttonDelete);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CookiesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CookiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CookiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CookiesDialog, SLOT(reject()));
        QObject::connect(buttonAdd, SIGNAL(clicked()), CookiesDialog, SLOT(onButtonAddClicked()));
        QObject::connect(buttonDelete, SIGNAL(clicked()), CookiesDialog, SLOT(onButtonDeleteClicked()));

        QMetaObject::connectSlotsByName(CookiesDialog);
    } // setupUi

    void retranslateUi(QDialog *CookiesDialog)
    {
        CookiesDialog->setWindowTitle(QApplication::translate("CookiesDialog", "Manage Cookies", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CookiesDialog: public Ui_CookiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOKIESDIALOG_H
