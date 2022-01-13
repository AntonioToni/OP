#pragma once
#include "Player.hpp"

class ComputerPlayer: public Player 
{
    public:
        ComputerPlayer();
        ~ComputerPlayer();
        void generate();
        int guess(int maxpointsguess);
};