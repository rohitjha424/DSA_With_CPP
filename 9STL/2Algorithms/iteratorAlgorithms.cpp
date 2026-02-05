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

    vector<int> arr(6);
    arr[0] = 10;   
    arr[1] = 11;   
    arr[2] = 12;   
    arr[3] = 23;   
    arr[4] = 14;   
    arr[5] = 15;   

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
    // auto ans = count_if(arr.begin(), arr.end(), checkEven); // will return the occurance criteria (even numbers)
    // cout<<ans<<endl;

    // //sort()
    // sort(arr.begin(), arr.end()); // will return the occurance criteria (even numbers)
    // for(int a: arr){
    //     cout<<a<<" "; // will print in accessnding order by default
    // }

    // cout<<endl;
    // //reverse
    //  reverse(arr.begin(), arr.end()); // will return the occurance criteria (even numbers)
    // for(int a: arr){
    //     cout<<a<<" "; // will print in accessnding order by default
    // }

    //roatate
    // rotate(arr.begin(), arr.begin()+3, arr.end());
    // for(int a: arr){
    //     cout<<a<<" "; // will print roatte by 3 elements 
    // }

    //unique >>> remove duplicate elements from a sorted range
    // auto it = unique(arr.begin(), arr.end());
    // //it iterator k pehle sare unique elements hain 
    // //it k bad sare duplicate hai. to usse erase kr rhe hain
    // arr.erase(it,arr.end());
    // for(int a: arr){
    //     cout<<a<<" "; // will print roatte by 3 elements 
    // }


    //partition
    partition(arr.begin(), arr.end(), checkEven);
    for(int a: arr){
        cout<<a<<" "; // will print even number first and then odd numbers >>> partition made
    }





    






}