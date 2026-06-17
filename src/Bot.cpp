#include "Bot.hpp"

Bot::Bot()
{
    std::cout << "Bot created with default constructor. Select a chip and bot type." << std::endl;
}

Bot::Bot(std::string name, ChipColor chip, BotTyp botTyp) : Player(name, chip)
{
    this->botTyp = botTyp;
    std::cout << "Bot created with name: " << name << ", chip: " << static_cast<int>(chip) << " and bot type: " << static_cast<int>(botTyp) << std::endl;
}

Bot::~Bot()
{
    std::cout << "Bot destroyed." << std::endl;
}