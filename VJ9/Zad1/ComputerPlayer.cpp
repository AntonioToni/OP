#include "ComputerPlayer.hpp"

ComputerPlayer::ComputerPlayer()
{
}

ComputerPlayer::~ComputerPlayer()
{
}

void ComputerPlayer::generate()
{
    hand = rand() % 3;
}

int ComputerPlayer::guess(int maxpointsguess)
{
    int guess = rand() % maxpointsguess;
    return guess;
}