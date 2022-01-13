#pragma once
#include "Player.hpp"

class HumanPlayer: public Player 
{
    public:
        HumanPlayer(/* args */);
        ~HumanPlayer();
        void generate();
        int guess(int maxpointsguess);
};