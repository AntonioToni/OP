#include "header.hpp"

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