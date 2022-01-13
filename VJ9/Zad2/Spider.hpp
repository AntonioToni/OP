#pragma once
#include "animal.hpp"
class Spider: public animal
{
    public:
        int legs()
        {
            return 8;
        }
        string species()
        {
            return "Spider";
        }
};

class Tarantula: public Spider
{
    public:
        int legs()
        {
            return 8;
        }
        string species()
        {
            return "Tarantula";
        }
};