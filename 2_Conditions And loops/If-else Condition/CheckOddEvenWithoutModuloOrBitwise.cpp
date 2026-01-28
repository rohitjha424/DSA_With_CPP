// Check Odd/Even Without using Modulo Or Bitwise & operator

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number" << endl;
    cin >> num;

    int doubleOfNum = (num / 2) * 2;
    if (doubleOfNum == num)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}