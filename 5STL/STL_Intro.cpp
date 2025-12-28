// STL Intro

#include <iostream>
using namespace std;

void fun(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

}

int main(){


    //Static memmory Alllocation:
    int arr[5] ={1,2,3,4,5};
    fun(arr,5);


    return 0;
}