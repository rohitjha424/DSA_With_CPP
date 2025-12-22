// Find Minimum Number in an Array

#include <iostream>
#include <limits.h>
using namespace std;

// Mthod 1 : Best Practice to use INT_MAX
void findMin(int arr[], int size)
{
    int minNum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }
    cout << "Minimum Number in the given Array is: " << minNum << endl;
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

    int arr[] = {20, 4, 15, 2, 6, 8, 11};
    int size = 7;

    findMin(arr, size);

    return 0;
}
