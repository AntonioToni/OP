#include "functions.cpp"

int main()
{
    srand(time(NULL));
    HangmanModel m;
    HangmanView v;
    HangmanController c;
    m.randmovie(&m.movie, m.movies, &m.guessMovie);
    while (c.checkOver(m) == true)
    {
        m.updateHM(m);
        v.displayProgress(m);
        v.displayUsed(m);
        c.input(m);
        c.updateMovie(m);
    }
    m.updateHM(m);
    v.displayProgress(m);
    v.displayUsed(m);
}