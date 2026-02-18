//char Array Started

#include<iostream>
using namespace std;

int main(){

    char arr[10];
    //character Array input
    cin>>arr;
    //character Array Output in one line :
    cout <<"your Inout is: "<<arr<<endl;

    //printing using loop
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }


    return 0;
}