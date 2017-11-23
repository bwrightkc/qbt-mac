/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_authentication
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *login_logo;
    QLabel *login_title;
    QHBoxLayout *hboxLayout1;
    QLabel *lbl_tracker;
    QLabel *tracker_url;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *lbl_username;
    QLineEdit *lineUsername;
    QHBoxLayout *hboxLayout3;
    QLabel *lbl_passwd;
    QLineEdit *linePasswd;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *authentication)
    {
        if (authentication->objectName().isEmpty())
            authentication->setObjectName(QStringLiteral("authentication"));
        authentication->resize(311, 231);
        vboxLayout = new QVBoxLayout(authentication);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        login_logo = new QLabel(authentication);
        login_logo->setObjectName(QStringLiteral("login_logo"));
        login_logo->setMaximumSize(QSize(39, 39));

        hboxLayout->addWidget(login_logo);

        login_title = new QLabel(authentication);
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
        lbl_tracker = new QLabel(authentication);
        lbl_tracker->setObjectName(QStringLiteral("lbl_tracker"));
        lbl_tracker->setFont(font);

        hboxLayout1->addWidget(lbl_tracker);

        tracker_url = new QLabel(authentication);
        tracker_url->setObjectName(QStringLiteral("tracker_url"));
        tracker_url->setMinimumSize(QSize(220, 0));

        hboxLayout1->addWidget(tracker_url);


        vboxLayout->addLayout(hboxLayout1);

        groupBox = new QGroupBox(authentication);
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

        buttonBox = new QDialogButtonBox(authentication);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lbl_username->setBuddy(lineUsername);
        lbl_passwd->setBuddy(linePasswd);
#endif // QT_NO_SHORTCUT

        retranslateUi(authentication);
        QObject::connect(lineUsername, SIGNAL(returnPressed()), linePasswd, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(authentication);
    } // setupUi

    void retranslateUi(QDialog *authentication)
    {
        authentication->setWindowTitle(QApplication::translate("authentication", "Tracker authentication", Q_NULLPTR));
        login_logo->setText(QString());
        login_title->setText(QApplication::translate("authentication", "Tracker authentication", Q_NULLPTR));
        lbl_tracker->setText(QApplication::translate("authentication", "Tracker:", Q_NULLPTR));
        tracker_url->setText(QString());
        groupBox->setTitle(QApplication::translate("authentication", "Login", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("authentication", "Username:", Q_NULLPTR));
        lbl_passwd->setText(QApplication::translate("authentication", "Password:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class authentication: public Ui_authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
