// FUll Mirror Pyramid Using Foor Loop.

//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of rows: ";
    cin >> num;
    int n= num/2;
    for (int row = 0; row < n; row++)
    {
        // Space loop
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // Stars loop
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
