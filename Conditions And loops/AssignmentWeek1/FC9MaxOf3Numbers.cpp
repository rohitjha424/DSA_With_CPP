// Print max of 3 given Numbers.

#include <iostream>
using namespace std;

int main()
{

    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "n1 is max" << endl;
        }
    }
    else if (n3 > n1)
    {
        if (n3 > n2)
        {

            cout << "n3 is max" << endl;
        }
        else
        {

            cout << "n2 is max" << endl;
        }
    }
    else
    {

        cout << "n2 is max" << endl;
    }

    return 0;
}