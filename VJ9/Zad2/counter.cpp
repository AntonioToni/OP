#include "counter.hpp"

void counter::getanimal(animal &animal)
{
    cout << "Added: " << animal.species() << endl;
    legs+= animal.legs();
}

void counter::printlegs()
{
    cout << "Number of legs: " << legs << endl;
}