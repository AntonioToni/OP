#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class timer
{
    public:
        timer(){};
        timer(int h, int m, double s);
        timer operator+= (timer const &o);
        timer operator/= (int div);
        bool operator< (timer const &o);
        timer operator- (timer const &o);
        operator double();
        void time(int m);
        friend ostream &operator<<(ostream &os, const timer &t);
    private:
        int h = 0, m = 0;
        double s = 0;
};

class penalty
{
    public:
        double s;
        penalty(double m);
        double operator() (timer &t);
};