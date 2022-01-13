#include "Game.hpp"

Game::Game(/* args */)
{
    cout << "To how many points do you want to play? ";
    do
    {
        cin >> TargetPoints;
        if (TargetPoints < 1)
        {
            cout << "You cannot play to " << TargetPoints << ". Please enter from number 1 to reasonable number" << endl;;
        }
    } while (TargetPoints < 1);
}

Game::~Game()
{
}

bool Game::CheckInGame(int Points)
{
    if (Points == TargetPoints)
    {
        return true;
    }
    return false;
}

bool Game::GuessCheck(int entered, int hand)
{
    if (entered == hand)
    {
        cout << "Correct!" << endl;
        return true;
    }
    cout << "Wrong!" << endl;
    return false;
}