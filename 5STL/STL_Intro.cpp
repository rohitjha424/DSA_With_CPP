// STL Intro

#include <iostream>
#include<vector>
using namespace std;

// void fun(int a[], int size)
// {
//     cout<<"printing Array element:"<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << endl;
//     }
// }

void printVector(vector<int>v)
{
    int size = v.size(); // in-built function to tell us the size in vector.
    cout<<"printing vector elements:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
}



int main()
{

    // Static memmory Alllocation:
    // int arr[5] = {1, 2, 3, 4, 5};
    // fun(arr, 5);

    // // dynamic
    // int n;
    // cout << "Enter size of the dynamic Array:" << endl;

    // cin >> n;
    // int *arrary = new int[n]; // here by default , each element woild be zero or garbage.

    // cout << "Enter elements of the dynamic Array:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     int data;
    //     cin >> data;
    //     arrary[i] = data;
    // }
    //here if we try to insert more values, it will crash in error as the size here also defined.
    // fun(arrary, n);


    //vector
    //in vector, dont tell the size of the vector
    //just keep inserting, I will manage the allocations.

    vector<int>v; // like an array >>size not decalred
    
    //insert in vector as mmuch as required. it will manage

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);


    printVector(v);

    //deleting the elements >> vector works in LIFO>>last come first out

    v.pop_back();
    printVector(v); // top /last inserted element got popped/deleted


    //inserting in vector by user input
     vector<int>vect;

     int vectSize;
     cin>>vectSize;
     for (int i = 0; i < vectSize; i++)
    {
        int d;
        cin >> d;
        vect.push_back(d);
    }
    printVector(vect);

    return 0;
}