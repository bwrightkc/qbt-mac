/********************************************************************************
** Form generated from reading UI file 'torrentcreatordlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TORRENTCREATORDLG_H
#define UI_TORRENTCREATORDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TorrentCreatorDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textInputPath;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *addFileButton;
    QPushButton *addFolderButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *pieceSizeLayout;
    QLabel *txtPieceSize;
    QComboBox *comboPieceSize;
    QPushButton *buttonCalcTotalPieces;
    QLabel *labelTotalPieces;
    QSpacerItem *spacer1;
    QCheckBox *checkPrivate;
    QCheckBox *checkStartSeeding;
    QCheckBox *checkIgnoreShareLimits;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTextEdit *trackersList;
    QLabel *urlSeeds_lbl;
    QTextEdit *URLSeedsList;
    QTextEdit *txtComment;
    QLabel *lbl_announce_url;
    QLabel *lbl_comment;
    QHBoxLayout *horizontalLayout_2;
    QLabel *progressLbl;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TorrentCreatorDlg)
    {
        if (TorrentCreatorDlg->objectName().isEmpty())
            TorrentCreatorDlg->setObjectName(QStringLiteral("TorrentCreatorDlg"));
        TorrentCreatorDlg->resize(592, 658);
        TorrentCreatorDlg->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(TorrentCreatorDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(TorrentCreatorDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        textInputPath = new QLineEdit(groupBox);
        textInputPath->setObjectName(QStringLiteral("textInputPath"));
        textInputPath->setAcceptDrops(false);

        horizontalLayout->addWidget(textInputPath);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        addFileButton = new QPushButton(groupBox);
        addFileButton->setObjectName(QStringLiteral("addFileButton"));

        horizontalLayout_3->addWidget(addFileButton);

        addFolderButton = new QPushButton(groupBox);
        addFolderButton->setObjectName(QStringLiteral("addFolderButton"));

        horizontalLayout_3->addWidget(addFolderButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TorrentCreatorDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pieceSizeLayout = new QHBoxLayout();
        pieceSizeLayout->setObjectName(QStringLiteral("pieceSizeLayout"));
        txtPieceSize = new QLabel(groupBox_2);
        txtPieceSize->setObjectName(QStringLiteral("txtPieceSize"));

        pieceSizeLayout->addWidget(txtPieceSize);

        comboPieceSize = new QComboBox(groupBox_2);
        comboPieceSize->setObjectName(QStringLiteral("comboPieceSize"));
        comboPieceSize->setMinimumContentsLength(7);

        pieceSizeLayout->addWidget(comboPieceSize);

        buttonCalcTotalPieces = new QPushButton(groupBox_2);
        buttonCalcTotalPieces->setObjectName(QStringLiteral("buttonCalcTotalPieces"));

        pieceSizeLayout->addWidget(buttonCalcTotalPieces);

        labelTotalPieces = new QLabel(groupBox_2);
        labelTotalPieces->setObjectName(QStringLiteral("labelTotalPieces"));
        labelTotalPieces->setText(QStringLiteral("0"));

        pieceSizeLayout->addWidget(labelTotalPieces);

        spacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pieceSizeLayout->addItem(spacer1);


        verticalLayout_2->addLayout(pieceSizeLayout);

        checkPrivate = new QCheckBox(groupBox_2);
        checkPrivate->setObjectName(QStringLiteral("checkPrivate"));

        verticalLayout_2->addWidget(checkPrivate);

        checkStartSeeding = new QCheckBox(groupBox_2);
        checkStartSeeding->setObjectName(QStringLiteral("checkStartSeeding"));
        checkStartSeeding->setChecked(true);

        verticalLayout_2->addWidget(checkStartSeeding);

        checkIgnoreShareLimits = new QCheckBox(groupBox_2);
        checkIgnoreShareLimits->setObjectName(QStringLiteral("checkIgnoreShareLimits"));

        verticalLayout_2->addWidget(checkIgnoreShareLimits);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(TorrentCreatorDlg);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        trackersList = new QTextEdit(groupBox_3);
        trackersList->setObjectName(QStringLiteral("trackersList"));
        trackersList->setAcceptRichText(false);

        gridLayout_2->addWidget(trackersList, 0, 1, 1, 1);

        urlSeeds_lbl = new QLabel(groupBox_3);
        urlSeeds_lbl->setObjectName(QStringLiteral("urlSeeds_lbl"));

        gridLayout_2->addWidget(urlSeeds_lbl, 1, 0, 1, 1);

        URLSeedsList = new QTextEdit(groupBox_3);
        URLSeedsList->setObjectName(QStringLiteral("URLSeedsList"));
        URLSeedsList->setAcceptRichText(false);

        gridLayout_2->addWidget(URLSeedsList, 1, 1, 1, 1);

        txtComment = new QTextEdit(groupBox_3);
        txtComment->setObjectName(QStringLiteral("txtComment"));
        txtComment->setAcceptRichText(false);

        gridLayout_2->addWidget(txtComment, 2, 1, 1, 1);

        lbl_announce_url = new QLabel(groupBox_3);
        lbl_announce_url->setObjectName(QStringLiteral("lbl_announce_url"));

        gridLayout_2->addWidget(lbl_announce_url, 0, 0, 1, 1);

        lbl_comment = new QLabel(groupBox_3);
        lbl_comment->setObjectName(QStringLiteral("lbl_comment"));

        gridLayout_2->addWidget(lbl_comment, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        progressLbl = new QLabel(TorrentCreatorDlg);
        progressLbl->setObjectName(QStringLiteral("progressLbl"));

        horizontalLayout_2->addWidget(progressLbl);

        progressBar = new QProgressBar(TorrentCreatorDlg);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(TorrentCreatorDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(textInputPath, addFileButton);
        QWidget::setTabOrder(addFileButton, addFolderButton);
        QWidget::setTabOrder(addFolderButton, comboPieceSize);
        QWidget::setTabOrder(comboPieceSize, checkPrivate);
        QWidget::setTabOrder(checkPrivate, checkStartSeeding);
        QWidget::setTabOrder(checkStartSeeding, checkIgnoreShareLimits);
        QWidget::setTabOrder(checkIgnoreShareLimits, trackersList);
        QWidget::setTabOrder(trackersList, URLSeedsList);
        QWidget::setTabOrder(URLSeedsList, txtComment);

        retranslateUi(TorrentCreatorDlg);
        QObject::connect(checkStartSeeding, SIGNAL(clicked(bool)), checkIgnoreShareLimits, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(rejected()), TorrentCreatorDlg, SLOT(reject()));

        comboPieceSize->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TorrentCreatorDlg);
    } // setupUi

    void retranslateUi(QDialog *TorrentCreatorDlg)
    {
        TorrentCreatorDlg->setWindowTitle(QApplication::translate("TorrentCreatorDlg", "Torrent Creator", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TorrentCreatorDlg", "Select file/folder to share", Q_NULLPTR));
        label->setText(QApplication::translate("TorrentCreatorDlg", "Path:", Q_NULLPTR));
        label_2->setText(QApplication::translate("TorrentCreatorDlg", "[Drag and drop area]", Q_NULLPTR));
        addFileButton->setText(QApplication::translate("TorrentCreatorDlg", "Select file", Q_NULLPTR));
        addFolderButton->setText(QApplication::translate("TorrentCreatorDlg", "Select folder", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TorrentCreatorDlg", "Settings", Q_NULLPTR));
        txtPieceSize->setText(QApplication::translate("TorrentCreatorDlg", "Piece size:", Q_NULLPTR));
        comboPieceSize->clear();
        comboPieceSize->insertItems(0, QStringList()
         << QApplication::translate("TorrentCreatorDlg", "Auto", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "16 KiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "32 KiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "64 KiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "128 KiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "256 KiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "512 KiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "1 MiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "2 MiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "4 MiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "8 MiB", Q_NULLPTR)
         << QApplication::translate("TorrentCreatorDlg", "16 MiB", Q_NULLPTR)
        );
        buttonCalcTotalPieces->setText(QApplication::translate("TorrentCreatorDlg", "Calculate number of pieces:", Q_NULLPTR));
        checkPrivate->setText(QApplication::translate("TorrentCreatorDlg", "Private torrent (Won't distribute on DHT network)", Q_NULLPTR));
        checkStartSeeding->setText(QApplication::translate("TorrentCreatorDlg", "Start seeding immediately", Q_NULLPTR));
        checkIgnoreShareLimits->setText(QApplication::translate("TorrentCreatorDlg", "Ignore share ratio limits for this torrent", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("TorrentCreatorDlg", "Fields", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        trackersList->setToolTip(QApplication::translate("TorrentCreatorDlg", "You can separate tracker tiers / groups with an empty line.", "A tracker tier is a group of trackers, consisting of a main tracker and its mirrors."));
#endif // QT_NO_TOOLTIP
        urlSeeds_lbl->setText(QApplication::translate("TorrentCreatorDlg", "Web seed URLs:", Q_NULLPTR));
        lbl_announce_url->setText(QApplication::translate("TorrentCreatorDlg", "Tracker URLs:", Q_NULLPTR));
        lbl_comment->setText(QApplication::translate("TorrentCreatorDlg", "Comments:", Q_NULLPTR));
        progressLbl->setText(QApplication::translate("TorrentCreatorDlg", "Progress:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TorrentCreatorDlg: public Ui_TorrentCreatorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TORRENTCREATORDLG_H
