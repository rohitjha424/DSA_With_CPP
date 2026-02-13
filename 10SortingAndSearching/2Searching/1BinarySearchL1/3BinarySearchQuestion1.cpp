//Q1 Search element in a given Arra/ vector , if found return the index else return -1

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while(start<=end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
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
    return -1;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    cout << "Array Elements are: ";
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
    int target;
    cout << "Enter a target:" << endl;
    cin >> target;

    int result = binarySearch(arr, target);

    cout << result << endl;

    return 0;
}