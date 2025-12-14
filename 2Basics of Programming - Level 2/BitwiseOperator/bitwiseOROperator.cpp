// Bitwise operatos : &, | , ~, ^

#include <iostream>
using namespace std;

int main()
{

    int a = 2;
    int b = 3;

    cout << (a | b) << endl;

    /*  The will give output as 3.
    Explanatins:
    as this is biwtwise OR operator , it will perform operations on binary Equivalent of these numbers bitwise.
    Binary Equivalenbt of :
    2: 10
    3: 11
    -----
       11 >>>>> 1|1 >>1 ;;;;;; 0|1 >>1 >>>>>10>>> int Quivaluent of 11 >>3.
       ----

    */

    int x = 5;
    int y = 10;

    cout << (x | y) << endl;
    /*  The will give output as 15.
        Explanatins:
        as this is biwtwise OR operator , it will perform operations on binary Equivalent of these numbers bitwise.
        Binary Equivalenbt of :
        5: 00000101
       10: 00001010
        -----
            00001111 >>>> Binrary Equivalent >> 15
           ----

        */

    return 0;
}