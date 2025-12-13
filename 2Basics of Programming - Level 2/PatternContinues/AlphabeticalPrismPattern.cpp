// Print below Pattern:
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        char ch;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col <= row)
            {
                ch = col + 'A';
                cout << ch;
            }
            else
            {
                ch = ch - 1;
                cout << ch;
            }
        }
        cout << endl;
    }
    return 0;
}