#ifndef HUMANPLAYER_HPP
#define HUMANPLAYER_HPP

#include "Player.hpp"

class HumanPlayer : public Player
{
    public:
        HumanPlayer();
        HumanPlayer(Chip chip);
        ~HumanPlayer();
};

#endif // HUMANPLAYER_HPP