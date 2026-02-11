// selectionSort Sort

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size-1; i++)
    {
        //making first element set as minumum element index which is unsorted yet
        int minIndex = i;
        // loop to check if any element is less than the first element 
        for(int j =i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j; // if found then make it as new min index
            }
        }
        // swap newly found min element Index with the 1st element of unsorted elementes (arr[i]) 
        swap(arr[i], arr[minIndex]);
    }

}

int main()
{
    vector<int> arr = {5, 4, 2, 7, 9, 6};

    cout << "Before Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    selectionSort(arr);

    cout << "After Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}