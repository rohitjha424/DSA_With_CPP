// Find Max Number in an Array

#include <iostream>
#include <limits.h>
using namespace std;

// Mthod 1 : Best Practice to use INT_MAX
void findMax(int arr[], int size)
{
    int maxNum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    cout << "Maximum Number in the given Array is: " << maxNum << endl;
}

// Method 2: Initialize minMun with first Array element and then compare further
// void findMin(int arr[], int size)
// {
//     int minNum = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] < minNum)
//         {
//             minNum = arr[i];
//         }
//     }
//     cout << "Minimum Number in the given Array is: " << minNum << endl;
// }

// Mthod 3 : using inbuilt Function min()
// void findMin(int arr[], int size)
// {
//     int minNum;
//     for (int i = 0; i < size; i++)
//     {
//         minNum = min(arr[i], minNum);
//     }
//     cout << "Minimum Number in the given Array is: " << minNum << endl;
// }

int main()
{

    int arr[] = {3, 4, 15, 2, 20, 8, 11};
    int size = 7;

    findMax(arr, size);

    return 0;
}
