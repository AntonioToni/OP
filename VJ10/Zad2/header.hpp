#include <iostream>

using namespace std;

template <class T>
class Stack
{
    private:
        int end = 0;
        T array[5];
    public:
        void push(T x);
        T pop();
        bool is_empty();
};