// Learning All About Bubble Sort
// time complexity >> O(n square)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void bubbleSortDecOrder(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            { // will print in decreasing order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int main()
{
    int arr[] = {4, 6, 7, 2, 8};
    int size = 5;

    cout << "Before Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    bubbleSort(arr, size);

    cout << "After Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    bubbleSortDecOrder(arr, size);

    cout << "After Dec order Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}