// Function to Print Sum off All numbers 1 to N.

#include <iostream>
using namespace std;

void sumN(int num)
{

    // int sum = (num*(num+1))/2;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    cout << sum;
}

int main()
{
    int num;
    cout << "enter a number:" << endl;
    cin >> num;
    sumN(num);

    return 0;
}