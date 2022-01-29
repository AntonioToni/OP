#include "header.hpp"

void checkfile(ifstream &numbers)
{
    try
    {
        if (numbers)
        {
            cout << "Numbers.txt found." << endl;
        }
        else
        {
            throw string("File not exsistant!");
        }
    }
    catch(string errorname)
    {
        cout << errorname << endl;
    }
}

void fillvector(ifstream &numbers, vector<int> &vector)
{
    istream_iterator<int> first(numbers);
    istream_iterator<int> last;
    copy(first,last, back_inserter(vector));
}

int countover500(vector<int> vector)
{
    int cnt = 0;
    for (int i = 0; i < vector.size(); i++)
    {
        if(vector.at(i) > 500)
        {
            cnt++;
        }
    }
    return cnt;
}

void minmax(vector<int> vector)
{
    cout << "Minimum element of vector: " << *min_element(vector.begin(), vector.end()) << endl;
    cout << "Maximum element of vector: " << *max_element(vector.begin(), vector.end()) << endl;
}

void removelowerthan300(vector<int> &vector)
{
    vector.erase(remove_if(vector.begin(), vector.end(), [](int i) {return i < 300; }), vector.end());
}