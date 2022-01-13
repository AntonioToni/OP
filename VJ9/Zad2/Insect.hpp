#pragma once
#include "animal.hpp"

class Insect: public animal
{
    public:
        int legs()
        {
            return 6;
        }
        string species()
        {
            return "Insect";
        }
        Insect(/* args */);
        ~Insect();
};

class Zohar: public animal
{
    public:
        int legs()
        {
            return 6;
        }
        string species()
        {
            return "Zohar";
        }
};