#include "HumanPlayer.hpp"

HumanPlayer::HumanPlayer()
{
    std::cout << "Human player created with default constructor. Select a chip." << std::endl;
}

HumanPlayer::HumanPlayer(std::string name, Chip chip) : Player(name, chip)
{
    std::cout << "Human player created with chip: " << chip.getColor() << std::endl;
}

HumanPlayer::~HumanPlayer()
{
    std::cout << "Human player destroyed." << std::endl;
}