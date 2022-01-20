#include <iostream>

using namespace std;

template<typename T>void sort(T *array, int x);

template<>void sort<char>(char *array, int x);

void printch(char array[], int x);