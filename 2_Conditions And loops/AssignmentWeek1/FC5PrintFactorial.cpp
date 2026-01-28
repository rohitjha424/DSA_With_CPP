// Print Factorial of Given Number N.

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int fact = 1;

    while (N >= 1)
    {
        fact = fact * N;
        N = N - 1;
    }
    cout << fact;
    return 0;
}