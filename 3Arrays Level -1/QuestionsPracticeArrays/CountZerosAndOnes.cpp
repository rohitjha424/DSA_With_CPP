// Problem Statement-2: Count 0's and 1's in an given Array.

#include <iostream>
using namespace std;

// Print Array
void CountZerosAndOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "zeroCount: " << zeroCount << endl;
    cout << "oneCount: " << oneCount << endl;
}

int main()
{

    int arr[8] = {0, 1, 1, 1, 0, 0, 1, 1};
    int size = 8;

    CountZerosAndOnes(arr, size);

    return 0;
}
