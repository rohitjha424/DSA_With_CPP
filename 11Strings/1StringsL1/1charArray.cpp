//char Array Started

#include<iostream>
using namespace std;

int main(){

    // char arr[10];
    // //character Array input
    // cin>>arr;
    // //character Array Output in one line :
    // cout <<"your Inout is: "<<arr<<endl;

    // //printing using loop
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" "<<endl;
    // }

    // cin will neglect input after space 
    // char arr2[5];
    // cin>>arr2; // input given : rohit jha
    // cout<<arr2; // will print only :  rohit 

    //initialization
    // char arr[10] = "love"; // multiple character with double quotes


    // storing sequences of words with spaces using getline()
    char arr1[50];
    cin.getline(arr1,50);
    cout<<arr1;

    return 0;
}