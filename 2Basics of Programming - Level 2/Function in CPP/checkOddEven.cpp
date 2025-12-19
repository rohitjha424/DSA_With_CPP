// Function to check odd even.

#include <iostream>
using namespace std;

void CheckOddEven(int num)
{

    if (num % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number !!!" << endl;
    }
}

int main()
{
    int num;
    cout << "enter a number:" << endl;
    cin >> num;
    CheckOddEven(num);

    return 0;
}