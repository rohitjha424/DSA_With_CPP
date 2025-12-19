// Function to Print Sum off All numbers 1 to N.

#include <iostream>
using namespace std;

void sumN(int num)
{

    int result = (num*(num+1))/2;
    cout<<result;
}

int main()
{
    int num;
    cout << "enter a number:" << endl;
    cin >> num;
    sumN(num);

    return 0;
}