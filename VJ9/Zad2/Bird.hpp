#pragma once
#include "animal.hpp"

class Bird: public animal
{
    public:
        int legs()
        {
            return 2;
        }
        string species()
        {
            return "Bird";
        }
};

class Kos: public Bird
{
    public:
        int legs()
        {
            return 2;
        }
        string species()
        {
            return "Kos";
        }
};