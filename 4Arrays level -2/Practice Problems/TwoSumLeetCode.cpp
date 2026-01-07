// Find pairs in an Array
// int arr[] = {10,20,30};
// [10,10] [10,20] [10,30]
// [20,10] [20,20] [20,30]
// [30,10] [30,20] [30,30]

#include <iostream>
using namespace std;

void twoSum(int arr[], int size, int target)
{
     int j = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==target){

                cout <<i<<","<<j<< endl;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 2, 4};
    int size = 3;
    int target = 6;

    twoSum(arr, size, target);

    return 0;
}
