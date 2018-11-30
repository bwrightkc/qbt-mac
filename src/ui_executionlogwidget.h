/********************************************************************************
** Form generated from reading UI file 'executionlogwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTIONLOGWIDGET_H
#define UI_EXECUTIONLOGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExecutionLogWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabConsole;
    QWidget *tabGeneral;
    QVBoxLayout *tabGeneralLayout;
    QWidget *tabBan;
    QVBoxLayout *tabBanLayout;

    void setupUi(QWidget *ExecutionLogWidget)
    {
        if (ExecutionLogWidget->objectName().isEmpty())
            ExecutionLogWidget->setObjectName(QStringLiteral("ExecutionLogWidget"));
        ExecutionLogWidget->resize(400, 300);
        ExecutionLogWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(ExecutionLogWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabConsole = new QTabWidget(ExecutionLogWidget);
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


        retranslateUi(ExecutionLogWidget);

        tabConsole->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExecutionLogWidget);
    } // setupUi

    void retranslateUi(QWidget *ExecutionLogWidget)
    {
        tabConsole->setTabText(tabConsole->indexOf(tabGeneral), QApplication::translate("ExecutionLogWidget", "General", nullptr));
        tabConsole->setTabText(tabConsole->indexOf(tabBan), QApplication::translate("ExecutionLogWidget", "Blocked IPs", nullptr));
        Q_UNUSED(ExecutionLogWidget);
    } // retranslateUi

};

namespace Ui {
    class ExecutionLogWidget: public Ui_ExecutionLogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTIONLOGWIDGET_H
