// Array using Functions

#include <iostream>
using namespace std;

// Print Array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Linear Search
bool lineaSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{

    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    // Printing an Array
    printArray(arr, size);

    // Linear Search
    int target = 6;
    bool ifFound = lineaSearch(arr, size, target);
    if (ifFound)
    {
        cout << "Target Element: " << target << " found" << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }
    return 0;
}
