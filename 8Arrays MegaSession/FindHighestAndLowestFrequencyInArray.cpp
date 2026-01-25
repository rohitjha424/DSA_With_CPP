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
    int lowestFrequency = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            currentFreq++;
        }
        else
        {
            currentFreq = 1;
            lowestFrequency= arr[i];
        }

        if (currentFreq > maxFreq)
        {
            maxFreq = currentFreq;
            mode = arr[i];
        }
    }
    cout << endl
         << "Max Frequesncy is:" << mode << endl;
          cout << endl
         << "lowest Frequesncy is:" << lowestFrequency << endl;
}
int main()
{
    vector<int> arr = {4,4,1,2,2,2,3,3,3,3};
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