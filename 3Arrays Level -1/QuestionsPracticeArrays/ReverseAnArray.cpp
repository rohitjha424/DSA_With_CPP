// Reverse an Array

#include <iostream>
#include <limits.h>
using namespace std;

// Mthod 1 : Uisng foor loop with decrement op "--"
void reverseArray(int arr[], int size)
{
    cout << "reversed Array is: " << endl;
    for (int i = size-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{

    int arr[] = {20, 4, 15, 2, 6, 8, 11};
    int size = 7;

    reverseArray(arr, size);

    return 0;
}
