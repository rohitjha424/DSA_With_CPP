// Check if a numner is a Narcissistic Number or not

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
    while (tempNum != 0)
    {
        tempNum = tempNum / 10;
        count++;
    }
    cout << count << endl;
    tempNum = num;

    while (tempNum != 0)
    {
        int rem = tempNum % 10;
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