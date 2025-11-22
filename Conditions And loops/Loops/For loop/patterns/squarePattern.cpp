#include <iostream>
using namespace std;

// Print a 4X4 square pattern of Stars using foor loop as below.

// * * * *
// * * * *
// * * * *
// * * * *

int main()
{

    for (int row = 0; row < 4; row++)
    {

        for (int col = 0; col < 4; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}