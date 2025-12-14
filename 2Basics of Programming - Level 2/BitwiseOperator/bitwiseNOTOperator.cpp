// Bitwise NOT operato:  "~"

#include <iostream>
using namespace std;

int main()
{

    int num = 1;

    cout << ~(num) << endl;

    /*  The will give output as -2.
    Explanatins:
    as this is biwtwise NOT operator , it will perform operations on binary Equivalent of these numbers bitwise.
    Binary Equivalenbt of :
    1: 000000000000000000000000000000001
    Not 1>>
       111111111111111111111111111111110
    -----
    left most 1 would be considered as negative number >> and this negative number is acceeded by converting by below method :
    first we need to find 2's compliment:

    1's compliment:
    000000000000000000000000000000000001
    2's compliment: add 1
    000000000000000000000000000000000010 >>> int 2
    negative sign and this 2 >>> -2
    */

    return 0;
}