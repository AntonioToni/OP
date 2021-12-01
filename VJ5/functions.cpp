#include "header.hpp"

void coords::zero(double *x, double *y, double *z)
{
    *x = 0;
    *y = 0;
    *z = 0;
}

void coords::random(double *x, double *y, double *z)
{
    int min = 0;
    int max = 20;
    *x = rand() % max + min;
    *y = rand() % max + min;
    *z = rand() % max + min;
}

void coords::value(double *x, double *y, double *z)
{
    cout << "Enter the coordinates: ";
    cin >> (*x) >> (*y) >> (*z);
}

double dist2d(double *x, double *x1, double *y, double *y1)
{
    double dist = sqrt(pow(*x1 - *x, 2) + pow(*y1 - *y, 2));
    return dist;
}

double dist3d(double *x, double *x1, double *y, double *y1, double *z, double *z1)
{
    double dist = sqrt(pow(*x1 - *x, 2) + pow(*y1 - *y, 2) + pow(*z1 - *z, 2));
    return dist;
}

void weapon::shoot(int n)
{
    if (ammo != 0 && n == 0)
    {
        ammo--;
    }
    else if (ammo != 0 && ammo-n >= 0 && n != 0)
    {
        ammo -= n;
    }
    else
    {
        cout << "Not enough ammo!" << endl;
    }
    cout << "Ammo: " << ammo << "/" << fammo << endl;
}
void weapon::reload()
{
    ammo = fammo;
    cout << "Ammo: " << ammo << "/" << fammo << endl;
}