#include "header.hpp"

int main()
{
    vector<int> vector;
    ifstream numbers;
    numbers.open ("numbers.txt");
    checkfile(numbers);
    fillvector(numbers, vector);
    cout << "Number of numbers from numbers.txt greater then 500: " << countover500(vector) << endl;
    minmax(vector);
    removelowerthan300(vector);
    sort(vector.begin(), vector.end(), greater<int>());
    printvector(vector);
    system("pause");
}