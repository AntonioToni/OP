#include "../functions.cpp"

int main()
{
    weapon mg42;
    mg42.fammo = 250;
    mg42.ammo = 250;
    mg42.wep.value(&mg42.wep.x, &mg42.wep.y, &mg42.wep.z);
    cout << "Coords of weapon: " << mg42.wep.x << ", " << mg42.wep.y << ", " << mg42.wep.z << endl;
    string action;
    int n = 0;
    cout << "To stop press CTRL+C" << endl;
    while (1)
    {
        cout << "Enter action (shoot or reload): ";
        cin >> action;
        cout << endl;
        if (action.compare("shoot") == 0)
        {
            cout << "How many bullets do you want to shoot? ";
            cin >> n;
            mg42.shoot(n);
        }
        else if (action.compare("reload") == 0)
        {
            mg42.reload();
        }
        else
        {
            cout << "Wrong action entered!" << endl;
        }
    }
    system("pause");
}