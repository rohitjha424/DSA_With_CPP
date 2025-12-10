// Inverted FUll Pyramid Using Foor Loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int row = 0; row<n; row++) {          // row loop
        for (int col = 0; col < n-row; col++) {      // stars loop
            cout << " "; 
        }
        for (int col = 0; col < row+1; col++) {      // stars loop
            cout << "* "; 
        }
        cout << endl;
    }

    return 0;
}
