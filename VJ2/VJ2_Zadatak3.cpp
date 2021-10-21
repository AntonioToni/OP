#include <iostream>
using namespace std;

struct circle
{
    int S, r;
};

struct rectangle
{
    int x1, y1;
    int x2, y2;
};

int intersect(rectangle &r, circle *c, int a)
{
    //check intersect
    for (int i = 0; i < a; i++)
    {
        if (r.x1 <a)
        {

        }
    }
}

int main()
{
    circle* c;
    rectangle* r;
    int a;
    cout << "Enter the center and radius of circle";
    cin >> c->S >> c->r;
    cout << endl;
    cout << "Enter the amount of rectangles you want to input: ";
    cin >> a;
    //dynamic
    int *r = new int[a];
    //input rectangle points
    for (int i = 0; i < a; i++)
    {
        cout << endl;
        cout << "Enter points for " << i << ". rectangle: ";
        cin >> r->x1 >> r->y1 >> r->x2 >> r->y2;
    }
    system("pause");
}