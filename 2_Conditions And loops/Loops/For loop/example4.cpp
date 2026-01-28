#include <iostream>
using namespace std;

// Print all Even Number from 1 to 100 using for loop.
int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}