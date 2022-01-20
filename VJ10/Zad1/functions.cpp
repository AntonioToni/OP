#include "header.hpp"

template<typename T>
void sort(T *array, int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (array[i] < array[j])
            {
                swap(array[i], array[j]);
            }
        }
    }
}

template<>
void sort<char>(char *array, int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (tolower(array[i]) < tolower(array[j]))
            {
                swap(array[i], array[j]);
            }
        }
    }
}

void printch(char array[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}