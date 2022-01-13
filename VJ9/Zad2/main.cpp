#include "counter.hpp"
#include "Insect.hpp"
#include "Spider.hpp"
#include "Bird.hpp"

int main()
{
    Kos kos;
    Zohar Zohar;
    Tarantula tarantula;
    counter counter;
    counter.getanimal(Zohar);
    counter.getanimal(kos);
    counter.getanimal(tarantula);
    counter.printlegs();
    system("pause");
}