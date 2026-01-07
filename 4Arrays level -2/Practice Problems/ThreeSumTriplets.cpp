// Three Sum to an target

#include <iostream>
using namespace std;

void twoSum(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {

                if (arr[i] + arr[j] +arr[k] == target)
                {
                    cout << arr[i] << "," << arr[j] <<","<<arr[k]<< endl;
                }
            }
        }
    }
}

int main()
{
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int size = 6;
    int target = 0;

    twoSum(arr, size, target);

    return 0;
}
