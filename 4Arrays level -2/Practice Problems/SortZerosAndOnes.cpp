// Sort Zeroes and Ones in an Array

#include <iostream>
using namespace std;

void sortZerosAndOnes(int arr[], int size)
{
    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        if (arr[i] == 1)
        {
            countOne++;
        }
    }

    int i;
    for (i = 0; i < countZero; i++)
    {
        arr[i] = 0;
    }
    for (int j = i; j < size; j++)
    {
        arr[j] = 1;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    int size = 14;

    sortZerosAndOnes(arr, size);

    cout << "Array After Sorting:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
