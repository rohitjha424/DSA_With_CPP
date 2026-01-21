//Print Extreme Elements Alternately
// Original Array:
// 1 3 2 4 5
// Sorted Array:
// 1 2 3 4 5
// Printing the Extreme Elements Alternately
// 1 5 2 4 3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintExtremeElementsAlternately(vector<int>& arr, int size){
    sort(arr.begin(), arr.end());
     cout <<"Sorted Array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;

    int Max_element = size-1;
    int Min_element = 0;
    cout<<"Printing the Extreme Elements Alternately"<<endl;
    while(Min_element<=Max_element){
        cout<<arr[Min_element]<<" ";
        if(Min_element !=Max_element){
            cout<<arr[Max_element]<<" ";
        }
        Min_element++;
        Max_element--;
    }
}
int main()
{
    vector<int> arr = {1,3,2,4,5};
    int size = arr.size();
    cout <<"Original Array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;

   PrintExtremeElementsAlternately(arr, size);
    return 0;
}