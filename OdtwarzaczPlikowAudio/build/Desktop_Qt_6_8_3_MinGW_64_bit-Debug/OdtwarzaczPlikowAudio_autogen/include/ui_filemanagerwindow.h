/********************************************************************************
** Form generated from reading UI file 'filemanagerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEMANAGERWINDOW_H
#define UI_FILEMANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileManagerWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *addPath;
    QPushButton *removePath;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QListWidget *directoryList;

    void setupUi(QWidget *FileManagerWindow)
    {
        if (FileManagerWindow->objectName().isEmpty())
            FileManagerWindow->setObjectName("FileManagerWindow");
        FileManagerWindow->resize(401, 386);
        FileManagerWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout = new QVBoxLayout(FileManagerWindow);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addPath = new QPushButton(FileManagerWindow);
        addPath->setObjectName("addPath");

        horizontalLayout->addWidget(addPath);

        removePath = new QPushButton(FileManagerWindow);
        removePath->setObjectName("removePath");

        horizontalLayout->addWidget(removePath);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(FileManagerWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 381, 334));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        directoryList = new QListWidget(scrollAreaWidgetContents);
        directoryList->setObjectName("directoryList");

        gridLayout->addWidget(directoryList, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(FileManagerWindow);

        QMetaObject::connectSlotsByName(FileManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *FileManagerWindow)
    {
        FileManagerWindow->setWindowTitle(QCoreApplication::translate("FileManagerWindow", "FileManager", nullptr));
        addPath->setText(QCoreApplication::translate("FileManagerWindow", "Add", nullptr));
        removePath->setText(QCoreApplication::translate("FileManagerWindow", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileManagerWindow: public Ui_FileManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEMANAGERWINDOW_H
