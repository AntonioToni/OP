#include "header.hpp"

void HangmanModel::randmovie(string* movie, vector<string> movies, string* guessMovie)
{
    char c = '_';
    int totall = 0;
    ifstream file("movie.txt");
    while (getline(file, *movie))
    {
        totall++;
        movies.push_back(*movie);
    }
    int random = rand() % totall;
    *movie = movies[random];
    for (int i = 0; i < (*movie).length(); i++)
    {
        if (isspace((*movie)[i]))
        {
            (*guessMovie).push_back(' ');
        }
        else
        {
            (*guessMovie).push_back('_');
        }
    }
}

void HangmanModel::updateHM(HangmanModel &model)
{
    string head =" ", body=" ", lhand=" ", rhand=" ", lleg=" ", rleg=" ";
    if(model.wrong == 1)
    {
       head = "O";
    }
    else if(model.wrong == 2)
    {
        head = "O";
        body = "|";
    }
    else if(model.wrong == 3)
    {
        head = "O";
        body = "|";
        lhand = "/";
    }
    else if(model.wrong == 4)
    {
        head = "O";
        body = "|";
        lhand = "/";
        rhand = "\\";
    }
    else if(model.wrong == 5)
    {
        head = "O";
        body = "|";
        lhand = "/";
        rhand = "\\";
        lleg = "/";
    }
    else if(model.wrong == 6)
    {
        head = "O";
        body = "|";
        lhand = "/";
        rhand = "\\";
        lleg = "/";
        rleg = "\\";
    }
    string Hangman =
        "   --------\n"
        "   | /    |\n" 
        "   |/     "+ head + "\n" 
        "   |     "+ lhand + body + rhand + "\n"
        "   |      "+ body + "\n"
        "   |     "+ lleg+ " "+ rleg + "\n"
        "   |\n"
        "---|---\n";
    model.currentHM = Hangman;
    cout << model.currentHM << endl;
}

void HangmanController::updateMovie(HangmanModel &model)
{
    char letter = model.used.back();
    bool IG = true;
    for (int i = 0; i < model.movie.size(); i++)
    {
        if (model.movie[i] == letter)
        {
            model.guessMovie[i] = letter;
            IG = false;
        }
    }
    if (IG==true)
    {
        model.wrong++;
    }
}

bool HangmanController::checkUsed(HangmanModel &model, char c)
{
    int size = model.used.size();
    for (int i = 0; i < size; i++)
    {
        if (model.used.at(i) == c)
        {
            return true;
        }
    }
    return false;
}

void HangmanController::input(HangmanModel &model)
{
    char c;
    do
    {
        cout << "Enter a letter: ";
        cin >> c;
        
    }while (checkUsed(model, c)); 
    model.used.push_back(c);
}

bool HangmanController::checkOver(HangmanModel &model)
{
    if (model.wrong == 6)
    {
        cout << "Game over" << endl;
        cout << "Correct movie name: " << model.movie << endl;
        return false;
    }

    for (int i = 0; i < model.movie.size(); i++)
    {
        if (model.movie[i] != model.guessMovie[i])
        {
            return true;
        }
    }
    cout << "You won" << endl;
    return false;
}

void HangmanView::displayProgress(HangmanModel model)
{
    for (int i = 0; i < model.guessMovie.size(); i++)
    {
        cout << model.guessMovie.at(i);
    }
    cout << endl;
}

void HangmanView::displayUsed(HangmanModel model)
{
    cout << "Used letters: ";
    for (int i = 0; i < model.used.size(); i++)
    {
        cout << model.used[i] << ", ";
    }
    cout << endl;
}