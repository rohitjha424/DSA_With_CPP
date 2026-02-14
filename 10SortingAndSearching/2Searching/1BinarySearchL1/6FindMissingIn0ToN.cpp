// Find the missing number in a sorted array of numbers 0 to n.

#include <iostream>
#include <vector>
using namespace std;

void findMissingElement(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int missing;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == mid)
        {
            start = mid + 1;
        }
        else if (arr[mid] > mid)
        {
            end = mid - 1;
            missing = mid;
        }
        else
        {
            start = mid + 1;
            missing =mid;
        }
    }
    cout << "Missing Element is: " << missing << endl;
}

int main()
{
    vector<int> arr = {0, 1, 2, 4, 5, 6, 7};
    // observation:  for 0 to n >> index will map to exat values >> 0,1,2,3,4,5,6,7>> index is same >>0,2,3,4,5,6,7

    //>> Hence we will apply the Binary search logic >>mid element should map with mid index.
    // if mid value is less than index>> missing element is on right side>>if more then>>missing on left
    findMissingElement(arr);

    return 0;
}