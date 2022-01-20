#include "header.hpp"

int main()
{
    char array[6] = {'A', 'c', 'z', 'G', 'e', 'Q'};
    sort<char>(array, 6);
    printch(array, 6);
    system("pause");
}