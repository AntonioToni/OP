#include "header.hpp"

void sorter(vector<string> &v)
{
    vector<string>::iterator i;
    i=v.begin();
    string str;
    int n;
    cout << "How many strings do you want to enter? ";
    cin >> n;
    cout << "Enter the strings: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(),v.end());
}

int main()
{
    vector<string> v;
    sorter(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}