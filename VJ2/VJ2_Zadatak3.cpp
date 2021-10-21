#include <iostream>
using namespace std;

struct circle
{
    int s1, s2, r;
};

struct rectangle
{
    int x1, y1;
    int x2, y2;
};

void intersect(const struct &r, circle &c, int a)
{
    cout << "Enter the center and radius of circle";
    cin >> c.s1 >> c.s2 >> c.r;
    cout << endl;
    cout << "Enter the amount of rectangles you want to input: ";
    cin >> a;
    //input rectangle points
    for (int i = 0; i < a; i++)
    {
        cout << endl;
        cout << "Enter points for " << i << ". rectangle: ";
        cin >> r[i].x1 >> r[i].y1 >> r[i].x2 >> r[i].y2;
    }
    //check intersect
    for (int i = 0; i < a; i++)
    {
        if (r[i].x1 - c.s1)
        {

        }
    }
}

int main()
{
    int a;
    circle c;
    cout << "Enter the amount of rectangles you want to input: ";
    cin >> a;
    rectangle r[a];
    intersect(r[a], c, a);
    system("pause");
}
