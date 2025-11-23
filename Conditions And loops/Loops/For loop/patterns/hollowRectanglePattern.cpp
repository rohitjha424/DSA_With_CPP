#include <iostream>
using namespace std;

// Print a 6X10 hollow rectangle pattern of Stars using foor loop as below.

// * * * * * * * * * *
// *                 *
// *                 *
// *                 *
// *                 *
// * * * * * * * * * *

int main()
{

    for (int row = 0; row < 6; row++)
    {

        for (int col = 0; col < 10; col++)
        {
            if (row == 0 || row == 5)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 9)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}