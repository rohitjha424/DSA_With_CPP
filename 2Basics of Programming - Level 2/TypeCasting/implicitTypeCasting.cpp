// Implicit TypeCasting

#include <iostream>
using namespace std;

int main()
{

    // int to float
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2; // int is added to float>>float>>high precison.
    cout << result << endl;     // Will result in 15.5

    // char to int
    char ch = 'A';
    int a = ch + 1;
    /*
    As ch ='A'>>Stored as 65 as ASCII int value>>
    when added to int, it will implictly converted into an int.
    >>result =66
    */
    cout << a << endl;

    return 0;
}