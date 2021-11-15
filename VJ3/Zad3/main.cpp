#include "header.hpp"
#include "funk.cpp"

int main()
{
	vector<int> v;
    int n;
    cout << "How many numbers do you want to enter? ";
	cin >> n;
    input(v, n);

	sort(v.begin(), v.end());
	v.insert(v.begin(), 0);
    int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	v.push_back(sum);
	output(v);
	system("pause");
}
