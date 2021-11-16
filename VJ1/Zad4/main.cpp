#include <iostream>
#include <time.h>
using namespace std;

int recmin(int *min, int *max, int array[], int i)
{
	if (i != 0)
	{
		if (*min > array[i])
		{
			*min = array[i];
		}
		if (*max < array[i])
		{
			*max = array[i];
		}
		return recmin(min, max, array, i - 1);
	}
}

int main()
{
	srand(time(0));
	int min, max, array[10];
	int x = 9;
	for (int i = 0; i < 10; i++)
	{
		array[i] = (rand() % (50));
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	min = array[0];
	max = array[9];
	recmin(&min, &max, array, 9);
	cout << endl;
	cout << "Minimum is: " << min << endl;
	cout << "Maximum is: " << max << endl;
	system("pause");
}
