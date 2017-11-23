/********************************************************************************
** Form generated from reading UI file 'confirmdeletiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMDELETIONDLG_H
#define UI_CONFIRMDELETIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_confirmDeletionDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_warn;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *rememberBtn;
    QCheckBox *checkPermDelete;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *confirmDeletionDlg)
    {
        if (confirmDeletionDlg->objectName().isEmpty())
            confirmDeletionDlg->setObjectName(QStringLiteral("confirmDeletionDlg"));
        confirmDeletionDlg->resize(463, 128);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(confirmDeletionDlg->sizePolicy().hasHeightForWidth());
        confirmDeletionDlg->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(confirmDeletionDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbl_warn = new QLabel(confirmDeletionDlg);
        lbl_warn->setObjectName(QStringLiteral("lbl_warn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_warn->sizePolicy().hasHeightForWidth());
        lbl_warn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lbl_warn);

        label = new QLabel(confirmDeletionDlg);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setText(QStringLiteral("deletion message goes here"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rememberBtn = new QToolButton(confirmDeletionDlg);
        rememberBtn->setObjectName(QStringLiteral("rememberBtn"));
        rememberBtn->setEnabled(false);
        rememberBtn->setText(QStringLiteral(""));
        rememberBtn->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(rememberBtn);

        checkPermDelete = new QCheckBox(confirmDeletionDlg);
        checkPermDelete->setObjectName(QStringLiteral("checkPermDelete"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkPermDelete->sizePolicy().hasHeightForWidth());
        checkPermDelete->setSizePolicy(sizePolicy2);
        QFont font;
        font.setItalic(true);
        checkPermDelete->setFont(font);

        horizontalLayout_2->addWidget(checkPermDelete);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(confirmDeletionDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(confirmDeletionDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), confirmDeletionDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), confirmDeletionDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(confirmDeletionDlg);
    } // setupUi

    void retranslateUi(QDialog *confirmDeletionDlg)
    {
        confirmDeletionDlg->setWindowTitle(QApplication::translate("confirmDeletionDlg", "Deletion confirmation", Q_NULLPTR));
        lbl_warn->setText(QString());
#ifndef QT_NO_TOOLTIP
        rememberBtn->setToolTip(QApplication::translate("confirmDeletionDlg", "Remember choice", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkPermDelete->setText(QApplication::translate("confirmDeletionDlg", "Also delete the files on the hard disk", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class confirmDeletionDlg: public Ui_confirmDeletionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMDELETIONDLG_H
