#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <iterator>

using namespace std;

void checkfile(ifstream &numbers);
void fillvector(ifstream &numbers, vector<int> &vector);
int countover500(vector<int> vector);
void minmax(vector <int> vector);
void removelowerthan300(vector<int> &vector);