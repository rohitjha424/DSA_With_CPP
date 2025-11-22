#include <iostream>
using namespace std;

// Print a 3X5 rectangle pattern of Stars using foor loop as below.

// * * * * *
// * * * * *
// * * * * *


int main()
{

    for (int row = 0; row < 3; row++)
    {

        for (int col = 0; col < 5; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}