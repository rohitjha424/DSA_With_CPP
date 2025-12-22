// Arrays Intro

#include <iostream>
using namespace std;

int main()
{

    // Creation of Arrays
    //  int arr[5];
    //  char ch[26];
    //  bool flags[20];
    //  long num[800];
    //  short snum[100];

    // cout<<"Array Created Successfully"<<endl;

    // int arr[100];
    int a = 5;
    cout<<"Size of a:"<<sizeof(a)<<endl;
    cout << "Adreess of a is : " << &a << endl;

    int arr[10];
    cout<<"Size of a:"<<sizeof(arr)<<endl;
    cout << "Base adreess of arr is : " << &arr << endl;

    return 0;
}