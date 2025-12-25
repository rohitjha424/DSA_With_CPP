// Find pairs in an Array
// int arr[] = {10,20,30};
// [10,10] [10,20] [10,30] 
// [20,10] [20,20] [20,30]
// [30,10] [30,20] [30,30]

#include <iostream>
using namespace std;

void findAllPairs(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "[" << arr[i] << "," << arr[j] << "] ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30};
    int size = 3;

    findAllPairs(arr, size);

    return 0;
}
