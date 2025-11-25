#include <iostream>
using namespace std;

// Print a N Solid square pattern of Stars using foor loop as below.

// * * * *
// * * * *
// * * * *
// * * * *

int main()
{

    int n;
    cout<<"Enter the number of N Square"<<endl;
    cin>>n;
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}