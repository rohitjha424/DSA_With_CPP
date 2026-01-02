// Find 2's coompliment of a given Number.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    //2's Compliment = 1's compliment +1
    int onesCompliment =  ~num;

    int twosCompliment = onesCompliment +1;

    cout << " 2's coompliment of a given Number: " << twosCompliment << endl;
    return 0;
}