// Shift Array Element by kth position


#include <iostream>
#include <vector>
using namespace std;

void rightShiftByOne(int arr[], int size, int kposition)
{
    vector<int> tempArray(kposition); ;

    int j =size-kposition;
    for(int i =0; i<kposition; i++){
        tempArray[i] = arr[j];
        j++;
    }
     cout << "temp Array:" << endl;
    for (int i = 0; i < kposition; i++)
    {
        cout << tempArray[i] << " ";
    }
    cout << endl;


    for (int i = size -1-kposition; i > 0; i--)
    {
        arr[i+kposition] = arr[i];
    }

}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60,70};

    int kposition =3;
    int size = 7;

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
   
    cout << endl;

    // right shift result
    rightShiftByOne(arr, size,kposition);
    cout << "Array After Right Shifting Array Element by 1:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    
    return 0;
}
