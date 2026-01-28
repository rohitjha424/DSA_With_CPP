// Find 2's coompliment of a given Number.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    // ~num → flips all bits of num
    // Adding 1 → gives 2’s complement

    int onesCompliment = ~num;
    int twosCompliment = onesCompliment + 1;

    cout << " 2's coompliment of a given Number: " << twosCompliment << endl;
    return 0;
}