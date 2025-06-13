#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "filemanagerwindow.h"
#include "filemanager.h"
#include "player.h"
#include "playerqueve.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLineEdit *lineEdits[5];
    lineEdits[0] = ui->fileNameLinEdit;
    lineEdits[1] = ui->fileDurationLineEdit;
    lineEdits[2] = ui->fileTypeLineEdit;
    lineEdits[3] = ui->fileSizeLineEdit;
    lineEdits[4] = ui->filePathLineEdit;

    fm = new FileManager("paths.txt");
    updateLibrary();

    player = new Player(ui->currentPlayingFileLineEdit, this);
    player->configPlayer(ui->audioProgressBarHorizontalSlider, ui->volumeVerticalSlider, ui->progressLabel, ui->durationLabel, ui->volumeLabel);

    playerQueve = new PlayerQueve(lineEdits, fm, player, ui->queveListWidget);
    playerQueve->configPlayerQueve(ui->autoPlayCheckBox, ui->shufflePlayCheckBox, ui->loopQueveCheckBox, ui->loopFileCheckBox);

    QFont font = ui->volumeLabel->font();
    QFontMetrics fontMetrics(font);
    ui->volumeLabel->setMinimumWidth(fontMetrics.horizontalAdvance(ui->volumeLabel->text()));
}

MainWindow::~MainWindow()
{
    delete fm;
    delete playerQueve;
    delete player;
    delete ui;
}

void MainWindow::updateLibrary()
{
    QStringList paths = fm->loadPaths();
    ui->libraryTreeWidget->clear();
    ui->allFilesTreeWidget->clear();
    fm->clearAllFiles();
    for(const QString &path : paths)
    {
        QTreeWidgetItem *libraryItem = new QTreeWidgetItem(ui->libraryTreeWidget);
        libraryItem->setText(0, path);
        fm->addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(path, libraryItem, ui->allFilesTreeWidget);
    }
}
void MainWindow::updateFileInfo(QString path)
{
    QLineEdit *lineEdits[5];
    lineEdits[0] = ui->fileNameLinEdit;
    lineEdits[1] = ui->fileDurationLineEdit;
    lineEdits[2] = ui->fileTypeLineEdit;
    lineEdits[3] = ui->fileSizeLineEdit;
    lineEdits[4] = ui->filePathLineEdit;
    fm->updateFileInfo(path, lineEdits);
}
void MainWindow::updateQueve(QString path, QString filePath)
{
    ui->queveListWidget->clear();
    QFileInfoList currentQueve = fm->getPathsToFilesInDirectory(path);
    for(int i=0;i<currentQueve.size();++i)
        ui->queveListWidget->addItem(QString::number(i+1) + ". " + currentQueve.at(i).fileName());
}

void MainWindow::on_libraryEditButton_clicked()
{
    if(!fmw)
        fmw = new FileManagerWindow(nullptr);
    fmw->exec();
    updateLibrary();
}
void MainWindow::on_libraryTreeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if(item->text(1)=="File"){
        playerQueve->updatePlayerQueve(item->text(2), item->text(2) + "/" + item->text(0));
        player->play(item->text(2) + "/" + item->text(0));
    }
}
void MainWindow::on_allFilesTreeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    playerQueve->updatePlayerQueve(fm->getPathsToAllFiles(), item->text(1) + "/" + item->text(0));
    player->play(item->text(1) + "/" + item->text(0));
}
void MainWindow::on_pauseResumePushButton_clicked()
{
    player->pauseResume();
}
void MainWindow::on_libraryTreeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    if(item->text(1) == "File")
    {
        updateFileInfo(item->text(2) + "/" + item->text(0));
    }
}
void MainWindow::on_allFilesTreeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    updateFileInfo(item->text(1) + "/" + item->text(0));
}
void MainWindow::on_nextFilePushButton_clicked()
{
    playerQueve->playNextFile();
}
void MainWindow::on_previousFilePushButton_clicked()
{
    playerQueve->playPreviousFile();
}
void MainWindow::on_queveListWidget_itemDoubleClicked(QListWidgetItem *item)
{
    playerQueve->playSelectedPositionInQueve(ui->queveListWidget->currentRow());
}
void MainWindow::on_queveListWidget_itemClicked(QListWidgetItem *item)
{
    updateFileInfo(playerQueve->getFileInfoOfSelectedItemInQueve(ui->queveListWidget->currentRow()).absoluteFilePath());
}
void MainWindow::on_rewind10Sec_clicked()
{
    player->changePositionRelativeToCurrent(-10000);
}

void MainWindow::on_fastForward10Sec_clicked()
{
    player->changePositionRelativeToCurrent(10000);
}

