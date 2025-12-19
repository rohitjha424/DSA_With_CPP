// Function to print couting 1 to N.

#include <iostream>
using namespace std;

void counting1ToN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    counting1ToN(n);
    return 0;
}