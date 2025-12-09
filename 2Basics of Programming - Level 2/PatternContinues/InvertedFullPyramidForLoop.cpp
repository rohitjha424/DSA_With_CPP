// Inverted FUll Pyramid

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {

        int gaps = n - i;
        int count = i;
        int k = 1;
        while (k <= gaps)
        {
            cout << " ";
            k++;
        }
        k = 1;
        while (k <= count)
        {
            cout << "* ";
            k++;
        }
        k = 1;
        while (k <= gaps)
        {
            cout << " ";
            k++;
        }
        cout << endl;
        i--;
    }

    return 0;
}