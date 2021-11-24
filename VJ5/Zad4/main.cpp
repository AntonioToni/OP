#include "../functions.cpp"

int main()
{
    int n, hits = 0;
    cout << "Enter amount of targets: ";
    cin >> n;
    cout << endl;
    target* tar = new target[n];
    weapon stg;
    stg.fammo=35;
    stg.ammo = stg.fammo;
    stg.wep.value(&stg.wep.x, &stg.wep.y, &stg.wep.z);
    int nb = 1;
    //initialize
    for (int i = 0; i < n; i++)
    {
        tar[i] = target(tar[i].bl, tar[i].ur);
    }
    //generate
    for (int i = 0; i < n; i++)
    {
        tar[i].bl.random(&tar[i].bl.x, &tar[i].bl.y, &tar[i].bl.z);
        tar[i].ur.random(&tar[i].ur.x, &tar[i].ur.y, &tar[i].ur.z);
    }

    for (int i = 0; i < n; i++)
    {
        stg.shoot(nb);
        double temp;
        //check if bottom left is truely bottom left
        if (tar[i].bl.z > tar[i].ur.z)
        {
            temp = tar[i].bl.z;
            tar[i].bl.z = tar[i].ur.z;
        }
        //check if weapon in range of z
        if (stg.wep.z >= tar[i].bl.z && stg.wep.z <= tar[i].ur.z)
        {
            tar[i].state = true;
            cout << "Hit!" << endl;
            hits++;
        }
        else
        {
            tar[i].state= false;
            cout << "Miss!" <<endl;
        }
        if (stg.ammo == 0)
        {
            stg.reload();
        }
    }
    cout << "Targets hit: " << hits << " / " << n << endl;
    system("pause");
}