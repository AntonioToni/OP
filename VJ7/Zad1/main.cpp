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
        Board(const Board & other); //copy declaration
        ~Board(); //destructor declaration
        void draw_char(Point p, char ch);
        void display();
        void draw_up_line(Point p1, char ch);
        void draw_line(Point p2, Point p3, char ch);
};

Board::Board(const Board & other) //copy
{
    memcpy(this, &other, sizeof(Board));
}

Board::Board(int x, int y, char e) //constructor
{
    row = y;
    col = x;
    edge = e;
    matrix = new char* [row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new char[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col-1)
            {
                matrix[i][j] = edge;
            }
            else
            {
                matrix[i][j] = ' ';
            }
        }
    }
}

Board::~Board() //destructor
{
    for(int i = 0; i < row; i++) 
    {
        delete matrix[i];
    }
    delete matrix;
}

void Board::draw_char(Point p, char ch)
{
    int x = p.x;
    int y = p.y;
    matrix[x][y] = ch;
}

void Board::display()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void Board::draw_up_line(Point p1, char ch)
{
    int x = p1.x;
    int y = p1.y;
    for (int i = x; i > 0; i--)
    {
        matrix[i][y] = ch;
    }
}

void Board::draw_line(Point p2, Point p3, char ch)
{
    int x1 = p2.x;
    int x2 = p3.x;
    int y1 = p2.y;
    int y2 = p3.y;
    if (x1==x2)
    {
        if (y1 > y2)
        {
            int temp = y1;
            y1 = y2;
            y2= temp;
        }
        while (y1 <= y2)
        {
            matrix[y1][x1] = ch;
            y1++;
        }
    }
    else if (y1 == y2)
    {
        if (x1 > x2)
        {
            int temp = x1;
            x1 = x2;
            x2 = temp;
        }
        while (x1 <= x2)
        {
            matrix[y1][x1] = ch;
            x1++;
        }
    }
    else
    {
        if (x1 > x2 && y1 > y2)
        {
            int temp = x1;
            x1 = x2;
            x2 = temp;
            temp = y1;
            y1 = y2;
            y2 = temp;
        }
        if (x1 <= x2 && y1 <= y2)
        {
            while (x1 <= x2 && y1 <= y2)
            {
                matrix[y1][x1] = ch;
                x1++;
                y1++;
            }
        }
        else if (x1 <= x2 && y2 <= y1)
        {
            while (x1 <= x2 && y2 <= y1)
            {
                matrix[y1][x1] = ch;
                x1++;
                y1--;
            }
        }
        else if (x2 <= x1 && y1 <= y2)
        {
            while (x2 <= x1 && y1 <= y2)
            {
                matrix[y1][x1] = ch;
                x1--;
                y1++;
            } 
        }
    }
}

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
    p.x=1;
    p.y=3;
    b.draw_char(p, 'x');
    p1.x = 4;
    p1.y = 8;
    b.draw_up_line(p1, 'U');
    p2.x = 2;
    p3.x = 5;
    p2.y = 5;
    p3.y = 2;
    b.draw_line(p2,p3, 'L');
    b.display();
}