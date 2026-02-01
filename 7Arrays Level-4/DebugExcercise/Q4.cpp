//Swap alternate

#include <iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    cout<<"Original Array:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swapAlternate(arr, 5);
    cout<<"the Array after swapping is:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}