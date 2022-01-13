#pragma once
#include <iostream>
#include <string.h>

using namespace std;
class animal
{
    public:
        virtual int legs() = 0;
        virtual string species() = 0;
};