#include "header.hpp"

int main()
{
    int x, y;
    char e;
    cout << "Enter matrix dimensions: ";
    cin >> x >> y;
    cout << endl;
    cout << "Enter border character: ";
    cin >> e;
    Board b(x, y, e);
    Point p, p1, p2, p3;
    p.x = 1;
    p.y = 3;
    b.draw_char(p, 'x');
    p1.x = 4;
    p1.y = 8;
    b.draw_up_line(p1, 'U');
    p2.x = 2;
    p3.x = 5;
    p2.y = 5;
    p3.y = 2;
    b.draw_line(p2, p3, 'L');
    b.display();
}
