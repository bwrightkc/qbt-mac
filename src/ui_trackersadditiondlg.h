/********************************************************************************
** Form generated from reading UI file 'trackersadditiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKERSADDITIONDLG_H
#define UI_TRACKERSADDITIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrackersAdditionDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *trackers_list;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *list_url;
    QPushButton *uTorrentListButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TrackersAdditionDlg)
    {
        if (TrackersAdditionDlg->objectName().isEmpty())
            TrackersAdditionDlg->setObjectName(QStringLiteral("TrackersAdditionDlg"));
        TrackersAdditionDlg->resize(367, 274);
        verticalLayout = new QVBoxLayout(TrackersAdditionDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(TrackersAdditionDlg);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        trackers_list = new QTextEdit(TrackersAdditionDlg);
        trackers_list->setObjectName(QStringLiteral("trackers_list"));
        trackers_list->setLineWrapMode(QTextEdit::NoWrap);
        trackers_list->setAcceptRichText(false);

        verticalLayout->addWidget(trackers_list);

        label_2 = new QLabel(TrackersAdditionDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        list_url = new QLineEdit(TrackersAdditionDlg);
        list_url->setObjectName(QStringLiteral("list_url"));

        horizontalLayout->addWidget(list_url);

        uTorrentListButton = new QPushButton(TrackersAdditionDlg);
        uTorrentListButton->setObjectName(QStringLiteral("uTorrentListButton"));

        horizontalLayout->addWidget(uTorrentListButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(TrackersAdditionDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TrackersAdditionDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), TrackersAdditionDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TrackersAdditionDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(TrackersAdditionDlg);
    } // setupUi

    void retranslateUi(QDialog *TrackersAdditionDlg)
    {
        TrackersAdditionDlg->setWindowTitle(QApplication::translate("TrackersAdditionDlg", "Trackers addition dialog", Q_NULLPTR));
        label->setText(QApplication::translate("TrackersAdditionDlg", "List of trackers to add (one per line):", Q_NULLPTR));
        label_2->setText(QApplication::translate("TrackersAdditionDlg", "\302\265Torrent compatible list URL:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TrackersAdditionDlg: public Ui_TrackersAdditionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKERSADDITIONDLG_H
