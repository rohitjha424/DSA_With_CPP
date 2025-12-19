// Function to print sum of two numbers

#include <iostream>
using namespace std;

void addTwoNumbers(int a, int b)
{

    cout << "The Sum is: " << a + b << endl;
}

int main()
{
    int a, b;
    cout << "enter tWo numbers:" << endl;
    cin >> a >> b;

    addTwoNumbers(a, b);

    return 0;
}