#include "Player.hpp"

Player::Player()
{
    std::cout << "Player created with default constructor. Select a chip." << std::endl;
}

Player::Player(Chip chip)
{
    this->chip = chip;
    std::cout << "Player created with chip: " << chip.getColor() << std::endl;
}

Player::~Player()
{
    std::cout << "Player destroyed." << std::endl;
}