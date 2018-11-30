/********************************************************************************
** Form generated from reading UI file 'searchjobwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHJOBWIDGET_H
#define UI_SEARCHJOBWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchJobWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *resultsLbl;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QComboBox *filterMode;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpinBox *minSeeds;
    QLabel *label_4;
    QSpinBox *maxSeeds;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *minSize;
    QComboBox *minSizeUnit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *maxSize;
    QComboBox *maxSizeUnit;
    QTreeView *resultsBrowser;

    void setupUi(QWidget *SearchJobWidget)
    {
        if (SearchJobWidget->objectName().isEmpty())
            SearchJobWidget->setObjectName(QStringLiteral("SearchJobWidget"));
        SearchJobWidget->resize(1216, 364);
        verticalLayout = new QVBoxLayout(SearchJobWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        resultsLbl = new QLabel(SearchJobWidget);
        resultsLbl->setObjectName(QStringLiteral("resultsLbl"));

        horizontalLayout->addWidget(resultsLbl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(SearchJobWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(label_5);

        filterMode = new QComboBox(SearchJobWidget);
        filterMode->setObjectName(QStringLiteral("filterMode"));

        horizontalLayout->addWidget(filterMode);

        horizontalSpacer_2 = new QSpacerItem(12, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(SearchJobWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        minSeeds = new QSpinBox(SearchJobWidget);
        minSeeds->setObjectName(QStringLiteral("minSeeds"));
        minSeeds->setMinimum(0);
        minSeeds->setMaximum(1000);
        minSeeds->setValue(0);

        horizontalLayout->addWidget(minSeeds);

        label_4 = new QLabel(SearchJobWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_4);

        maxSeeds = new QSpinBox(SearchJobWidget);
        maxSeeds->setObjectName(QStringLiteral("maxSeeds"));
        maxSeeds->setMinimum(-1);
        maxSeeds->setMaximum(1000);
        maxSeeds->setValue(-1);

        horizontalLayout->addWidget(maxSeeds);

        horizontalSpacer_3 = new QSpacerItem(12, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(SearchJobWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        minSize = new QDoubleSpinBox(SearchJobWidget);
        minSize->setObjectName(QStringLiteral("minSize"));
        minSize->setMinimum(0);
        minSize->setMaximum(1000);
        minSize->setValue(0);

        horizontalLayout_3->addWidget(minSize);

        minSizeUnit = new QComboBox(SearchJobWidget);
        minSizeUnit->setObjectName(QStringLiteral("minSizeUnit"));
        minSizeUnit->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(minSizeUnit);


        horizontalLayout->addLayout(horizontalLayout_3);

        label_2 = new QLabel(SearchJobWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        maxSize = new QDoubleSpinBox(SearchJobWidget);
        maxSize->setObjectName(QStringLiteral("maxSize"));
        maxSize->setMinimum(-1);
        maxSize->setMaximum(1000);
        maxSize->setValue(1000);

        horizontalLayout_4->addWidget(maxSize);

        maxSizeUnit = new QComboBox(SearchJobWidget);
        maxSizeUnit->setObjectName(QStringLiteral("maxSizeUnit"));
        maxSizeUnit->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_4->addWidget(maxSizeUnit);


        horizontalLayout->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        resultsBrowser = new QTreeView(SearchJobWidget);
        resultsBrowser->setObjectName(QStringLiteral("resultsBrowser"));

        verticalLayout->addWidget(resultsBrowser);

#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(filterMode);
#endif // QT_NO_SHORTCUT

        retranslateUi(SearchJobWidget);

        maxSizeUnit->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SearchJobWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchJobWidget)
    {
        SearchJobWidget->setWindowTitle(QApplication::translate("SearchJobWidget", "Form", nullptr));
        resultsLbl->setText(QApplication::translate("SearchJobWidget", "Results(xxx)", nullptr));
        label_5->setText(QApplication::translate("SearchJobWidget", "Search in:", nullptr));
#ifndef QT_NO_TOOLTIP
        filterMode->setToolTip(QApplication::translate("SearchJobWidget", "<html><head/><body><p>Some search engines search in torrent description and in torrent file names too. Whether such results will be shown in the list below is controlled by this mode.</p><p><span style=\" font-weight:600;\">Everywhere </span>disables filtering and shows everything returned by the search engines.</p><p><span style=\" font-weight:600;\">Torrent names only</span> shows only torrents whose names match the search query.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("SearchJobWidget", "<html><head/><body><p>Set minimal and maximal allowed number of seeders</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SearchJobWidget", "Seeds:", nullptr));
#ifndef QT_NO_TOOLTIP
        minSeeds->setToolTip(QApplication::translate("SearchJobWidget", "<html><head/><body><p>Minimal number of seeds</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SearchJobWidget", "to", nullptr));
#ifndef QT_NO_TOOLTIP
        maxSeeds->setToolTip(QApplication::translate("SearchJobWidget", "<html><head/><body><p>Maximal number of seeds</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        maxSeeds->setSpecialValueText(QApplication::translate("SearchJobWidget", "\342\210\236", nullptr));
        maxSeeds->setPrefix(QString());
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("SearchJobWidget", "<html><head/><body><p>Set minimal and maximal allowed size of a torrent</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("SearchJobWidget", "Size:", nullptr));
#ifndef QT_NO_TOOLTIP
        minSize->setToolTip(QApplication::translate("SearchJobWidget", "<html><head/><body><p>Minimal torrent size</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SearchJobWidget", "to", nullptr));
#ifndef QT_NO_TOOLTIP
        maxSize->setToolTip(QApplication::translate("SearchJobWidget", "<html><head/><body><p>Maximal torrent size</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        maxSize->setSpecialValueText(QApplication::translate("SearchJobWidget", "\342\210\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchJobWidget: public Ui_SearchJobWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHJOBWIDGET_H
