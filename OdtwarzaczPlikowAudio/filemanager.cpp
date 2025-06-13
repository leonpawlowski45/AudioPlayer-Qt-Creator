#include "filemanager.h"

#include <QFile>
#include <QTextStream>
#include <QTreeWidgetItem>
#include <QDir>
#include <QFileInfoList>
#include <QFileInfo>
#include <QDirIterator>
#include <QMediaPlayer>
#include <QMediaMetaData>
#include <QEventLoop>
#include <QObject>
#include <QLineEdit>

FileManager::FileManager(QString filePath)
{
    this->filePath = filePath;
}

QStringList FileManager::loadPaths()
{
    QStringList paths;
    QFile file(filePath);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        while(!in.atEnd()){
            QString line = in.readLine();
            if(!line.isEmpty())
                paths << line;
        }
        file.close();
    }
    return paths;
}
void FileManager::savePath(const QString &path)
{
    QFile file(filePath);
    if(file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream out(&file);
        out << path <<'\n';
        file.close();
    }
}

 void FileManager::overWritePaths(const QStringList paths)
{
    QFile file(filePath);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        for(const QString &path : paths){
            out << path << '\n';
        }
        file.close();
    }
}

void FileManager::updateFileInfo(const QString &path, QLineEdit *lineEdits[])
{
    QFileInfo fileInfo(path);
    lineEdits[0]->setText(fileInfo.fileName());
    lineEdits[2]->setText(fileInfo.suffix());
    lineEdits[4]->setText(fileInfo.absoluteFilePath());

    qint64 size = fileInfo.size();
    if((size/1000)%100<10)
        lineEdits[3]->setText(QString::number(size/1000000) + ".0" + QString::number((size/1000)%100) + "MB");
    else
        lineEdits[3]->setText(QString::number(size/1000000) + "." + QString::number((size/1000)%100) + "MB");

    QMediaPlayer player1;
    player1.setSource(QUrl::fromLocalFile(path));
    player1.play();

    QEventLoop loop;
    QObject::connect(&player1, &QMediaPlayer::durationChanged, &loop, &QEventLoop::quit);
    loop.exec();

    qint64 duration=player1.duration();
    if((duration/1000)%60<10)
        lineEdits[1]->setText(QString::number(duration/60000) + ":0" + QString::number((duration/1000)%60));
    else
        lineEdits[1]->setText(QString::number(duration/60000) + ":" + QString::number((duration/1000)%60));

    player1.stop();

    for(int i = 0; i < 5; ++i)
    {
        lineEdits[i]->setCursorPosition(0);
        lineEdits[i]->setMinimumWidth(QFontMetrics(lineEdits[i]->font()).horizontalAdvance(lineEdits[i]->text()) + 30);
    }
}

void FileManager::addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(const QString path, QTreeWidgetItem *libraryItem, QTreeWidget *allFilesTreeWidget)
{
    QDir directory(path);
    QFileInfoList audioFiles = directory.entryInfoList(fileFilters, QDir::Files);
    QDirIterator directoryIterator(path, QDir::Dirs | QDir::NoDotAndDotDot);

    while(directoryIterator.hasNext())
    {
        directoryIterator.next();

        if(inDirectoryAreAudioFiles(path+"/"+directoryIterator.fileName(), fileFilters))
        {
            QTreeWidgetItem *folderItem = new QTreeWidgetItem(libraryItem);
            folderItem->setText(0, directoryIterator.fileName());
            folderItem->setText(1, "Folder");
            folderItem->setText(2, path + "/" + directoryIterator.fileName());
            addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(path+"/"+directoryIterator.fileName(), folderItem, allFilesTreeWidget);
        }
    }

    for(const QFileInfo &fileInfo : audioFiles)
    {
        allFiles.append(fileInfo);
        QTreeWidgetItem *fileItem = new QTreeWidgetItem(libraryItem);
        fileItem->setText(0, fileInfo.fileName());
        fileItem->setText(1, "File");
        fileItem->setText(2, path);
        QTreeWidgetItem *allSongsFileItem = new QTreeWidgetItem(allFilesTreeWidget);
        allSongsFileItem->setText(0, fileInfo.fileName());
        allSongsFileItem->setText(1, path);
    }
}

bool FileManager::inDirectoryAreAudioFiles(const QString path, const QStringList &fileFilters)
{
    QDir directory(path);
    QFileInfoList folderAudioFiles = directory.entryInfoList(fileFilters, QDir::Files);
    if(!folderAudioFiles.isEmpty())
        return true;
    QDirIterator directoryIterator(path, QDir::Dirs | QDir::NoDotAndDotDot);
    bool areThereAnyFiles = false;
    while(directoryIterator.hasNext())
    {
        directoryIterator.next();
        areThereAnyFiles = inDirectoryAreAudioFiles(path+"/"+directoryIterator.fileName(), fileFilters);
        if(areThereAnyFiles)
            return true;
    }
    return false;
}

QFileInfoList FileManager::getPathsToFilesInDirectory(const QString path)
{
    QDir directory(path);
    return directory.entryInfoList(fileFilters, QDir::Files);
}

QFileInfoList FileManager::getPathsToAllFiles()
{
    return allFiles;
}

void FileManager::clearAllFiles()
{
    allFiles.clear();
}
