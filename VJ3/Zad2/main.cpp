#include "header.hpp"
#include "Zad1funk.cpp"

void vec3(vector<int> &v1, vector<int> &v2, vector<int> &v3, int n)
{
	for (int i = 0; i < n; i++)
	{
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
		    if (v1[i] != v2[j])
            {
		    	cnt++;
            }
            if(cnt == n)
            {
                v3.push_back(v1[i]);
            }
        }
	}
    output(v3);
}

int main()
{
    int n;
	vector<int>v1, v2, v3;
    cout << "How many numbers do you want to enter? ";
	cin >> n;
	input(v1, n);
	input(v2, n);
	vec3(v1, v2, v3, n);
}
