// Shift Array Element by 1
// int arr[] = {10,20,30,40,50,60};
// 60 10 20 30 40 50

#include <iostream>
using namespace std;

void rightShiftByOne(int arr[], int size)
{
    int temp = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
void leftShiftByOne(int arr1[], int size)
{
    int temp = arr1[0];

    for (int i = 0; i < size - 1; i++)
    {
        arr1[i] = arr1[i + 1];
    }
    arr1[size - 1] = temp;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int arr1[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // right shift result
    rightShiftByOne(arr, size);
    cout << "Array After Right Shifting Array Element by 1:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // left shift result
    leftShiftByOne(arr1, size);
    cout << "Array After Left Shifting Array Element by 1:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
