#ifndef PLAYERQUEVE_H
#define PLAYERQUEVE_H

#include "filemanager.h"
#include "player.h"

#include <QFileInfoList>
#include <QCheckBox>
#include <QMediaPlayer>
#include <QListWidget>

class PlayerQueve
{

public:
    PlayerQueve(QLineEdit *lineEditsTab[], FileManager *fm, Player *player, QListWidget *queveList);

    void configPlayerQueve(QCheckBox *autoPlayCheckBox, QCheckBox *shufflePlayCheckBox, QCheckBox *loopQueveCheckBox, QCheckBox *loopFileCheckBox);
    void updatePlayerQueve(QString path, QString filePath);
    void updatePlayerQueve(QFileInfoList allFiles, QString filePath);
    void randomizeQueve();
    void changeQueveToShuffleOrToNormal();
    void playNextFile();
    void playPreviousFile();
    void playSelectedPositionInQueve(int index);
    QFileInfo getFileInfoOfSelectedItemInQueve(int index);

private:
    void handle();

    QString path = "";
    QListWidget *queveList;
    QFileInfoList currentQueve;
    QFileInfoList currentQueveCopy;
    int currentFileIndex;
    bool autoPlay = false;
    bool shufflePlay = false;
    bool loopQueve = false;
    bool loopFile = false;
    QLineEdit *lineEdits[7];
    FileManager *fm;
    Player *player;
};

#endif // PLAYERQUEVE_H
