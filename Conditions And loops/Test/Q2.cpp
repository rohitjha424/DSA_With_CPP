// 2. **Debug the code. It is trying to print the given pattern.**

/*
Pattern
1
23
345
4567
56789
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;

    while (i < n)
    {
        int count = i + 1;
        int j = 0;
        while (j < i + 1)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
