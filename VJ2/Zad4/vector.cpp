#include "vector.hpp"

void MyVector::vector_new (size_t sz)
{
    arr = new int[sz];
}
void MyVector::vector_delete()
{
    delete[] arr;
}
void MyVector::vector_push_back(int n)
{
    if (size == capacity)
    {
        int* newarr = arr;
        arr = new int[capacity*=2];
        for (int i = 0; i < size; i++)
        {
            arr[i] = newarr[i];
        }
        delete[] newarr;
    }
    arr[size] = n;
    size++;
}
void MyVector::vector_pop_back()
{
    arr[size -1] = NULL;
    size--;
}
int& MyVector::vector_front()
{
    int front = arr[0];
    return front;
}
int& MyVector::vector_back()
{
    int back = arr[size-1];
    return back;
}
size_t MyVector::vector_size() 
{
    return size;
}

size_t MyVector::vector_capacity()
{
    return capacity;
}

void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
