//Insertion Sort


#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; ++i)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
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

    cout << "After Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;



    return 0;
}