// Problem Statement-1: Take input from user for array of size 5 and  Print sum of all Array Elements.

#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    // Taking input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value for index:" << i << ">>";
        cin >> arr[i];
        cout << endl;
    }

    // Printing user input values for the arrays :
    cout << "Your input Array is :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Printing sum of array elements :
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Printing sum of array elements:" << sum << endl;

    return 0;
}