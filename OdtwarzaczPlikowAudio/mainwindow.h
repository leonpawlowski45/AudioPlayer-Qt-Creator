#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "filemanagerwindow.h"
#include "filemanager.h"
#include "playerqueve.h"
#include "player.h"

#include <QMainWindow>
#include <QTreeWidgetItem>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    friend class PlayerQueve;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_libraryEditButton_clicked();
    void on_libraryTreeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_allFilesTreeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_pauseResumePushButton_clicked();
    void on_libraryTreeWidget_itemClicked(QTreeWidgetItem *item, int column);
    void on_allFilesTreeWidget_itemClicked(QTreeWidgetItem *item, int column);
    void on_nextFilePushButton_clicked();
    void on_previousFilePushButton_clicked();
    void on_queveListWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_queveListWidget_itemClicked(QListWidgetItem *item);

    void on_rewind10Sec_clicked();

    void on_fastForward10Sec_clicked();

private:
    void updateLibrary();
    void updateFileInfo(QString path);
    void updateQueve(QString path, QString filePath);
    void updateQueveAllFiles();

    FileManagerWindow *fmw = nullptr;
    FileManager *fm;
    PlayerQueve *playerQueve;
    Player *player;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
