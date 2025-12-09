// Inverted FUll Pyramid Using Foor Loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {          // row loop
        for (int j = 1; j <= i; j++) {      // stars loop
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
