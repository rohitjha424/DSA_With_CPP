// Check if a numner is a Narcissistic Number or not

/* A narcissistic number (or Armstrong number) is a number that equals 
the sum of its own digits, each raised to the power of the total number of digits 
in the number, in a given base (usually base 10). 
For example, 153 is narcissistic 
because it has 3 digits, and \(1^{3}+5^{3}+3^{3}=1+125+27=153\) */


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number" << endl;
    cin >> num;

    int tempNum = num;
    int newNum = 0;
    int count = 0;

    //counting number of digits
    while (tempNum != 0)
    {
        tempNum = tempNum / 10;
        count++;
    }
    cout <<"Number of Digits: "<< count << endl;

    //taking againg temp as num to calculate new number
    tempNum = num;

    while (tempNum != 0)
    {
        int rem = tempNum % 10;
        // newNum = newNum + pow(rem,count) ;   // Removed because of precision

        int power = 1;
        for (int i = 0; i < count; i++)
        {
            power *= rem;
        }

        newNum += power;
        
        tempNum = tempNum / 10;
    }

    cout << "New Number is:" << newNum << endl;

    if (newNum == num)
    {
        cout << "Narcissistic !!!" << endl;
    }
    else
    {
        cout << "Not Narcissistic !!!" << endl;
    }

    return 0;
}