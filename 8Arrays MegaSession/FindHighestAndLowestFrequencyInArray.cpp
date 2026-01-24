//Find Highest And Lowest Frequency Seperately.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findMode(vector<int> &arr, int size)
{

    sort(arr.begin(), arr.end());
    cout << "Sorted Array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int maxFreq = 1;
    int mode = arr[0];
    int currentFreq = 1;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            currentFreq++;
        }
        else
        {
            currentFreq = 1;
        }

        if (currentFreq > maxFreq)
        {
            maxFreq = currentFreq;
            mode = arr[i];
        }
    }
    cout << endl
         << "Mode is:" << mode << endl;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 3, 5, 3, 6, 3, 7};
    int size = arr.size();

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    findMode(arr, size);

    return 0;
}