// peak index in a mountain array>> find peak element Index
// Moutain Array is >> 0,2,5,3,1 >> first Increasing then Peak at 5 then decresing >>Maoutain
// Ananlysis >> Max element is the Peak element>> find index of max

#include <iostream>
#include <vector>
using namespace std;

void findPeakIndexMoutainArray(vector<int> &arr)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int peak = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            peak = mid;
            end = mid - 1;
        }
    }
    cout << "Peak Element Index is: " << peak <<" And Peak Element is: "<<arr[peak]<< endl;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 5, 3, 1};

    findPeakIndexMoutainArray(arr);

    return 0;
}