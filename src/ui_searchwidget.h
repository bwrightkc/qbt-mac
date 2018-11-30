/********************************************************************************
** Form generated from reading UI file 'searchwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *searchBarLayout;
    LineEdit *lineEditSearchPattern;
    QComboBox *comboCategory;
    QComboBox *selectPlugin;
    QPushButton *searchButton;
    QStackedWidget *stackedPages;
    QWidget *emptyPage;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *searchPage;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QHBoxLayout *layout2;
    QPushButton *downloadButton;
    QPushButton *goToDescBtn;
    QPushButton *copyURLBtn;
    QSpacerItem *spacer2;
    QPushButton *pluginsButton;

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QStringLiteral("SearchWidget"));
        SearchWidget->resize(843, 669);
        verticalLayout_3 = new QVBoxLayout(SearchWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        searchBarLayout = new QHBoxLayout();
        searchBarLayout->setObjectName(QStringLiteral("searchBarLayout"));
        lineEditSearchPattern = new LineEdit(SearchWidget);
        lineEditSearchPattern->setObjectName(QStringLiteral("lineEditSearchPattern"));

        searchBarLayout->addWidget(lineEditSearchPattern);

        comboCategory = new QComboBox(SearchWidget);
        comboCategory->setObjectName(QStringLiteral("comboCategory"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboCategory->sizePolicy().hasHeightForWidth());
        comboCategory->setSizePolicy(sizePolicy);

        searchBarLayout->addWidget(comboCategory);

        selectPlugin = new QComboBox(SearchWidget);
        selectPlugin->setObjectName(QStringLiteral("selectPlugin"));
        sizePolicy.setHeightForWidth(selectPlugin->sizePolicy().hasHeightForWidth());
        selectPlugin->setSizePolicy(sizePolicy);

        searchBarLayout->addWidget(selectPlugin);

        searchButton = new QPushButton(SearchWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy1);

        searchBarLayout->addWidget(searchButton);


        verticalLayout_3->addLayout(searchBarLayout);

        stackedPages = new QStackedWidget(SearchWidget);
        stackedPages->setObjectName(QStringLiteral("stackedPages"));
        emptyPage = new QWidget();
        emptyPage->setObjectName(QStringLiteral("emptyPage"));
        verticalLayout = new QVBoxLayout(emptyPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(emptyPage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        stackedPages->addWidget(emptyPage);
        searchPage = new QWidget();
        searchPage->setObjectName(QStringLiteral("searchPage"));
        verticalLayout_2 = new QVBoxLayout(searchPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(searchPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(true);

        verticalLayout_2->addWidget(tabWidget);

        stackedPages->addWidget(searchPage);

        verticalLayout_3->addWidget(stackedPages);

        layout2 = new QHBoxLayout();
        layout2->setObjectName(QStringLiteral("layout2"));
        downloadButton = new QPushButton(SearchWidget);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setEnabled(false);

        layout2->addWidget(downloadButton);

        goToDescBtn = new QPushButton(SearchWidget);
        goToDescBtn->setObjectName(QStringLiteral("goToDescBtn"));
        goToDescBtn->setEnabled(false);

        layout2->addWidget(goToDescBtn);

        copyURLBtn = new QPushButton(SearchWidget);
        copyURLBtn->setObjectName(QStringLiteral("copyURLBtn"));
        copyURLBtn->setEnabled(false);

        layout2->addWidget(copyURLBtn);

        spacer2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout2->addItem(spacer2);

        pluginsButton = new QPushButton(SearchWidget);
        pluginsButton->setObjectName(QStringLiteral("pluginsButton"));

        layout2->addWidget(pluginsButton);


        verticalLayout_3->addLayout(layout2);


        retranslateUi(SearchWidget);

        stackedPages->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        SearchWidget->setWindowTitle(QApplication::translate("SearchWidget", "Search", nullptr));
        searchButton->setText(QApplication::translate("SearchWidget", "Search", nullptr));
        label->setText(QApplication::translate("SearchWidget", "There aren't any search plugins installed.\n"
"Click the \"Search plugins...\" button at the bottom right of the window to install some.", nullptr));
        downloadButton->setText(QApplication::translate("SearchWidget", "Download", nullptr));
        goToDescBtn->setText(QApplication::translate("SearchWidget", "Go to description page", nullptr));
        copyURLBtn->setText(QApplication::translate("SearchWidget", "Copy description page URL", nullptr));
        pluginsButton->setText(QApplication::translate("SearchWidget", "Search plugins...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
