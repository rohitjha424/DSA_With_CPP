// Pre Post increment Decrement Operators.
#include <iostream>
using namespace std;

int main()
{

    int a = 5;

    // Pre ++
    ++a;
    cout << a << endl; // will print 6.

    // Pre --
    int b = 10;
    --b;
    cout << b << endl; // will print 9.

    // Post ++
    int c = 4;
    int resultPost = (c++) + 5 ; //c = 4 has been added to 5. c will increment after this statemnet.
    cout << resultPost << endl; // will print 9 Not 10.

    return 0;
}