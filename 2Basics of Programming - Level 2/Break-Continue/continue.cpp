// continue.

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {

        if (i == 2)
        {
            continue; // skip the iteration and will not execute any line after this. move to next iteration
        }
        cout << i << endl;
    }
}