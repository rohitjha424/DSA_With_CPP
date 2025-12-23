// Print Extreme Element of an Array

#include <iostream>
#include <limits.h>
using namespace std;


void extremePrint(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    cout << "Extreme Print of given Array elements is: " << endl;
    while (left <= right)
    {
        cout<<arr[left]<<" "<<arr[right]<<" ";
        left++;
        right--;
    }
    // Printing Swapped Array
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}


int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 7;

    extremePrint(arr, size);

    return 0;
}
