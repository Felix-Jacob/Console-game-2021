#ifndef GAME_H
#define GAME_H

#include "gameboard.h"
#include "player.h"

class Game
{
private:

public:
    enum SaveFormat // TODO: By-default binary speichern
    {
        Json, Binary
    };

    Player mPlayer;
    inline static GameBoard mGameBoard;
    Game();
    void Write(QJsonObject &json);
    void NewGame();
    void SaveGame();
    bool LoadGame();
    void InputHandler(QString input);
};

#endif // GAME_H
