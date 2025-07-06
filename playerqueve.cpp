#include "playerqueve.h"
#include <QObject>
#include <QCheckBox>

PlayerQueve::PlayerQueve(QLineEdit *lineEditsTab[], FileManager *fm, Player *player, QListWidget *queveList)
{
    for(int i=0;i<7;++i)
        lineEdits[i] = lineEditsTab[i];
    this->fm = fm;
    this->player = player;
    this->queveList = queveList;
}

void PlayerQueve::configPlayerQueve(QCheckBox *autoPlayCheckBox, QCheckBox *shufflePlayCheckBox, QCheckBox *loopQueveCheckBox, QCheckBox *loopFileCheckBox)
{
    QObject::connect(autoPlayCheckBox, &QCheckBox::checkStateChanged, [this](Qt::CheckState state){
        autoPlay = (state == Qt::Checked);
    });
    QObject::connect(shufflePlayCheckBox, &QCheckBox::checkStateChanged, [this](Qt::CheckState state){
        shufflePlay = (state == Qt::Checked);
        if(!currentQueve.isEmpty())
            changeQueveToShuffleOrToNormal();
    });
    QObject::connect(loopQueveCheckBox, &QCheckBox::checkStateChanged, [this](Qt::CheckState state){
        loopQueve = (state == Qt::Checked);
    });
    QObject::connect(loopFileCheckBox, &QCheckBox::checkStateChanged, [this](Qt::CheckState state){
        loopFile = (state == Qt::Checked);
    });
    QObject::connect(player->mediaPlayer, &QMediaPlayer::mediaStatusChanged, [this](QMediaPlayer::MediaStatus status){
        if(status == QMediaPlayer::EndOfMedia)
            handle();
    });
}

void PlayerQueve::updatePlayerQueve(QString path, QString filePath)
{
    currentQueve = fm->getPathsToFilesInDirectory(path);
    if(!currentQueve.isEmpty())
    {
        currentFileIndex = -1;
        for(int i = 0; i < currentQueve.size(); ++i)
        {
            if(currentQueve.at(i).filePath() == filePath)
            {
                currentFileIndex = i;
                break;
            }
        }

        if(shufflePlay)
        {
            randomizeQueve();
        }

        queveList->clear();
        for(int i = 0; i < currentQueve.size(); ++i)
            queveList->addItem(QString::number(i+1) + ". " + currentQueve.at(i).fileName());

        queveList->item(currentFileIndex)->setForeground(QBrush(QColor(0,204,255)));
    }
}

void PlayerQueve::updatePlayerQueve(QFileInfoList allFiles, QString filePath)
{
    currentQueve = allFiles;
    if(!currentQueve.isEmpty())
    {
        currentFileIndex = -1;
        for(int i = 0; i < currentQueve.size(); ++i)
        {
            if(currentQueve.at(i).filePath() == filePath)
            {
                currentFileIndex = i;
                break;
            }
        }

        if(shufflePlay)
        {
            randomizeQueve();
        }

        queveList->clear();
        for(int i = 0; i < currentQueve.size(); ++i)
            queveList->addItem(QString::number(i+1) + ". " + currentQueve.at(i).fileName());

        queveList->item(currentFileIndex)->setForeground(QBrush(QColor(0,204,255)));
    }
}

void PlayerQueve::randomizeQueve()
{
    currentQueveCopy = currentQueve;
    currentQueve[0] = currentQueveCopy[currentFileIndex];

    int tabLength = currentQueve.size();
    int alreadyUsedIndexes[tabLength];
    alreadyUsedIndexes[0] = currentFileIndex;
    int currentTabIndex = 1;

    srand(time(NULL));

    while(currentTabIndex < tabLength)
    {
        bool newIndex = true;
        int randomIndex = rand()%tabLength;

        for(int i=0;i<currentTabIndex;++i)
        {
            if(randomIndex == alreadyUsedIndexes[i])
                newIndex = false;
        }

        if(newIndex)
        {
            alreadyUsedIndexes[currentTabIndex] = randomIndex;
            currentQueve[currentTabIndex] = currentQueveCopy[randomIndex];
            ++currentTabIndex;
        }
    }
    currentFileIndex = 0;
}

