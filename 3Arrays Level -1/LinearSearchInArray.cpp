// Linear Search in Array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    // find the value 10
    int target = 10;

    int i;
    bool ifFound = false;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            ifFound = true;
            break;
        }
        // cout << endl;
    }
    if (ifFound)
    {
        cout << "Element found at index: " << i << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }

    return 0;
}