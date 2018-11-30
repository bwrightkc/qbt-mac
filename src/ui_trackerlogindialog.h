/********************************************************************************
** Form generated from reading UI file 'trackerlogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKERLOGINDIALOG_H
#define UI_TRACKERLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrackerLoginDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *labelLoginLogo;
    QLabel *login_title;
    QHBoxLayout *hboxLayout1;
    QLabel *lbl_tracker;
    QLabel *labelTrackerURL;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *lbl_username;
    QLineEdit *lineUsername;
    QHBoxLayout *hboxLayout3;
    QLabel *lbl_passwd;
    QLineEdit *linePasswd;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TrackerLoginDialog)
    {
        if (TrackerLoginDialog->objectName().isEmpty())
            TrackerLoginDialog->setObjectName(QStringLiteral("TrackerLoginDialog"));
        TrackerLoginDialog->resize(311, 231);
        vboxLayout = new QVBoxLayout(TrackerLoginDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        labelLoginLogo = new QLabel(TrackerLoginDialog);
        labelLoginLogo->setObjectName(QStringLiteral("labelLoginLogo"));
        labelLoginLogo->setMaximumSize(QSize(39, 39));

        hboxLayout->addWidget(labelLoginLogo);

        login_title = new QLabel(TrackerLoginDialog);
        login_title->setObjectName(QStringLiteral("login_title"));
        login_title->setMaximumSize(QSize(16777215, 39));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        login_title->setFont(font);

        hboxLayout->addWidget(login_title);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        lbl_tracker = new QLabel(TrackerLoginDialog);
        lbl_tracker->setObjectName(QStringLiteral("lbl_tracker"));
        lbl_tracker->setFont(font);

        hboxLayout1->addWidget(lbl_tracker);

        labelTrackerURL = new QLabel(TrackerLoginDialog);
        labelTrackerURL->setObjectName(QStringLiteral("labelTrackerURL"));
        labelTrackerURL->setMinimumSize(QSize(220, 0));

        hboxLayout1->addWidget(labelTrackerURL);


        vboxLayout->addLayout(hboxLayout1);

        groupBox = new QGroupBox(TrackerLoginDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));

        hboxLayout2->addWidget(lbl_username);

        lineUsername = new QLineEdit(groupBox);
        lineUsername->setObjectName(QStringLiteral("lineUsername"));

        hboxLayout2->addWidget(lineUsername);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        lbl_passwd = new QLabel(groupBox);
        lbl_passwd->setObjectName(QStringLiteral("lbl_passwd"));
        lbl_passwd->setMinimumSize(QSize(68, 0));

        hboxLayout3->addWidget(lbl_passwd);

        linePasswd = new QLineEdit(groupBox);
        linePasswd->setObjectName(QStringLiteral("linePasswd"));
        linePasswd->setEchoMode(QLineEdit::Password);

        hboxLayout3->addWidget(linePasswd);


        vboxLayout1->addLayout(hboxLayout3);


        vboxLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(TrackerLoginDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lbl_username->setBuddy(lineUsername);
        lbl_passwd->setBuddy(linePasswd);
#endif // QT_NO_SHORTCUT

        retranslateUi(TrackerLoginDialog);
        QObject::connect(lineUsername, SIGNAL(returnPressed()), linePasswd, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(TrackerLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *TrackerLoginDialog)
    {
        TrackerLoginDialog->setWindowTitle(QApplication::translate("TrackerLoginDialog", "Tracker authentication", nullptr));
        labelLoginLogo->setText(QString());
        login_title->setText(QApplication::translate("TrackerLoginDialog", "Tracker authentication", nullptr));
        lbl_tracker->setText(QApplication::translate("TrackerLoginDialog", "Tracker:", nullptr));
        labelTrackerURL->setText(QString());
        groupBox->setTitle(QApplication::translate("TrackerLoginDialog", "Login", nullptr));
        lbl_username->setText(QApplication::translate("TrackerLoginDialog", "Username:", nullptr));
        lbl_passwd->setText(QApplication::translate("TrackerLoginDialog", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackerLoginDialog: public Ui_TrackerLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKERLOGINDIALOG_H
