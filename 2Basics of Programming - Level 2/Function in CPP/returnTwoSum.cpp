// Function to return sum of two numbers

#include <iostream>
using namespace std;

int addTwoNumbers(int a, int b)
{

    int sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    cout << "enter tWo numbers:" << endl;
    cin >> a >> b;

    cout << "The Sum returned is:" << addTwoNumbers(a, b) << endl;

    return 0;
}