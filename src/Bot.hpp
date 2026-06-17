#ifndef BOT_HPP
#define BOT_HPP

#include "BotTyp.hpp"
#include "Player.hpp"
#include <string>

class Bot : public Player
{
    public:
        Bot();
        Bot(std::string name,Chip chip, BotTyp botTyp);
        ~Bot();
    private:
        BotTyp botTyp;
};

#endif // BOT_HPP