#include <iostream>

using namespace std;

struct Point
{
    double x, y;
};

class Board
{
public:
    char** matrix;
    int row, col;
    char edge;
    Board() = default;
    Board(int x, int y, char e); //constructor declaration
    Board(const Board& other); //copy declaration
    Board(Board&& obj); //move declaration
    ~Board(); //destructor declaration
    void draw_char(Point p, char ch);
    void display();
    void draw_up_line(Point p1, char ch);
    void draw_line(Point p2, Point p3, char ch);
};
