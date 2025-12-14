//Bitwise AND operatos : "&"

#include<iostream>
using namespace std;

int main(){

    int a =2;
    int b =3;

    cout <<(a&b)<<endl;

    /*  The will give output as 2.
    Explanatins:
    as this is biwtwise AND operator , it will perform operations on binary Equivalent of these numbers bitwise.
    Binary Equivalenbt of :
    2: 10
    3: 11
    -----
       10 >>>>> 1&1 >>1 ;;;;;; 0&1 >>0 >>>>>10>>> int Quivaluent of 10 >>2. 
       ----
    
    */

    int x =5;
    int y =10;

    cout <<(x&y)<<endl;
/*  The will give output as 0.
    Explanatins:
    as this is biwtwise AND operator , it will perform operations on binary Equivalent of these numbers bitwise.
    Binary Equivalenbt of :
    5: 00000101
   10: 00001010
    -----
        00000000 >>>> Binrary Equivalent >> 0 
       ----
    
    */

    return 0;
}