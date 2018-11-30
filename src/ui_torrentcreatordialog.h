/********************************************************************************
** Form generated from reading UI file 'torrentcreatordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TORRENTCREATORDIALOG_H
#define UI_TORRENTCREATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TorrentCreatorDialog
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
    QCheckBox *checkOptimizeAlignment;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTextEdit *trackersList;
    QLabel *urlSeeds_lbl;
    QTextEdit *URLSeedsList;
    QTextEdit *txtComment;
    QLabel *lbl_announce_url;
    QLabel *lbl_comment;
    QLabel *labelSource;
    QLineEdit *lineEditSource;
    QHBoxLayout *horizontalLayout_2;
    QLabel *progressLbl;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TorrentCreatorDialog)
    {
        if (TorrentCreatorDialog->objectName().isEmpty())
            TorrentCreatorDialog->setObjectName(QStringLiteral("TorrentCreatorDialog"));
        TorrentCreatorDialog->resize(592, 658);
        TorrentCreatorDialog->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(TorrentCreatorDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(TorrentCreatorDialog);
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

        groupBox_2 = new QGroupBox(TorrentCreatorDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pieceSizeLayout = new QHBoxLayout();
        pieceSizeLayout->setObjectName(QStringLiteral("pieceSizeLayout"));
        txtPieceSize = new QLabel(groupBox_2);
        txtPieceSize->setObjectName(QStringLiteral("txtPieceSize"));

        pieceSizeLayout->addWidget(txtPieceSize);

        comboPieceSize = new QComboBox(groupBox_2);
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
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

        checkOptimizeAlignment = new QCheckBox(groupBox_2);
        checkOptimizeAlignment->setObjectName(QStringLiteral("checkOptimizeAlignment"));
        checkOptimizeAlignment->setChecked(true);

        verticalLayout_2->addWidget(checkOptimizeAlignment);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(TorrentCreatorDialog);
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

        labelSource = new QLabel(groupBox_3);
        labelSource->setObjectName(QStringLiteral("labelSource"));

        gridLayout_2->addWidget(labelSource, 3, 0, 1, 1);

        lineEditSource = new QLineEdit(groupBox_3);
        lineEditSource->setObjectName(QStringLiteral("lineEditSource"));

        gridLayout_2->addWidget(lineEditSource, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        progressLbl = new QLabel(TorrentCreatorDialog);
        progressLbl->setObjectName(QStringLiteral("progressLbl"));

        horizontalLayout_2->addWidget(progressLbl);

        progressBar = new QProgressBar(TorrentCreatorDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(TorrentCreatorDialog);
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
        QWidget::setTabOrder(checkIgnoreShareLimits, checkOptimizeAlignment);
        QWidget::setTabOrder(checkOptimizeAlignment, trackersList);
        QWidget::setTabOrder(trackersList, URLSeedsList);
        QWidget::setTabOrder(URLSeedsList, txtComment);

        retranslateUi(TorrentCreatorDialog);
        QObject::connect(checkStartSeeding, SIGNAL(clicked(bool)), checkIgnoreShareLimits, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(rejected()), TorrentCreatorDialog, SLOT(reject()));

        comboPieceSize->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TorrentCreatorDialog);
    } // setupUi

    void retranslateUi(QDialog *TorrentCreatorDialog)
    {
        TorrentCreatorDialog->setWindowTitle(QApplication::translate("TorrentCreatorDialog", "Torrent Creator", nullptr));
        groupBox->setTitle(QApplication::translate("TorrentCreatorDialog", "Select file/folder to share", nullptr));
        label->setText(QApplication::translate("TorrentCreatorDialog", "Path:", nullptr));
        label_2->setText(QApplication::translate("TorrentCreatorDialog", "[Drag and drop area]", nullptr));
        addFileButton->setText(QApplication::translate("TorrentCreatorDialog", "Select file", nullptr));
        addFolderButton->setText(QApplication::translate("TorrentCreatorDialog", "Select folder", nullptr));
        groupBox_2->setTitle(QApplication::translate("TorrentCreatorDialog", "Settings", nullptr));
        txtPieceSize->setText(QApplication::translate("TorrentCreatorDialog", "Piece size:", nullptr));
        comboPieceSize->setItemText(0, QApplication::translate("TorrentCreatorDialog", "Auto", nullptr));
        comboPieceSize->setItemText(1, QApplication::translate("TorrentCreatorDialog", "16 KiB", nullptr));
        comboPieceSize->setItemText(2, QApplication::translate("TorrentCreatorDialog", "32 KiB", nullptr));
        comboPieceSize->setItemText(3, QApplication::translate("TorrentCreatorDialog", "64 KiB", nullptr));
        comboPieceSize->setItemText(4, QApplication::translate("TorrentCreatorDialog", "128 KiB", nullptr));
        comboPieceSize->setItemText(5, QApplication::translate("TorrentCreatorDialog", "256 KiB", nullptr));
        comboPieceSize->setItemText(6, QApplication::translate("TorrentCreatorDialog", "512 KiB", nullptr));
        comboPieceSize->setItemText(7, QApplication::translate("TorrentCreatorDialog", "1 MiB", nullptr));
        comboPieceSize->setItemText(8, QApplication::translate("TorrentCreatorDialog", "2 MiB", nullptr));
        comboPieceSize->setItemText(9, QApplication::translate("TorrentCreatorDialog", "4 MiB", nullptr));
        comboPieceSize->setItemText(10, QApplication::translate("TorrentCreatorDialog", "8 MiB", nullptr));
        comboPieceSize->setItemText(11, QApplication::translate("TorrentCreatorDialog", "16 MiB", nullptr));
        comboPieceSize->setItemText(12, QApplication::translate("TorrentCreatorDialog", "32 MiB", nullptr));

        buttonCalcTotalPieces->setText(QApplication::translate("TorrentCreatorDialog", "Calculate number of pieces:", nullptr));
        checkPrivate->setText(QApplication::translate("TorrentCreatorDialog", "Private torrent (Won't distribute on DHT network)", nullptr));
        checkStartSeeding->setText(QApplication::translate("TorrentCreatorDialog", "Start seeding immediately", nullptr));
        checkIgnoreShareLimits->setText(QApplication::translate("TorrentCreatorDialog", "Ignore share ratio limits for this torrent", nullptr));
        checkOptimizeAlignment->setText(QApplication::translate("TorrentCreatorDialog", "Optimize alignment", nullptr));
        groupBox_3->setTitle(QApplication::translate("TorrentCreatorDialog", "Fields", nullptr));
#ifndef QT_NO_TOOLTIP
        trackersList->setToolTip(QApplication::translate("TorrentCreatorDialog", "You can separate tracker tiers / groups with an empty line.", "A tracker tier is a group of trackers, consisting of a main tracker and its mirrors."));
#endif // QT_NO_TOOLTIP
        urlSeeds_lbl->setText(QApplication::translate("TorrentCreatorDialog", "Web seed URLs:", nullptr));
        lbl_announce_url->setText(QApplication::translate("TorrentCreatorDialog", "Tracker URLs:", nullptr));
        lbl_comment->setText(QApplication::translate("TorrentCreatorDialog", "Comments:", nullptr));
        labelSource->setText(QApplication::translate("TorrentCreatorDialog", "Source:", nullptr));
        progressLbl->setText(QApplication::translate("TorrentCreatorDialog", "Progress:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TorrentCreatorDialog: public Ui_TorrentCreatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TORRENTCREATORDIALOG_H
