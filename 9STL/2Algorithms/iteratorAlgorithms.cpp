#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// void printDouble(int a ){
//     cout<<2*a<<" ";
// }

bool checkEven(int a){
    return a%2 ==0;
}


int main(){

    vector<int> arr(5);
    arr[0] = 11;   
    arr[1] = 20;   
    arr[2] = 11;   
    arr[3] = 40;   
    arr[4] = 11;   

    //for_each()
    // for_each(arr.begin(), arr.end(), printDouble); // will take all the elements from begining to end and apply the printDouble() on it.
    // cout<<endl;

    // //find()
    // int target = 40;
    // auto it = find(arr.begin(), arr.end(), target);
    // cout<<*it<<endl;  // will print the value of target if found and will print 0 if not found.


    //find_if()
    // auto it = find_if(arr.begin(), arr.end(), checkEven);
    // cout<<*it<<endl; 

    //count()
    // int target = 11;
    // auto ans = count(arr.begin(), arr.end(), target); // will return the occurance of target element
    // cout<<ans<<endl;

    //count_if()
    auto ans = count_if(arr.begin(), arr.end(), checkEven); // will return the occurance criteria (even numbers)
    cout<<ans<<endl;

    //sort()
    sort(arr.begin(), arr.end()); // will return the occurance criteria (even numbers)
    for(int a: arr){
        cout<<a<<" ";
    }



    






}