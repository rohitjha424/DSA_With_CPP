// Shift Array Element by 1
// int arr[] = {10,20,30,40,50,60};
// 60 10 20 30 40 50

#include <iostream>
using namespace std;

void shiftByOne(int arr[], int size)
{
    int temp = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    shiftByOne(arr, size);

    cout << "Array After Shifting Array Element by 1:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
