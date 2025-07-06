#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QString>
#include <QStringList>
#include <QTreeWidgetItem>
#include <QFileInfo>

class FileManager
{
public:
    explicit FileManager(QString filePath);

    QStringList loadPaths();
    void savePath(const QString &path);
    void overWritePaths(const QStringList paths);
    void updateFileInfo(const QString &path, QLineEdit *lineEdits[]);
    void addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(const QString path, QTreeWidgetItem *item, QTreeWidget *allFilesTreeWidget);
    bool inDirectoryAreAudioFiles(const QString path, const QStringList &fileFilters);
    QFileInfoList getPathsToFilesInDirectory(const QString path);
    QFileInfoList getPathsToAllFiles();
    void clearAllFiles();

private:
    QString filePath;
    QStringList fileFilters = {"*.mp3", "*.wav", "*.flac"};
    QFileInfoList allFiles;
};

#endif // FILEMANAGER_H
