#include "header.hpp"
#include "Zad1funk.cpp"

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
