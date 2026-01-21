// Find First Unsorted Element In Array, return its index else -1.

#include <iostream>
#include <vector>
using namespace std;

int FindFirstUnsortedElementInArray(vector<int> &arr, int size)
{


    for (int i = 0; i < size-1; i++)
    {
        if(arr[i+1]<arr[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 5, 7, 8};
    int size = arr.size();

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int ans = FindFirstUnsortedElementInArray(arr, size);
    cout<<"The  First Unsorted Element In Array is at: "<<ans<<"th index"<<endl;

    return 0;
}