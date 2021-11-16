
#include "vector.hpp"
#include<algorithm>
#include <vector>
using namespace std;
int main() 
{
    MyVector mv;
    size_t n;
    cout << "Unesite velicinu: ";
    cin >> mv.capacity;
    mv.vector_new(mv.capacity);
    
    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    mv.size = 0;
    while(cin >> n)
        mv.vector_push_back(n);
    
    cout << "first element " << mv.vector_front() << endl;
    cout << "last element " << mv.vector_back() << endl;
    mv.print_vector();

    cout << "removing last element" << endl;
    mv.vector_pop_back();
    mv.print_vector();

    cout << "size " << mv.vector_size() << endl;
    cout << "capacity " << mv.capacity << endl;

    mv.vector_delete();
}
