#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Chip.hpp"
#include <iostream>

class Player
{
    public:
        Player();
        Player(Chip chip);
        ~Player();
    private:
        Chip chip;
};

#endif // PLAYER_HPP