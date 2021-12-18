#include "header.hpp"

timer::timer(int h, int m, double s)
{
    this -> h = h;
    this -> m = m;
    this -> s = s;
}

timer timer::operator+= (timer const &o)
{
    h += o.h;
    m += o.m;
    s += o.s;
    //overflow detect
    if (s >= 60)
    {
        s -= 60;
        m++;
    }
    if (m >= 60)
    {
        m -= 60;
        h++;
    }
    return *this;
}

timer timer::operator/= (int div)
{
    double time;

    time = h * 3600 + m * 60 + s;
    time /= div;

    h = time / 3600;
    time = time - h * 3600;

    m = time / 60;
    time = time - m * 60;

    s = time;
    return *this;
}

ostream &operator<<(ostream &os, const timer &t)
{
    os << t.h << " : " << t.m << " : " << t.s;
    return os;
}

bool timer::operator< (timer const &o)
{
    double time1 = h * 3600 + m * 60 + s;
    double time2 = o.h * 3600 + o.m * 60 + o.s;
    return time1 < time2;
}

timer timer::operator- (timer const &o)
{
    timer res;
    res.h = h - o.h;
    res.m = m - o.m;
    res.s = s - o.s;
    return res;
}

timer::operator double()
{
    return s;
}

penalty::penalty(double m)
{
    s = m;
}

void timer::time(int m)
{
    s += m;
}

double penalty::operator() (timer &t)
{
    t.time(s);
    return s;
}