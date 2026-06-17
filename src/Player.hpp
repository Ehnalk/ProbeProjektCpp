#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Chip.hpp"
#include <iostream>
#include <string>
#include "Field.hpp"

class Player
{
    public:
        Player();
        Player(std::string name, Chip chip);
        ~Player();
        std::string getName() const { return name; }
        Chip getChip() const { return chip; }
        int chooseSpace(Field field);
    protected:
        Chip chip;
        const std::string name;
};

#endif // PLAYER_HPP