// Check prime or not

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int i = 2;
    while (i < N)
    {
        if (N % i == 0)
        {
            cout << "\n Not a Prime Number, divisible by " << i << endl;
            return 0;
        }
        else
        {
            i = i + 1;
        }
    }
    cout << "Prime Number";
    return 0;
}