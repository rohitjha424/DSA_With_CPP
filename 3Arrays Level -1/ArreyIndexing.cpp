// Arrays Indexing

#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {2, 6, 5, 9, 1};
    // This is how we access the array elements using index starting from 0.
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    // Accessing all values of array using for loop:
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}