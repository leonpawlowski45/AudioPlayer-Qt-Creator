/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_13;
    QTabWidget *tabWidget;
    QWidget *Library;
    QVBoxLayout *verticalLayout_7;
    QPushButton *libraryEditButton;
    QTreeWidget *libraryTreeWidget;
    QWidget *allSongs;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *allFilesTreeWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *queveLabel;
    QScrollArea *queveScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QListWidget *queveListWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *fileInfoLabel;
    QScrollArea *fileInfoScrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QFormLayout *formLayout;
    QLabel *fileNameLabel;
    QLineEdit *fileNameLinEdit;
    QLabel *fileDurationLabel;
    QLineEdit *fileDurationLineEdit;
    QLabel *fileSizeLabel;
    QLineEdit *fileSizeLineEdit;
    QLabel *fileTypeLabel;
    QLineEdit *fileTypeLineEdit;
    QLabel *filePathLabel;
    QLineEdit *filePathLineEdit;
    QLabel *OptionsLabel;
    QScrollArea *OptionsScrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *autoPlayCheckBox;
    QCheckBox *shufflePlayCheckBox;
    QCheckBox *loopQueveCheckBox;
    QCheckBox *loopFileCheckBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *volumeLabel;
    QSlider *volumeVerticalSlider;
    QHBoxLayout *horizontalLayout_4;
    QLabel *currentPlayingFileLabel;
    QLineEdit *currentPlayingFileLineEdit;
    QSlider *audioProgressBarHorizontalSlider;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_17;
    QLabel *progressLabel;
    QLabel *durationLabel;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *rewind10Sec;
    QPushButton *previousFilePushButton;
    QPushButton *pauseResumePushButton;
    QPushButton *nextFilePushButton;
    QPushButton *fastForward10Sec;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(826, 578);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Library = new QWidget();
        Library->setObjectName("Library");
        Library->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        verticalLayout_7 = new QVBoxLayout(Library);
        verticalLayout_7->setObjectName("verticalLayout_7");
        libraryEditButton = new QPushButton(Library);
        libraryEditButton->setObjectName("libraryEditButton");
        sizePolicy.setHeightForWidth(libraryEditButton->sizePolicy().hasHeightForWidth());
        libraryEditButton->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(libraryEditButton);

        libraryTreeWidget = new QTreeWidget(Library);
        libraryTreeWidget->setObjectName("libraryTreeWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(libraryTreeWidget->sizePolicy().hasHeightForWidth());
        libraryTreeWidget->setSizePolicy(sizePolicy1);
        libraryTreeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        libraryTreeWidget->setSortingEnabled(false);
        libraryTreeWidget->setAnimated(true);

        verticalLayout_7->addWidget(libraryTreeWidget);

        tabWidget->addTab(Library, QString());
        allSongs = new QWidget();
        allSongs->setObjectName("allSongs");
        verticalLayout_4 = new QVBoxLayout(allSongs);
        verticalLayout_4->setObjectName("verticalLayout_4");
        allFilesTreeWidget = new QTreeWidget(allSongs);
        allFilesTreeWidget->setObjectName("allFilesTreeWidget");

        verticalLayout_4->addWidget(allFilesTreeWidget);

        tabWidget->addTab(allSongs, QString());

        horizontalLayout_13->addWidget(tabWidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        queveLabel = new QLabel(centralwidget);
        queveLabel->setObjectName("queveLabel");
        sizePolicy.setHeightForWidth(queveLabel->sizePolicy().hasHeightForWidth());
        queveLabel->setSizePolicy(sizePolicy);
        queveLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        queveLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(queveLabel);

        queveScrollArea = new QScrollArea(centralwidget);
        queveScrollArea->setObjectName("queveScrollArea");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(queveScrollArea->sizePolicy().hasHeightForWidth());
        queveScrollArea->setSizePolicy(sizePolicy2);
        queveScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 274, 376));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName("gridLayout_3");
        queveListWidget = new QListWidget(scrollAreaWidgetContents);
        queveListWidget->setObjectName("queveListWidget");
        sizePolicy1.setHeightForWidth(queveListWidget->sizePolicy().hasHeightForWidth());
        queveListWidget->setSizePolicy(sizePolicy1);
        queveListWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(queveListWidget, 0, 0, 1, 1);

        queveScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(queveScrollArea);


        horizontalLayout_13->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        fileInfoLabel = new QLabel(centralwidget);
        fileInfoLabel->setObjectName("fileInfoLabel");
        sizePolicy.setHeightForWidth(fileInfoLabel->sizePolicy().hasHeightForWidth());
        fileInfoLabel->setSizePolicy(sizePolicy);
        fileInfoLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        fileInfoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(fileInfoLabel);

        fileInfoScrollArea = new QScrollArea(centralwidget);
        fileInfoScrollArea->setObjectName("fileInfoScrollArea");
        sizePolicy2.setHeightForWidth(fileInfoScrollArea->sizePolicy().hasHeightForWidth());
        fileInfoScrollArea->setSizePolicy(sizePolicy2);
        fileInfoScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 155, 222));
        formLayout = new QFormLayout(scrollAreaWidgetContents_4);
        formLayout->setObjectName("formLayout");
        fileNameLabel = new QLabel(scrollAreaWidgetContents_4);
        fileNameLabel->setObjectName("fileNameLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy3);
        fileNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, fileNameLabel);

        fileNameLinEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileNameLinEdit->setObjectName("fileNameLinEdit");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(fileNameLinEdit->sizePolicy().hasHeightForWidth());
        fileNameLinEdit->setSizePolicy(sizePolicy4);
        fileNameLinEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, fileNameLinEdit);

        fileDurationLabel = new QLabel(scrollAreaWidgetContents_4);
        fileDurationLabel->setObjectName("fileDurationLabel");
        sizePolicy3.setHeightForWidth(fileDurationLabel->sizePolicy().hasHeightForWidth());
        fileDurationLabel->setSizePolicy(sizePolicy3);
        fileDurationLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, fileDurationLabel);

        fileDurationLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileDurationLineEdit->setObjectName("fileDurationLineEdit");
        sizePolicy4.setHeightForWidth(fileDurationLineEdit->sizePolicy().hasHeightForWidth());
        fileDurationLineEdit->setSizePolicy(sizePolicy4);
        fileDurationLineEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, fileDurationLineEdit);

        fileSizeLabel = new QLabel(scrollAreaWidgetContents_4);
        fileSizeLabel->setObjectName("fileSizeLabel");
        sizePolicy3.setHeightForWidth(fileSizeLabel->sizePolicy().hasHeightForWidth());
        fileSizeLabel->setSizePolicy(sizePolicy3);
        fileSizeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, fileSizeLabel);

        fileSizeLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileSizeLineEdit->setObjectName("fileSizeLineEdit");
        sizePolicy4.setHeightForWidth(fileSizeLineEdit->sizePolicy().hasHeightForWidth());
        fileSizeLineEdit->setSizePolicy(sizePolicy4);
        fileSizeLineEdit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, fileSizeLineEdit);

        fileTypeLabel = new QLabel(scrollAreaWidgetContents_4);
        fileTypeLabel->setObjectName("fileTypeLabel");
        sizePolicy3.setHeightForWidth(fileTypeLabel->sizePolicy().hasHeightForWidth());
        fileTypeLabel->setSizePolicy(sizePolicy3);
        fileTypeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, fileTypeLabel);

        fileTypeLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileTypeLineEdit->setObjectName("fileTypeLineEdit");
        sizePolicy4.setHeightForWidth(fileTypeLineEdit->sizePolicy().hasHeightForWidth());
        fileTypeLineEdit->setSizePolicy(sizePolicy4);
        fileTypeLineEdit->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, fileTypeLineEdit);

        filePathLabel = new QLabel(scrollAreaWidgetContents_4);
        filePathLabel->setObjectName("filePathLabel");
        sizePolicy3.setHeightForWidth(filePathLabel->sizePolicy().hasHeightForWidth());
        filePathLabel->setSizePolicy(sizePolicy3);
        filePathLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, filePathLabel);

        filePathLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        filePathLineEdit->setObjectName("filePathLineEdit");
        sizePolicy4.setHeightForWidth(filePathLineEdit->sizePolicy().hasHeightForWidth());
        filePathLineEdit->setSizePolicy(sizePolicy4);
        filePathLineEdit->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, filePathLineEdit);

        fileInfoScrollArea->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_5->addWidget(fileInfoScrollArea);

        OptionsLabel = new QLabel(centralwidget);
        OptionsLabel->setObjectName("OptionsLabel");
        sizePolicy.setHeightForWidth(OptionsLabel->sizePolicy().hasHeightForWidth());
        OptionsLabel->setSizePolicy(sizePolicy);
        OptionsLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        OptionsLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(OptionsLabel);

        OptionsScrollArea = new QScrollArea(centralwidget);
        OptionsScrollArea->setObjectName("OptionsScrollArea");
        sizePolicy2.setHeightForWidth(OptionsScrollArea->sizePolicy().hasHeightForWidth());
        OptionsScrollArea->setSizePolicy(sizePolicy2);
        OptionsScrollArea->setMaximumSize(QSize(16777215, 16777215));
        OptionsScrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        OptionsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 155, 124));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        autoPlayCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        autoPlayCheckBox->setObjectName("autoPlayCheckBox");
        sizePolicy.setHeightForWidth(autoPlayCheckBox->sizePolicy().hasHeightForWidth());
        autoPlayCheckBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(autoPlayCheckBox);

        shufflePlayCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        shufflePlayCheckBox->setObjectName("shufflePlayCheckBox");
        sizePolicy.setHeightForWidth(shufflePlayCheckBox->sizePolicy().hasHeightForWidth());
        shufflePlayCheckBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(shufflePlayCheckBox);

        loopQueveCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        loopQueveCheckBox->setObjectName("loopQueveCheckBox");
        sizePolicy.setHeightForWidth(loopQueveCheckBox->sizePolicy().hasHeightForWidth());
        loopQueveCheckBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(loopQueveCheckBox);

        loopFileCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        loopFileCheckBox->setObjectName("loopFileCheckBox");
        sizePolicy.setHeightForWidth(loopFileCheckBox->sizePolicy().hasHeightForWidth());
        loopFileCheckBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(loopFileCheckBox);

        OptionsScrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_5->addWidget(OptionsScrollArea);


        horizontalLayout_13->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        volumeLabel = new QLabel(centralwidget);
        volumeLabel->setObjectName("volumeLabel");
        sizePolicy.setHeightForWidth(volumeLabel->sizePolicy().hasHeightForWidth());
        volumeLabel->setSizePolicy(sizePolicy);
        volumeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(volumeLabel);

        volumeVerticalSlider = new QSlider(centralwidget);
        volumeVerticalSlider->setObjectName("volumeVerticalSlider");
        sizePolicy2.setHeightForWidth(volumeVerticalSlider->sizePolicy().hasHeightForWidth());
        volumeVerticalSlider->setSizePolicy(sizePolicy2);
        volumeVerticalSlider->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        volumeVerticalSlider->setMaximum(100);
        volumeVerticalSlider->setValue(50);
        volumeVerticalSlider->setSliderPosition(50);
        volumeVerticalSlider->setTracking(true);
        volumeVerticalSlider->setOrientation(Qt::Orientation::Vertical);

        verticalLayout_2->addWidget(volumeVerticalSlider);


        horizontalLayout_13->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        currentPlayingFileLabel = new QLabel(centralwidget);
        currentPlayingFileLabel->setObjectName("currentPlayingFileLabel");
        sizePolicy4.setHeightForWidth(currentPlayingFileLabel->sizePolicy().hasHeightForWidth());
        currentPlayingFileLabel->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(currentPlayingFileLabel);

        currentPlayingFileLineEdit = new QLineEdit(centralwidget);
        currentPlayingFileLineEdit->setObjectName("currentPlayingFileLineEdit");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(currentPlayingFileLineEdit->sizePolicy().hasHeightForWidth());
        currentPlayingFileLineEdit->setSizePolicy(sizePolicy5);
        currentPlayingFileLineEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(currentPlayingFileLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        audioProgressBarHorizontalSlider = new QSlider(centralwidget);
        audioProgressBarHorizontalSlider->setObjectName("audioProgressBarHorizontalSlider");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(audioProgressBarHorizontalSlider->sizePolicy().hasHeightForWidth());
        audioProgressBarHorizontalSlider->setSizePolicy(sizePolicy6);
        audioProgressBarHorizontalSlider->setMaximum(99);
        audioProgressBarHorizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(audioProgressBarHorizontalSlider);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        progressLabel = new QLabel(centralwidget);
        progressLabel->setObjectName("progressLabel");
        sizePolicy4.setHeightForWidth(progressLabel->sizePolicy().hasHeightForWidth());
        progressLabel->setSizePolicy(sizePolicy4);

        horizontalLayout_17->addWidget(progressLabel);

        durationLabel = new QLabel(centralwidget);
        durationLabel->setObjectName("durationLabel");
        sizePolicy4.setHeightForWidth(durationLabel->sizePolicy().hasHeightForWidth());
        durationLabel->setSizePolicy(sizePolicy4);

        horizontalLayout_17->addWidget(durationLabel);


        horizontalLayout_18->addLayout(horizontalLayout_17);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        rewind10Sec = new QPushButton(centralwidget);
        rewind10Sec->setObjectName("rewind10Sec");
        sizePolicy4.setHeightForWidth(rewind10Sec->sizePolicy().hasHeightForWidth());
        rewind10Sec->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(rewind10Sec);

        previousFilePushButton = new QPushButton(centralwidget);
        previousFilePushButton->setObjectName("previousFilePushButton");
        sizePolicy4.setHeightForWidth(previousFilePushButton->sizePolicy().hasHeightForWidth());
        previousFilePushButton->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(previousFilePushButton);

        pauseResumePushButton = new QPushButton(centralwidget);
        pauseResumePushButton->setObjectName("pauseResumePushButton");
        sizePolicy4.setHeightForWidth(pauseResumePushButton->sizePolicy().hasHeightForWidth());
        pauseResumePushButton->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(pauseResumePushButton);

        nextFilePushButton = new QPushButton(centralwidget);
        nextFilePushButton->setObjectName("nextFilePushButton");
        sizePolicy4.setHeightForWidth(nextFilePushButton->sizePolicy().hasHeightForWidth());
        nextFilePushButton->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(nextFilePushButton);

        fastForward10Sec = new QPushButton(centralwidget);
        fastForward10Sec->setObjectName("fastForward10Sec");
        sizePolicy4.setHeightForWidth(fastForward10Sec->sizePolicy().hasHeightForWidth());
        fastForward10Sec->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(fastForward10Sec);


        horizontalLayout->addLayout(horizontalLayout_19);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 826, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        libraryEditButton->setText(QCoreApplication::translate("MainWindow", "Edit Library", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = libraryTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "Path", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Library), QCoreApplication::translate("MainWindow", "Library", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = allFilesTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", "Path", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(allSongs), QCoreApplication::translate("MainWindow", "All Files", nullptr));
        queveLabel->setText(QCoreApplication::translate("MainWindow", "queue", nullptr));
        fileInfoLabel->setText(QCoreApplication::translate("MainWindow", "File Info", nullptr));
        fileNameLabel->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        fileDurationLabel->setText(QCoreApplication::translate("MainWindow", "Length:", nullptr));
        fileSizeLabel->setText(QCoreApplication::translate("MainWindow", "Size:", nullptr));
        fileTypeLabel->setText(QCoreApplication::translate("MainWindow", "File:", nullptr));
        filePathLabel->setText(QCoreApplication::translate("MainWindow", "Path:", nullptr));
        OptionsLabel->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        autoPlayCheckBox->setText(QCoreApplication::translate("MainWindow", "Auto Play", nullptr));
        shufflePlayCheckBox->setText(QCoreApplication::translate("MainWindow", "Shuffle Play", nullptr));
        loopQueveCheckBox->setText(QCoreApplication::translate("MainWindow", "Loop Queve", nullptr));
        loopFileCheckBox->setText(QCoreApplication::translate("MainWindow", "Loop File", nullptr));
        volumeLabel->setText(QCoreApplication::translate("MainWindow", "Volume 100%", nullptr));
        currentPlayingFileLabel->setText(QCoreApplication::translate("MainWindow", "Now Playing:", nullptr));
        progressLabel->setText(QCoreApplication::translate("MainWindow", "progressLabel", nullptr));
        durationLabel->setText(QCoreApplication::translate("MainWindow", "durationLabel", nullptr));
        rewind10Sec->setText(QCoreApplication::translate("MainWindow", "-10s", nullptr));
        previousFilePushButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pauseResumePushButton->setText(QCoreApplication::translate("MainWindow", "play/pause", nullptr));
        nextFilePushButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        fastForward10Sec->setText(QCoreApplication::translate("MainWindow", "+10s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
