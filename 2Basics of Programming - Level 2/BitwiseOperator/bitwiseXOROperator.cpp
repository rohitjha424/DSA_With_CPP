// Bitwise XOR operato:  "^"

#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int b = 5;

    cout << (a ^ b) << endl;

    /*  The will give output as 0.
    Explanatins:
    as this is biwtwise XOR operator , it will perform operations on binary Equivalent of these numbers bitwise.
    Binary Equivalenbt of :
    5: 101
    5: 101
    -----
       1^1 >>>>> 0 ;;;;; 0^0>>0 ;;;;;; 1^1>>0   >>>>>>>>000>> 0
       ----

       XOR will return 0 if both bits are same and 1 if different.
    */

    int x =5;
    int y =10;

    cout <<(x^y)<<endl;

    /*  The will give output as 15.
    Explanatins:
    as this is biwtwise XOR operator , it will perform operations on binary Equivalent of these numbers bitwise.
    Binary Equivalenbt of :
    5: 0101
   10: 1010
    -----
       0^1 >>>>> 1 ;;;;; 1^0>>1 ;;;;;; 0^1>>1 ;;;;; 1^0>>1   >>>>>>>>1111>> 15
       ----

       XOR will return 0 if both bits are same and 1 if different.
    */
    return 0;
}