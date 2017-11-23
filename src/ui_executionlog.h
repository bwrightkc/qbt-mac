/********************************************************************************
** Form generated from reading UI file 'executionlog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTIONLOG_H
#define UI_EXECUTIONLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExecutionLog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabConsole;
    QWidget *tabGeneral;
    QVBoxLayout *tabGeneralLayout;
    QWidget *tabBan;
    QVBoxLayout *tabBanLayout;

    void setupUi(QWidget *ExecutionLog)
    {
        if (ExecutionLog->objectName().isEmpty())
            ExecutionLog->setObjectName(QStringLiteral("ExecutionLog"));
        ExecutionLog->resize(400, 300);
        ExecutionLog->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(ExecutionLog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabConsole = new QTabWidget(ExecutionLog);
        tabConsole->setObjectName(QStringLiteral("tabConsole"));
        tabConsole->setTabPosition(QTabWidget::East);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QStringLiteral("tabGeneral"));
        tabGeneralLayout = new QVBoxLayout(tabGeneral);
        tabGeneralLayout->setObjectName(QStringLiteral("tabGeneralLayout"));
        tabConsole->addTab(tabGeneral, QString());
        tabBan = new QWidget();
        tabBan->setObjectName(QStringLiteral("tabBan"));
        tabBanLayout = new QVBoxLayout(tabBan);
        tabBanLayout->setObjectName(QStringLiteral("tabBanLayout"));
        tabConsole->addTab(tabBan, QString());

        verticalLayout->addWidget(tabConsole);


        retranslateUi(ExecutionLog);

        tabConsole->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExecutionLog);
    } // setupUi

    void retranslateUi(QWidget *ExecutionLog)
    {
        tabConsole->setTabText(tabConsole->indexOf(tabGeneral), QApplication::translate("ExecutionLog", "General", Q_NULLPTR));
        tabConsole->setTabText(tabConsole->indexOf(tabBan), QApplication::translate("ExecutionLog", "Blocked IPs", Q_NULLPTR));
        Q_UNUSED(ExecutionLog);
    } // retranslateUi

};

namespace Ui {
    class ExecutionLog: public Ui_ExecutionLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTIONLOG_H
