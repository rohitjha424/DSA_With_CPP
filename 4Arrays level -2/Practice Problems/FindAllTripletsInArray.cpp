// Find Triplets in an Array

#include <iostream>
using namespace std;

void findAllTriplets(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << "[" << arr[i] << "," << arr[j] << "," << arr[k] << "] ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    findAllTriplets(arr, size);

    return 0;
}
