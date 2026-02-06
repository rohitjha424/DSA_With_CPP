#include <iostream>
#include <vector>
#include<algorithm>
// #include<algorithm>
using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    //converting vector to a heap using make_heap()

    //make_heap()
    make_heap(arr.begin(), arr.end());
    for(int a: arr){
        cout<<a<<" ";   // will print : 77 66 55 22 11 >> it bacame max_heap
    }cout<<endl;
    
    //insertion will break the heap property
    // arr.push_back(99);
    // for(int a: arr){
    //     cout<<a<<" ";   // will print : 77 66 55 22 11 99 >> it broke heap property
    // }cout<<endl;
    
    //>> we need to use the push_heap()>> to push without breaking the heap property
    arr.push_back(99); // pushing a number
    push_heap(arr.begin(), arr.end()); // will maintain order of heap 
    for(int a: arr){
        cout<<a<<" ";   // will print : 99 66 77 22 11 55 >> it broke heap property
    }cout<<endl;
    

    return 0;
}