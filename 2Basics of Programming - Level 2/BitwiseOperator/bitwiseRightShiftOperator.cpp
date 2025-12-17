// Bitwise Right Shift operator:"">>"

#include <iostream>
using namespace std;

int main()
{

    int a = 32;
    cout << (a >> 1) << endl; // Will Result as 16
    cout << (a >> 2) << endl; // Will Result as 8
    cout << (a >> 3) << endl; // Will Result as 4

    /// So, we can see , when an int is right shifted by one bit
    // it results in half(1/2) of original number.
    // when right shifted by 2>> 1/4.
    // when right shifted by 3>> 1/8 times.
    // hence the furmula becomes: originalNum /2 pow(shifted by x)

    return 0;
}