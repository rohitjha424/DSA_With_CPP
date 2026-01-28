// Check if valid Trainagle ot not.

#include <iostream>
using namespace std;

int main()
{

    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;

    if (x + y > z && y + z > x && z + x > y)
    {
        cout << "Valid Triangle Sides" << endl;
    }
    else
    {
        cout << "Invalid Sides" << endl;
    }

    return 0;
}