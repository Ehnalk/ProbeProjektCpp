#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "ChipColor.hpp"
#include <iostream>
#include <string>
#include "Field.hpp"

class Player
{
    public:
        Player();
        Player(std::string name, ChipColor chipTyp);
        ~Player();
        std::string getName() const { return name; }
        ChipColor getChip() const { return chip; }
        int chooseSpace(Field field);
    protected:
        ChipColor chip;
        const std::string name;
};

#endif // PLAYER_HPP