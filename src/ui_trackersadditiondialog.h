/********************************************************************************
** Form generated from reading UI file 'trackersadditiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKERSADDITIONDIALOG_H
#define UI_TRACKERSADDITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrackersAdditionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEditTrackersList;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditListURL;
    QPushButton *uTorrentListButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TrackersAdditionDialog)
    {
        if (TrackersAdditionDialog->objectName().isEmpty())
            TrackersAdditionDialog->setObjectName(QStringLiteral("TrackersAdditionDialog"));
        TrackersAdditionDialog->resize(367, 274);
        verticalLayout = new QVBoxLayout(TrackersAdditionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(TrackersAdditionDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textEditTrackersList = new QTextEdit(TrackersAdditionDialog);
        textEditTrackersList->setObjectName(QStringLiteral("textEditTrackersList"));
        textEditTrackersList->setLineWrapMode(QTextEdit::NoWrap);
        textEditTrackersList->setAcceptRichText(false);

        verticalLayout->addWidget(textEditTrackersList);

        label_2 = new QLabel(TrackersAdditionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditListURL = new QLineEdit(TrackersAdditionDialog);
        lineEditListURL->setObjectName(QStringLiteral("lineEditListURL"));

        horizontalLayout->addWidget(lineEditListURL);

        uTorrentListButton = new QPushButton(TrackersAdditionDialog);
        uTorrentListButton->setObjectName(QStringLiteral("uTorrentListButton"));

        horizontalLayout->addWidget(uTorrentListButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(TrackersAdditionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TrackersAdditionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TrackersAdditionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TrackersAdditionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TrackersAdditionDialog);
    } // setupUi

    void retranslateUi(QDialog *TrackersAdditionDialog)
    {
        TrackersAdditionDialog->setWindowTitle(QApplication::translate("TrackersAdditionDialog", "Trackers addition dialog", nullptr));
        label->setText(QApplication::translate("TrackersAdditionDialog", "List of trackers to add (one per line):", nullptr));
        label_2->setText(QApplication::translate("TrackersAdditionDialog", "\302\265Torrent compatible list URL:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackersAdditionDialog: public Ui_TrackersAdditionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKERSADDITIONDIALOG_H
