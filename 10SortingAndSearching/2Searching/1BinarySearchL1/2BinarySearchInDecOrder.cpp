// Binary Search In Decreasing order Sorted Array/Vector

#include <iostream>
#include <vector>

using namespace std;

void binarySearchInDecOrder(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end) / 2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[mid] == target)
        {
            cout << "Element found at index :" << mid << endl;
            break;
        }
        else if (target < arr[mid])
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
        else
        {
            end = mid - 1;
            mid = (start + end) / 2;
        }
    }
}

int main()
{
    vector<int> arr = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    int target = 20;

    binarySearchInDecOrder(arr, target);

    return 0;
}