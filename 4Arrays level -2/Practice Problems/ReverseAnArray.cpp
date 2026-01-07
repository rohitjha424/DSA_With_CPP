// Reverse an Array

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;

    reverseArray(arr, size);

    cout << "Array After reversing:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
