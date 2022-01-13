#include "HumanPlayer.hpp"

HumanPlayer::HumanPlayer()
{
}

HumanPlayer::~HumanPlayer()
{
}

void HumanPlayer::generate()
{
    cout << "Choose how many coins will you put in your hand (0-3): ";
    do
    {
        cin >> hand;
        if (hand > 3 || hand < 0)
        {
            cout << "Incorrect input please choose from 0 to 3" << endl;
        }
    } while (hand < 0 || hand > 3);
}

int HumanPlayer::guess(int maxpointsguess)
{
    int x;
    cout << "Guess total coins (0-" << maxpointsguess << "): ";
    do
    {
        cin >> x;
        if (x > maxpointsguess || x < 0)
        {
            cout << "Incorrect input please choose from 0 to " << maxpointsguess << endl;
        }
    } while (x < 0 || x > maxpointsguess);
    return x;
}