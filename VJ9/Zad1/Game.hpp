#pragma once
#include "ComputerPlayer.hpp"
#include "HumanPlayer.hpp"

class Game
{
    private:
        int TargetPoints;
    public:
        Game(/* args */);
        ~Game();
        bool CheckInGame(int Points);
        bool GuessCheck(int entered, int hand);
};