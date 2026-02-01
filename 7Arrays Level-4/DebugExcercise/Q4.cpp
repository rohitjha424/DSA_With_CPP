//Swap alternate
// Original Array:
// 3 9 12 6 32 4
// the Array after swapping is:
// 9 3 6 12 4 32

#include <iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main()
{
    int arr[6] = {3, 9, 12, 6, 32, 4};

    cout<<"Original Array:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swapAlternate(arr, 6);
    cout<<"the Array after swapping is:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}