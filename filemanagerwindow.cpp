#include "filemanagerwindow.h"
#include "ui_filemanagerwindow.h"
#include "mainwindow.h"

#include <QFileDialog>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

FileManagerWindow::FileManagerWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FileManagerWindow)
    , fm("paths.txt")
{
    ui->setupUi(this);
    QStringList paths = fm.loadPaths();
    for(const QString &path : paths)
        ui->directoryList->addItem(path);
}

FileManagerWindow::~FileManagerWindow()
{
    delete ui;
}

void FileManagerWindow::on_addPath_clicked()
{
    QString directory = QFileDialog::getExistingDirectory(this, "Choose folder");
    if(!directory.isEmpty()){
        ui->directoryList->addItem(directory);
        fm.savePath(directory);
    }
}


void FileManagerWindow::on_removePath_clicked()
{
    QListWidgetItem *path = ui->directoryList->currentItem();
    if (path) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(
            this,
            "Confirm deletion",
            "Are you sure you want to remove the selected path?",
            QMessageBox::Yes | QMessageBox::No
            );

        if (reply == QMessageBox::Yes) {
            delete path;
            QStringList newList;
            for(int i=0; i < ui->directoryList->count(); ++i){
                newList << ui->directoryList->item(i)->text();
            }
            fm.overWritePaths(newList);
        }
    }
}

