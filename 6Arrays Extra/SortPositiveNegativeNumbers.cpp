// Sort Zeroes and Ones in an Array

#include <iostream>
using namespace std;

void sortNegativeAndPositive(int arr[], int size)
{

   int j=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
        
    }

}

int main()
{
    int arr[] = {23,-7,12,-10,-1,40,60};
    int size = 7;

    sortNegativeAndPositive(arr, size);

    cout << "Array After Negative And Positive Sorting:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
