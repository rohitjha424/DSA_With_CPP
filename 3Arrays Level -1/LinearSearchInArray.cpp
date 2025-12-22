// Linear Search in Array

#include <iostream>
using namespace std;

int main()
{
    
    int arr[] = {2,4,6,8,10,12};
    int n =6;
    // find the value 10
    int target = 10;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            cout << "Element found at index: "<<i<< endl;
            break;
        }
        cout << endl;
    }

    return 0;
}