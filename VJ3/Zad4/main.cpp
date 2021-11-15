#include "header.hpp"
#include "funk.cpp"

void del(vector<int> &v, vector<int>:: iterator i)
{
    v.erase(i);
}

int main()
{
    vector<int> v;
    vector<int>::iterator i;
    int n, x;
	cout << "How many numbers do you want to enter? ";
	cin >> n;
	input(v, n);
    output(v);
    cout << "Which element of vector do you want to delete? ";
    cin >> x;
    i = v.begin() + x - 1;
    del(v,i);
    output(v);
}
