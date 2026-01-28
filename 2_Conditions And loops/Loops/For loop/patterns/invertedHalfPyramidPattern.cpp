#include <iostream>
using namespace std;

// Print a half Pyramid pattern of Stars using foor loop as below.

// * * * *
// * * *
// * *
// *

int main()
{

    int n;
    cout << "Enter the height of pyramid:" << endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// Explanation
// Suppose inverted pyramid height is 5>> n=5.
// for row 0 >> print 5 stars >> 5-0 =5 stars >> n-row
// for row 1 >> print 4 stars >> 5-1 =4 stars >> n-row
// for row 2 >> print 3 stars >> 5-2 =3 stars >> n-row
// for row 3 >> print 2 stars >> 5-3 =2 stars >> n-row
// for row 4 >> print 1 stars >> 5-4 =1 stars >> n-row

// hence the Formula col < n-row.