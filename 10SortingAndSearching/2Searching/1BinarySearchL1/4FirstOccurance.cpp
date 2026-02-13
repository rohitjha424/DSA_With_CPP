// Find the First Occurance of the target element in an Array/ vector

#include <iostream>
#include <vector>

using namespace std;

void binarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int key = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            key = mid;
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "First occurance found at index :" << key << endl;
}

int main()
{
    vector<int> arr = {10, 20, 20, 20, 30, 40, 40, 50};

    int target = 40;

    binarySearch(arr, target);

    return 0;
}