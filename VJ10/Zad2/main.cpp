#include "header.hpp"

int main()
{
    Stack<int> stack;
    stack.push(3);
    stack.push(2);
    stack.push(6);
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    system("pause");
}