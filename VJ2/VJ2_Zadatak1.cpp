#include <iostream>
#include <time.h>
using namespace std;

void itermin(int array[10], int &min, int &max)
{
	min = array[0];
	for (int i = 0; i < 10; i++)
	{
		if (min > array[i])
		{
			min = array[i];
		}
	}
	max = array[0];
	for (int i = 0; i < 10; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
}

int main()
{
	srand(time(0));
	int min, max, array[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = (rand() % (50));
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	itermin(array, min, max);
	cout << "Minimum is " << min << endl;
	cout << "Maximum is " << max << endl;

	system("pause");
}