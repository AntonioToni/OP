#include <iostream>
#include <vector>
#include "Header.hpp"
using namespace std;

void input(vector<int> &v1, int n)
{
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v1.push_back(x);
	}
}

void input2(vector<int> &v2, int a, int b)
{
	int x;
	while (cin >> x, x > a && x < b)
	{
		v2.push_back(x);
	}
}

void output(vector<int> &v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i)<< " ";
	}
}

int main()
{
	int n, a, b;
	vector<int> v1, v2;
	cout << "How many numbers do you want to enter? ";
	cin >> n;
	input(v1, n);
	output(v1);
	cout << endl;
	//
	cout << "Enter lower and upper parameters: ";
	cin >> a >> b;
	input2(v2, a, b);
	output(v2);
	system("pause");
}
