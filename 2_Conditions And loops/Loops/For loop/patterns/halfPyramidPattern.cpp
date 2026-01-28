#include <iostream>
using namespace std;

// Print a half Pyramid pattern of Stars using foor loop as below.

// *
// * *
// * * *
// * * * *
// * * * * *

int main()
{

    int n;
    cout << "Enter the height of pyramid:" << endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++) // col <row+1 >> means printing 1 star in zeroth row
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}