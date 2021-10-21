#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct circle
{
    int x, y, r;
};

struct rectangle
{
    int x1, y1;
    int x2, y2;
};

int intersect(rectangle *& r, circle &c, int a)
{
    int cnt = 0;
    cout << "Enter the center and radius of circle";
    cin >> c.x >> c.y >> c.r;
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
        int x1 = max(r[i].x1, min(c.x, r[i].x2)) - c.x;
        int y1 = max(r[i].y1, min(c.y, r[i].y2)) - c.y;
        if (pow(x1,2)+pow(y1,2) <= pow(c.r,2))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int a;
    circle c;
    cout << "Enter the amount of rectangles you want to input: ";
    cin >> a;
    rectangle* r = new rectangle[a];
    cout << intersect(r, c, a) <<endl;
    system("pause");
}
