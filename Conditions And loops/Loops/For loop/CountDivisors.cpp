// Count all divisors of a given Number.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    cout << "Total Number of divisors: " << count << endl;
    return 0;
}