// Shift Array Element by kth position
// Original Array:
// 10 20 30 40 50 60 70
// Array After Right Shifting Array Element by 3 position:
// 50 60 70 10 20 30 40

#include <iostream>
#include <vector>
using namespace std;

void rightShiftByKthPosition(int arr[], int size, int kposition)
{
    //Vector for temporary storing the k elements from far right.
    vector<int> tempArray(kposition);

    //storing last k elements in a vector
    int j = size - kposition;
    for (int i = 0; i < kposition; i++)
    {
        tempArray[i] = arr[j];
        j++;
    }

    //shifting other elements by k position
    for (int i = size-1; i >= 0; i--)
    {
        if(i-kposition>=0){

            arr[i] = arr[i-kposition];
        }
    }

    //copying the temp vector elements to the original array
    for (int i = 0; i < kposition; i++)
    {
        arr[i] = tempArray[i];
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int kposition = 3;
    int size = 7;

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // right shift result
    rightShiftByKthPosition(arr, size, kposition);
    cout << "Array After Right Shifting Array Element by " << kposition << " position: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
