#ifndef GAME_HPP
#define GAME_HPP

#include "Player.hpp"
#include "Field.hpp"

class Game {
public:
    Game();
    ~Game();
    void start();
    void nextMove();
    bool isGameOver() const;

private:
    Field field;
    const Player* player1;
    const Player* player2;
    Player* currentPlayer;

};

#endif // GAME_HPP