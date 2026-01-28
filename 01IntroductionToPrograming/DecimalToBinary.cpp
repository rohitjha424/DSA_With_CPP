#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int num)
{

    int res = 0;
    int i = 0;
    int rem = 0;
    while (num > 0)
    {
        int rem = num % 2;
        res = rem * pow(10, i) + res;
        num = num / 2;
        i++;
    }

    return res;
}

int main()
{

    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout << endl;

    cout << "the decimal Representation of the given number is:" << decimalToBinary(num) << endl;
    return 0;
}