// Function to return Max of 3 numbers

#include <iostream>
using namespace std;

int maxOfThreeNumbers(int a, int b, int c)
{

    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cout << "enter Three numbers:" << endl;
    cin >> a >> b >> c;
    cout << "The Biggest Number is:" << maxOfThreeNumbers(a, b, c) << endl;

    return 0;
}