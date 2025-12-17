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
    int resultPostAdd = (c++) + 5 ; //c = 4 has been added to 5. 
    //c will increment to 5 after this statemnet.
    cout<<c<<endl;
    cout << resultPostAdd << endl; // will print 9 Not 10.

    // Post --
    int d = 9;
    int resultPostSub = (d--) + 5 ; //d = 9 has been added to 5. 
    //d will decrement to 8 after this statemnet.
    cout<<d<<endl;
    cout << resultPostSub << endl; // will print 9 Not 10.

    return 0;
}