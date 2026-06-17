#ifndef HUMANPLAYER_HPP
#define HUMANPLAYER_HPP

#include "Player.hpp"

class HumanPlayer : public Player
{
    public:
        HumanPlayer();
        HumanPlayer(std::string name, Chip chip);
        ~HumanPlayer();
    private:
};

#endif // HUMANPLAYER_HPP