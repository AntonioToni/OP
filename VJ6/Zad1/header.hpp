#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<fstream>
#include<time.h>
#include<vector>
#include<string>

using namespace std;

class HangmanModel
{ 
	public:
        string movie;
        vector<string> movies;
        string guessMovie;
        string currentHM;
        vector<char> used;
        void randmovie(string *movie, vector<string> movies, string *guessMovie);
        void updateHM(HangmanModel &model);
        int wrong = 0;
};

class HangmanView
{
	public:
        void displayProgress(HangmanModel model);
        void displayUsed(HangmanModel model);
        void displayHM(HangmanModel model);
};

class HangmanController
{
	public:
        void entered(HangmanModel &model);
        void check(HangmanModel &model);
        bool checkUsed(HangmanModel &model, char s);
        bool checkOver(HangmanModel &model);
        void input(HangmanModel &model);
        void updateMovie(HangmanModel &model);
        bool gamestate(HangmanModel &model);
};