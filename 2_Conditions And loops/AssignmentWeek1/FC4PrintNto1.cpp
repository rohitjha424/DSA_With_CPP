// Print N to 1

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int i = N;
    while (i >= 1)
    {
        cout << i << endl;
        i = i - 1;
    }
    return 0;
}