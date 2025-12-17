// Explicit TypeCasting

#include <iostream>
using namespace std;

int main()
{

    // float to int
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2; 
    // num2 converted explictly into int.
    // num1+num2>>10+5=15>> as result is float so 15.0
    cout << result << endl;     // Will result in 15.0

    //dount to int

    double pi =  3.14159269;
    int intPi= (int)pi; // convert the double to int, truncate the decimle part/
    cout<<intPi<<endl; // print 3





    return 0;
}