void PlayerQueve::changeQueveToShuffleOrToNormal()
{
    if(shufflePlay)
    {
        queveList->item(currentFileIndex)->setForeground(QBrush(Qt::white));
        randomizeQueve();
    }
    else
    {
        queveList->item(currentFileIndex)->setForeground(QBrush(Qt::white));
        for(int i = 0; i < currentQueve.size(); ++i)
        {
            if(currentQueveCopy.at(i) == currentQueve.at(currentFileIndex))
            {
                currentFileIndex = i;
                break;
            }
        }
        currentQueve = currentQueveCopy;
    }
    queveList->clear();
    for(int i = 0; i < currentQueve.size(); ++i)
        queveList->addItem(QString::number(i+1) + ". " + currentQueve.at(i).fileName());

    queveList->item(currentFileIndex)->setForeground(QBrush(QColor(0,204,255)));
}

void PlayerQueve::handle()
{
    queveList->item(currentFileIndex)->setForeground(QBrush(Qt::white));

    if(loopFile)
    {
        player->mediaPlayer->setPosition(0);
        player->mediaPlayer->play();
    }
    else if(autoPlay)
    {

        if(loopQueve)
        {
            if(currentFileIndex == currentQueve.size() - 1)
                currentFileIndex = 0;
            else
                ++currentFileIndex;
            fm->updateFileInfo(currentQueve.at(currentFileIndex).filePath(), lineEdits);
            player->play(currentQueve.at(currentFileIndex).filePath());
        }
        else if(currentFileIndex != currentQueve.size() - 1)
        {
            ++currentFileIndex;
            fm->updateFileInfo(currentQueve.at(currentFileIndex).filePath(), lineEdits);
            player->play(currentQueve.at(currentFileIndex).filePath());
        }
    }

    queveList->item(currentFileIndex)->setForeground(QBrush(QColor(0,204,255)));
}

void PlayerQueve::playNextFile()
{
    if(!currentQueve.isEmpty())
    {
        queveList->item(currentFileIndex)->setForeground(QBrush(Qt::white));

        if(loopFile)
        {
            player->mediaPlayer->setPosition(0);
            player->mediaPlayer->play();
        }
        else if(currentFileIndex != currentQueve.size() - 1)
        {
            ++currentFileIndex;
            fm->updateFileInfo(currentQueve.at(currentFileIndex).filePath(), lineEdits);
            player->play(currentQueve.at(currentFileIndex).filePath());
        }
        else if(currentFileIndex == currentQueve.size() - 1 && loopQueve)
        {
            currentFileIndex = 0;
            fm->updateFileInfo(currentQueve.at(currentFileIndex).filePath(), lineEdits);
            player->play(currentQueve.at(currentFileIndex).filePath());
        }

        queveList->item(currentFileIndex)->setForeground(QBrush(QColor(0,204,255)));
    }
}

void PlayerQueve::playPreviousFile()
{
    if(!currentQueve.isEmpty())
    {
        queveList->item(currentFileIndex)->setForeground(QBrush(Qt::white));

        if(loopFile)
        {
            player->mediaPlayer->setPosition(0);
            player->mediaPlayer->play();
        }
        else if(currentFileIndex > 0)
        {
            --currentFileIndex;
            fm->updateFileInfo(currentQueve.at(currentFileIndex).filePath(), lineEdits);
            player->play(currentQueve.at(currentFileIndex).filePath());
        }
        else if(currentFileIndex == 0 && loopQueve)
        {
            currentFileIndex = currentQueve.size() -1;
            fm->updateFileInfo(currentQueve.at(currentFileIndex).filePath(), lineEdits);
            player->play(currentQueve.at(currentFileIndex).filePath());
        }

        queveList->item(currentFileIndex)->setForeground(QBrush(QColor(0,204,255)));
    }
}

void PlayerQueve::playSelectedPositionInQueve(int index)
{
    if(index < currentQueve.size() && index >= 0)
    {
        queveList->item(currentFileIndex)->setForeground(QBrush(Qt::white));

        currentFileIndex = index;
        fm->updateFileInfo(currentQueve.at(currentFileIndex).filePath(), lineEdits);
        player->play(currentQueve.at(currentFileIndex).filePath());

        queveList->item(currentFileIndex)->setForeground(QBrush(QColor(0,204,255)));
    }
}

QFileInfo PlayerQueve::getFileInfoOfSelectedItemInQueve(int index)
{
    return currentQueve.at(index);
}
