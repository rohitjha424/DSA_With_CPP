// Shift Array Element by kth position without using extra place
// Original Array:
// 10 20 30 40 50 60 70
// Array After Right Shifting Array Element by 3 position:
// 50 60 70 10 20 30 40

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(int arr[], int start, int end)
{
    for (int i = start; i < end; i++)
    {
        if (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

void rightShiftByKthPosition(int arr[], int size, int kposition)
{

    // reverse whole array
    reverse(arr, 0, size - 1);

    // reverse the k elements from 0 to kth
    reverse(arr, 0, kposition - 1);

    // reverse the remaining array:
    reverse(arr, kposition, size - 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int size = 7;
    int kposition = 3;

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // right shift result
    rightShiftByKthPosition(arr, size, kposition);
    cout << "Array After Right Shifting Array Element by " << kposition << " position: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
