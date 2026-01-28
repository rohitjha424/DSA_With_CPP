// Find LCM of Given two Numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two Numbers" << endl;
    cin >> num1 >> num2;

    // here we shall use the below basic formula :
    // GCD * LCM = num1 * num2 >>>>>> LCM = (num1*num2)/GCD

    // Hence we will first find the GCD(HCF):

    // Using Euclidean Method (Subtraction)

    // Handle negative numbers >>abs() returns the absolute value of a number>> number without sign
    int number1 = abs(num1);
    int number2 = abs(num2);

    while (number1 != number2)
    {
        if (number1 > number2)
        {
            number1 = number1 - number2;
        }
        else
        {
            number2 = number2 - number1;
        }
    }
    //after end of this loop number1 = number2

    // resulting num 1 or num 2 would be the GCD here. Hence gcd =number1

    int LCM = (num1 * num2) / number1;

    cout << "LCM of given numbers is: " << LCM;
    return 0;
}