#include "../functions.cpp"
//class od targeta se nalazi u header.hpp ovo je testni program za generiranje targeta
int main()
{
    srand(time(NULL));
    target tar;
    tar.bl;
    tar.ur;
    tar.bl.random(&tar.bl.x, &tar.bl.y, &tar.bl.z);
    tar.ur.random(&tar.ur.x, &tar.ur.y, &tar.ur.z);
    cout << "Target coords bottom left: " << tar.bl.x << ", " << tar.bl.y << ", " << tar.bl.z << endl;
    cout << "Target coords upper right: " << tar.ur.x << ", " << tar.ur.y << ", " << tar.ur.z << endl;
    system("pause");
}