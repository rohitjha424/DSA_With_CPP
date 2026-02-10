// selectionSort Sort

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr)
{
    int size = arr.size();
   
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

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