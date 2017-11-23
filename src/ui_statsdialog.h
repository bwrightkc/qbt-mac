/********************************************************************************
** Form generated from reading UI file 'statsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSDIALOG_H
#define UI_STATSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StatsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupUser;
    QGridLayout *gridLayout_2;
    QLabel *labelPeersText;
    QLabel *labelGlobalRatioText;
    QLabel *labelPeers;
    QLabel *labelAlltimeDLText;
    QLabel *labelAlltimeUL;
    QLabel *labelAlltimeDL;
    QLabel *labelAlltimeULText;
    QLabel *labelGlobalRatio;
    QLabel *labelWasteText;
    QLabel *labelWaste;
    QGroupBox *groupCache;
    QGridLayout *gridLayout;
    QLabel *labelCacheHitsText;
    QLabel *labelCacheHits;
    QLabel *labelTotalBuf;
    QLabel *labelTotalBufText;
    QGroupBox *groupPerf;
    QGridLayout *gridLayout_3;
    QLabel *labelJobsTime;
    QLabel *labelQueuedJobs;
    QLabel *labelWriteStarve;
    QLabel *labelReadStarve;
    QLabel *labelQueuedJobsText;
    QLabel *labelWriteStarveText;
    QLabel *labelJobsTimeText;
    QLabel *labelReadStarveText;
    QLabel *labelQueuedBytesText;
    QLabel *labelQueuedBytes;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StatsDialog)
    {
        if (StatsDialog->objectName().isEmpty())
            StatsDialog->setObjectName(QStringLiteral("StatsDialog"));
        StatsDialog->resize(286, 401);
        verticalLayout = new QVBoxLayout(StatsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupUser = new QGroupBox(StatsDialog);
        groupUser->setObjectName(QStringLiteral("groupUser"));
        gridLayout_2 = new QGridLayout(groupUser);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelPeersText = new QLabel(groupUser);
        labelPeersText->setObjectName(QStringLiteral("labelPeersText"));

        gridLayout_2->addWidget(labelPeersText, 11, 0, 1, 1);

        labelGlobalRatioText = new QLabel(groupUser);
        labelGlobalRatioText->setObjectName(QStringLiteral("labelGlobalRatioText"));

        gridLayout_2->addWidget(labelGlobalRatioText, 3, 0, 1, 1);

        labelPeers = new QLabel(groupUser);
        labelPeers->setObjectName(QStringLiteral("labelPeers"));
        labelPeers->setText(QStringLiteral("TextLabel"));

        gridLayout_2->addWidget(labelPeers, 11, 1, 1, 1, Qt::AlignRight);

        labelAlltimeDLText = new QLabel(groupUser);
        labelAlltimeDLText->setObjectName(QStringLiteral("labelAlltimeDLText"));

        gridLayout_2->addWidget(labelAlltimeDLText, 0, 0, 1, 1);

        labelAlltimeUL = new QLabel(groupUser);
        labelAlltimeUL->setObjectName(QStringLiteral("labelAlltimeUL"));
        labelAlltimeUL->setText(QStringLiteral("TextLabel"));

        gridLayout_2->addWidget(labelAlltimeUL, 1, 1, 1, 1, Qt::AlignRight);

        labelAlltimeDL = new QLabel(groupUser);
        labelAlltimeDL->setObjectName(QStringLiteral("labelAlltimeDL"));
        labelAlltimeDL->setText(QStringLiteral("TextLabel"));

        gridLayout_2->addWidget(labelAlltimeDL, 0, 1, 1, 1, Qt::AlignRight);

        labelAlltimeULText = new QLabel(groupUser);
        labelAlltimeULText->setObjectName(QStringLiteral("labelAlltimeULText"));

        gridLayout_2->addWidget(labelAlltimeULText, 1, 0, 1, 1);

        labelGlobalRatio = new QLabel(groupUser);
        labelGlobalRatio->setObjectName(QStringLiteral("labelGlobalRatio"));
        labelGlobalRatio->setText(QStringLiteral("TextLabel"));

        gridLayout_2->addWidget(labelGlobalRatio, 3, 1, 1, 1, Qt::AlignRight);

        labelWasteText = new QLabel(groupUser);
        labelWasteText->setObjectName(QStringLiteral("labelWasteText"));

        gridLayout_2->addWidget(labelWasteText, 2, 0, 1, 1);

        labelWaste = new QLabel(groupUser);
        labelWaste->setObjectName(QStringLiteral("labelWaste"));
        labelWaste->setText(QStringLiteral("TextLabel"));

        gridLayout_2->addWidget(labelWaste, 2, 1, 1, 1, Qt::AlignRight);


        verticalLayout->addWidget(groupUser);

        groupCache = new QGroupBox(StatsDialog);
        groupCache->setObjectName(QStringLiteral("groupCache"));
        gridLayout = new QGridLayout(groupCache);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelCacheHitsText = new QLabel(groupCache);
        labelCacheHitsText->setObjectName(QStringLiteral("labelCacheHitsText"));

        gridLayout->addWidget(labelCacheHitsText, 1, 0, 1, 1);

        labelCacheHits = new QLabel(groupCache);
        labelCacheHits->setObjectName(QStringLiteral("labelCacheHits"));
        labelCacheHits->setText(QStringLiteral("TextLabel"));

        gridLayout->addWidget(labelCacheHits, 1, 1, 1, 1, Qt::AlignRight);

        labelTotalBuf = new QLabel(groupCache);
        labelTotalBuf->setObjectName(QStringLiteral("labelTotalBuf"));
        labelTotalBuf->setText(QStringLiteral("TextLabel"));

        gridLayout->addWidget(labelTotalBuf, 2, 1, 1, 1, Qt::AlignRight);

        labelTotalBufText = new QLabel(groupCache);
        labelTotalBufText->setObjectName(QStringLiteral("labelTotalBufText"));

        gridLayout->addWidget(labelTotalBufText, 2, 0, 1, 1);


        verticalLayout->addWidget(groupCache);

        groupPerf = new QGroupBox(StatsDialog);
        groupPerf->setObjectName(QStringLiteral("groupPerf"));
        gridLayout_3 = new QGridLayout(groupPerf);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelJobsTime = new QLabel(groupPerf);
        labelJobsTime->setObjectName(QStringLiteral("labelJobsTime"));
        labelJobsTime->setText(QStringLiteral("TextLabel"));

        gridLayout_3->addWidget(labelJobsTime, 3, 1, 1, 1, Qt::AlignRight);

        labelQueuedJobs = new QLabel(groupPerf);
        labelQueuedJobs->setObjectName(QStringLiteral("labelQueuedJobs"));
        labelQueuedJobs->setText(QStringLiteral("TextLabel"));

        gridLayout_3->addWidget(labelQueuedJobs, 2, 1, 1, 1, Qt::AlignRight);

        labelWriteStarve = new QLabel(groupPerf);
        labelWriteStarve->setObjectName(QStringLiteral("labelWriteStarve"));
        labelWriteStarve->setText(QStringLiteral("TextLabel"));

        gridLayout_3->addWidget(labelWriteStarve, 0, 1, 1, 1, Qt::AlignRight);

        labelReadStarve = new QLabel(groupPerf);
        labelReadStarve->setObjectName(QStringLiteral("labelReadStarve"));
        labelReadStarve->setText(QStringLiteral("TextLabel"));

        gridLayout_3->addWidget(labelReadStarve, 1, 1, 1, 1, Qt::AlignRight);

        labelQueuedJobsText = new QLabel(groupPerf);
        labelQueuedJobsText->setObjectName(QStringLiteral("labelQueuedJobsText"));

        gridLayout_3->addWidget(labelQueuedJobsText, 2, 0, 1, 1);

        labelWriteStarveText = new QLabel(groupPerf);
        labelWriteStarveText->setObjectName(QStringLiteral("labelWriteStarveText"));

        gridLayout_3->addWidget(labelWriteStarveText, 0, 0, 1, 1);

        labelJobsTimeText = new QLabel(groupPerf);
        labelJobsTimeText->setObjectName(QStringLiteral("labelJobsTimeText"));

        gridLayout_3->addWidget(labelJobsTimeText, 3, 0, 1, 1);

        labelReadStarveText = new QLabel(groupPerf);
        labelReadStarveText->setObjectName(QStringLiteral("labelReadStarveText"));

        gridLayout_3->addWidget(labelReadStarveText, 1, 0, 1, 1);

        labelQueuedBytesText = new QLabel(groupPerf);
        labelQueuedBytesText->setObjectName(QStringLiteral("labelQueuedBytesText"));

        gridLayout_3->addWidget(labelQueuedBytesText, 4, 0, 1, 1);

        labelQueuedBytes = new QLabel(groupPerf);
        labelQueuedBytes->setObjectName(QStringLiteral("labelQueuedBytes"));
        labelQueuedBytes->setText(QStringLiteral("TextLabel"));

        gridLayout_3->addWidget(labelQueuedBytes, 4, 1, 1, 1, Qt::AlignRight);


        verticalLayout->addWidget(groupPerf);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(StatsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StatsDialog);

        QMetaObject::connectSlotsByName(StatsDialog);
    } // setupUi

    void retranslateUi(QDialog *StatsDialog)
    {
        StatsDialog->setWindowTitle(QApplication::translate("StatsDialog", "Statistics", Q_NULLPTR));
        groupUser->setTitle(QApplication::translate("StatsDialog", "User statistics", Q_NULLPTR));
        labelPeersText->setText(QApplication::translate("StatsDialog", "Total peer connections:", Q_NULLPTR));
        labelGlobalRatioText->setText(QApplication::translate("StatsDialog", "Global ratio:", Q_NULLPTR));
        labelAlltimeDLText->setText(QApplication::translate("StatsDialog", "Alltime download:", Q_NULLPTR));
        labelAlltimeULText->setText(QApplication::translate("StatsDialog", "Alltime upload:", Q_NULLPTR));
        labelWasteText->setText(QApplication::translate("StatsDialog", "Total waste (this session):", Q_NULLPTR));
        groupCache->setTitle(QApplication::translate("StatsDialog", "Cache statistics", Q_NULLPTR));
        labelCacheHitsText->setText(QApplication::translate("StatsDialog", "Read cache hits:", Q_NULLPTR));
        labelTotalBufText->setText(QApplication::translate("StatsDialog", "Total buffers size:", Q_NULLPTR));
        groupPerf->setTitle(QApplication::translate("StatsDialog", "Performance statistics", Q_NULLPTR));
        labelQueuedJobsText->setText(QApplication::translate("StatsDialog", "Queued I/O jobs:", Q_NULLPTR));
        labelWriteStarveText->setText(QApplication::translate("StatsDialog", "Write cache overload:", Q_NULLPTR));
        labelJobsTimeText->setText(QApplication::translate("StatsDialog", "Average time in queue:", Q_NULLPTR));
        labelReadStarveText->setText(QApplication::translate("StatsDialog", "Read cache overload:", Q_NULLPTR));
        labelQueuedBytesText->setText(QApplication::translate("StatsDialog", "Total queued size:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatsDialog: public Ui_StatsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSDIALOG_H