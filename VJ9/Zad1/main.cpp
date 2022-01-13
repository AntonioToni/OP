#include "Game.hpp"
#include "HumanPlayer.hpp"
#include "ComputerPlayer.hpp"

int main()
{
    int x; //amount of ComputerPlayers
    int ingame = 0;
    srand(time(NULL));
    Game game = Game();
    cout << "How many ComputerPlayers do you want to play against? ";
    do
    {
        cin >> x;
        if (x < 1)
        {
            cout << "Please input at least 1 computer player!" << endl;
        }
        
    } while (x < 1);
    int maxpointsguess = 3 + x * 3;
    ComputerPlayer CP[x];
    HumanPlayer HP = HumanPlayer();
    while (ingame == 0)
    {
        HP.generate();
        for (int i = 0; i < x; i++)
        {
            CP[i].generate();
        }
        for (int i = 0; i < x; i++)
        {
            if (game.GuessCheck(HP.guess(maxpointsguess), CP[i].hand))
            {
                HP.points++;
            }
            cout << "ComputerPlayer is now guessing..." << endl;
            if (game.GuessCheck(CP[i].guess(maxpointsguess), HP.hand))
            {
                CP[i].points++;
            }
        }
        for (int i = 0; i < x; i++)
        {
            if (game.CheckInGame(CP[i].points))
            {
                cout << "ComputerPlayer " << i << " won!" << endl;
                ingame = 1;
            }
        }
        if (game.CheckInGame(HP.points))
        {
            cout << "You win!" << endl;
            ingame = 1;
        }
        
    }
    system("pause");
}