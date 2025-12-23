// Reverse an Array

#include <iostream>
using namespace std;

// Mthod 1 : Using in-built function swap()
void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    cout << "reversed Array is: " << endl;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    // Printing Swapped Array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Mthod 2 : Uisng foor loop with decrement op "--"
// void reverseArray(int arr[], int size)
// {
//     cout << "reversed Array is: " << endl;
//     for (int i = size-1; i >= 0; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

int main()
{

    int arr[] = {20, 4, 15, 2, 6, 8, 11};
    int size = 7;

    reverseArray(arr, size);

    return 0;
}
