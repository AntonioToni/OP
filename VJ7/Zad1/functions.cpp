#include "header.hpp"

Board::Board(const Board & other) //copy
{
    memcpy(this, &other, sizeof(Board));
}

Board::Board(Board&& obj) //move
{
    matrix = new char* [obj.row];

    for (int i = 0; i < row; i++)
    {
        matrix[i] = new char[obj.col];
    }

    for (int i = 0; i < row; i++)
    {
        delete obj.matrix[i];
    }

    delete obj.matrix;
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
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
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
    for (int i = 0; i < row; i++)
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
    if (x1 == x2)
    {
        if (y1 > y2)
        {
            int temp = y1;
            y1 = y2;
            y2 = temp;
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
