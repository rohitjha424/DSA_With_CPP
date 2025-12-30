// Sort Zeroes and Ones in an Array

#include <iostream>
using namespace std;

void sortNegativeAndPositive(int arr[], int size)
{
    int negativeCount = 0;
    int positiveCount = 0;

   int j;
    for (j = 0; j < size; j++){
            if(arr[j]>0)
            break;
        }

    for (int i = 0; i < size; i++)
    {
        if(arr[i]<0){
            swap(arr[i],arr[i-1]);
            j++;
        }
        
    }

    // int i;
    // for (i = 0; i < negativeCount; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int j = i; j < size; j++)
    // {
    //     arr[j] = 1;
    // }
}

int main()
{
    int arr[] = {23,-7,12,-10,-1,40,60};
    int size = 7;

    sortNegativeAndPositive(arr, size);

    cout << "Array After Sorting:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
