// Arrays Initialization

#include <iostream>
using namespace std;

int main(){

    //Size not intialized, only value stored; 
    int arr[]={1,2,3,4,5};

    //Both size and Values Stored intialized;
    int arr1[5] = {1,2,3,4,5};


    //size initialized but not all indices are initialized
    int arr2[5] = {2,4};
    // >>remaining indices zero will be stored automaticall>> int arr2[5] = {2,4,0,0,0}.
    for(int i =0; i <5; i++){
        cout<<""<<arr2[i]<<" ";
    }

    //Error Case when more values inserted than arrey size.
    // int arr3[2] = {2,4,5};

    
    return 0;

}