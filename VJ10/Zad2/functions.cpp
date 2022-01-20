#include "header.hpp"

template <class T> void Stack<T>::push(T x)
{
    end ++;
    array[end] = x;
}

template <class T> T Stack<T>::pop()
{
    temp x = array[end];
    end--;
    return x;
}

template <class T> bool Stack<T>::is_empty()
{
    if (end == 0)
    {
        return true;
    }
    return false;
}

template class Stack<int>;