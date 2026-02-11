// selectionSort Sort

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void selectionSort(vector<int> &arr)
{
    int size = arr.size();
    //finding min element
    
    for (int i = 0; i < size-1; i++)
    {
       
           int minIndex = i;
        

        for(int j =i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
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