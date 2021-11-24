#include <iostream>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

class coords
{
    public:
        double x, y, z;

        void zero(double *x, double *y, double *z);
        void random(double *x, double *y, double *z);
        void value(double *x, double *y, double *z);
};

double dist2d(double *x, double *x1, double *y, double *y1);
double dist3d(double *x, double *x1, double *y, double *y1, double *z, double *z1);

//Zad2

class weapon
{
    public:
        coords wep;
        int fammo;
        int ammo;
        void shoot(int n);
        void reload();
};

//Zad3 

class target
{
    public:
        target() {}
        coords bl, ur; //bottom left, upper right
        target(coords bl, coords ur)
        {
            this -> bl  = bl;
            this -> ur = ur;
        }
        bool state;
};