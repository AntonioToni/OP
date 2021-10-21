#include <iostream>
#include <time.h>
using namespace std;

void itermin(int array[10], int &x, int &y)
{
    y = rand() % (9);
	x = array[y];
}
int main()
{
	srand(time(0));
	int x, y, array[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = (rand() % (50));
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	itermin(array, x, y);
    x++;
	cout << y << "-ti element uvecan za 1 je: " << x << endl;

	system("pause");
}