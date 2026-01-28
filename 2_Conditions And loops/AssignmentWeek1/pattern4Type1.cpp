// Full Pyramid
//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int gap = n - i;
        int count = 0;
        int k = 1;
        while (k <= gap)
        {
            cout << "  ";
            k = k + 1;
        }
        count = 2 * i - 1;
        k = 1;
        while (k <= count)
        {
            cout << "* ";
            k = k + 1;
        }
        k = 1;
        while (k <= gap)
        {
            cout << "  ";
            k = k + 1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}