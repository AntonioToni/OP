#include "../functions.cpp" // <-- This include is here because it is needed to make the code work in VSC (Visual Studio Code)
//#include "header.hpp" is not added since it gets pulled from functions.cpp

int main()
{
    coords c1, c2;
    double d2, d3;
    c1.zero(&c1.x, &c1.y, &c1.z);
    cout << "Coords 1 zeroed: " << c1.x << ", " << c1.y << ", " << c1.z << endl;
    c1.value(&c1.x, &c1.y, &c1.z);
    cout << "Entered coords: " << c1.x << ", " << c1.y << ", " << c1.z << endl;
    c2.zero(&c2.x, &c2.y, &c2.z);
    cout << "Coords 2 zeroed: " << c2.x << ", " << c2.y << ", " << c2.z << endl;
    c2.value(&c2.x, &c2.y, &c2.z);
    cout << "Entered coords: " << c2.x << ", " << c2.y << ", " << c2.z << endl;
    d2 = dist2d(&c1.x, &c2.x, &c1.y, &c2.y);
    d3 = dist3d(&c1.x, &c2.x, &c1.y, &c2.y, &c1.z, &c2.z);
    cout << "Distance in 2D: " << d2 << endl;
    cout << "Distance in 3D: " << d3 << endl;
    system("pause");
}