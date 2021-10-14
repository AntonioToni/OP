#include <iostream>
#include <time.h>
using namespace std;

int recmin(int min, int array[], int x)
{
    if (min > array[x])
    {
        min = array[x];
    }
    if (x == 0)
    {
        return min;
    }
    else
    {
        return recmin(min, array, x - 1);
    }
}

int recmax(int max, int array[], int x)
{
    if (max < array[x])
    {
        max = array[x];
    }
    if (x == 0)
    {
        return max;
    }
    else
    {
        return recmax(max, array, x - 1);
    }
}

int main()
{
    srand(time(0));
    int min, max, array[10];
    int x = 9;
    min = array[0];
    max = array[9];
    for (int i = 0; i < 10; i++)
    {
        array[i] = (rand() % (50));
    }    
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    min = recmin(min, array, x);
    max = recmax(max, array, 9);
    cout << endl;
    cout << "Minimum is: " << min << endl;
    cout << "Maximum is: " << max << endl;
}