#include "Player.hpp"

Player::Player()
{
    std::cout << "Player created with default constructor. Select a chip." << std::endl;
}

Player::Player(std::string name, ChipColor chip)
{
    this->name = name;
    this->chip = chip;
    std::cout << "Player created with name: " << name << " and chip: " << static_cast<int>(chip) << std::endl;
}

Player::~Player()
{
    std::cout << "Player destroyed." << std::endl;
}

int Player::chooseSpace(Field field)
{
    // This function should contain logic to allow the player to choose a space on the field.
    // For now, it will just return a placeholder value.
    return 0; // Placeholder return value
}