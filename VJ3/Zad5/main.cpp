#include <iostream>

using namespace std;

int substr(string str, string sub)
{
    int cnt = 0;
    string::size_type pos = 0;
    while(pos != string::npos)
    {
        cnt++;
        pos=str.find(sub,pos+1);
    }
    return cnt;
}

int main()
{
    string str;
    string sub;
    cout << "Enter a string: ";
    cin >> str;
    cout << endl;
    cout << "Enter a substring: ";
    cin >> sub;
    cout << substr(str,sub);
}
