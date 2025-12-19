// Function to Print Sum off Even numbers upto N.

#include <iostream>
using namespace std;

void printDigits(int num)
{
    while (num > 0)
    {
        int rem = num % 10;
        cout << rem << endl;
        num = num / 10;
    }
}

int main()
{
    int num;
    cout << "enter a number:" << endl;
    cin >> num;
    printDigits(num);

    return 0;
}