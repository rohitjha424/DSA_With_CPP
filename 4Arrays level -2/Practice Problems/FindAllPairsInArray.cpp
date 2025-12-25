// Find pairs in an Array

#include <iostream>
using namespace std;

void findAllPairs(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
      cout<<"["<<arr[i]<<","<<arr[j]<<"] ";
      if((i==size-1)&&(j<size)){
        j++;
        i=0;
      }
    }

}

int main()
{

    int arr[] = {10,20,30};
    int size = 3;

    findAllPairs(arr, size);
 

    return 0;
}
