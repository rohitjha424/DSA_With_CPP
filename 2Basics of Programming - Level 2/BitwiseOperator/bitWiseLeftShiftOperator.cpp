// Bitwise left Shift operator: "<<"

#include <iostream>
using namespace std;

int main()
{

    int a = 2;
    cout << (a << 1) << endl; // Will Result as 4
    cout << (a << 2) << endl; // Will Result as 8
    cout << (a << 3) << endl; // Will Result as 16

    /*
    /// So, we can see , when an int is left shifted by one bit
    // it results in 2 times of original number.
    // when left shifted by 2>> 4 times.
    // when left shifted by 3>> 8 times.
    // hence the furmula becomes: originalNum *2 pow(shifted by x)
    */

    // Trying to shift by negative number :

    int b = 10;
    cout << (b << -1) << endl; // Will Not give any Error, but will print 0 or some garbage number.
    return 0;
}