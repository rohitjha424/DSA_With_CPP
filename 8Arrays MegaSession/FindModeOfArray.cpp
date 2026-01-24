// Find Mode of the Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findMode(vector<int> &arr, int size)
{

   sort(arr.begin() , arr.end());
   cout<<"Sorted Array is :"<<endl;
   for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

}
int main()
{
    vector<int> arr = {1,2,3,4,3,5,3,6,3,7};
    int size = arr.size();

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    findMode(arr, size);
    // cout << "The  First Unsorted Element In Array is at: " << ans << "th index" << endl;

    return 0;
}