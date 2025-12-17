// Implicit TypeCasting

#include <iostream>
using namespace std;

int main()
{

    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2; // int is added to float>>float>>high precison.
    cout << result << endl;     // Will result in 15.5

    return 0;
}