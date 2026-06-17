#ifndef GAME_HPP
#define GAME_HPP

#include "Player.hpp"
#include "Field.hpp"

class Game {
public:
    Game();
    ~Game();
    void play();

private:
    Field field;
    Player* players[2];
    int currentPlayer;
};

#endif // GAME_HPP