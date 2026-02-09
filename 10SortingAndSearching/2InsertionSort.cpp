//Insertion Sort


#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr)
{
  
}


int main()
{
    vector<int> arr = {5,4,3,2,1};

    cout << "Before Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    insertionSort(arr);


    return 0;
}