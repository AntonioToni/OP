#include <iostream>
#include <time.h>
using namespace std;

int itermin(int array[10])
{
    int min;
    min = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int itermax(int array[10])
{
    int max;
    max = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    srand(time(0));
    int min, max, array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = (rand() % (50));
    }    
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    min = itermin(array);
    cout << "Minimum is " << min << endl;
    max = itermax(array);
    cout << "Maximum is " << max << endl;
    
    system("pause");
}