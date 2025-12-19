// Function to Print Sum off Even numbers upto N.

#include <iostream>
using namespace std;

void evenSum(int num)
{

    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            result = result + i;
        }
    }
    cout << result;
}

int main()
{
    int num;
    cout << "enter a number:" << endl;
    cin >> num;
    evenSum(num);

    return 0;
}