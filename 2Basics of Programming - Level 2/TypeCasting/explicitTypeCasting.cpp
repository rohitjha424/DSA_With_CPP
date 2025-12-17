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
    cout << result << endl; // Will result in 15.0

    // dount to int

    double pi = 3.14159269;
    int intPi = (int)pi;   // convert the double to int, truncate the decimle part/
    cout << intPi << endl; // print 3


    //float to char
    float floatingNumber = 65.35;
    char charValue = (char)floatingNumber; //convert 65.35 to char(which is also an int value as per ASCII)>>65>>A
    cout<<charValue<<endl; // will print A

    return 0;
}