#ifndef FILEMANAGERWINDOW_H
#define FILEMANAGERWINDOW_H

#include "filemanager.h"

#include <QDialog>

namespace Ui {
class FileManagerWindow;
}

class FileManagerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FileManagerWindow(QWidget *parent = nullptr);
    ~FileManagerWindow();

private slots:
    void on_addPath_clicked();

    void on_removePath_clicked();

private:
    FileManager fm;
    Ui::FileManagerWindow *ui;
};

#endif // FILEMANAGERWINDOW_H
