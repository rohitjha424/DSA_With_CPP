// Binary Serach L1

#include <iostream>
#include <vector>

using namespace std;

void binarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end) / 2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[mid] == target)
        {
            cout << "Element found at index :" << mid<< endl;
            break;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
            mid = (start + end) / 2;
        }
        else
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
    }
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int target = 20;

    binarySearch(arr, target);

    return 0;
}