// Function to check prime Number.

#include <iostream>
using namespace std;

void checkPrime(int num)
{

    if (num < 2)
    {
        cout << "Not a Prime Number !!! " << endl;
    }
    else if (num == 2)
    {
        cout << "Prime Number !!!" << endl;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "Not a Prime Number !!!" << endl;
                return;
            }
        }
        cout << "Prime Number" << endl;
    }
}

int main()
{
    int num;
    cout << "enter a number:" << endl;
    cin >> num;
    checkPrime(num);

    return 0;
}