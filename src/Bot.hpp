#ifndef BOT_HPP
#define BOT_HPP

#include "BotTyp.hpp"
#include "Player.hpp"

class Bot : public Player
{
    public:
        Bot();
        Bot(Chip chip, BotTyp botTyp);
        ~Bot();
    private:
        BotTyp botTyp;
};

#endif // BOT_HPP