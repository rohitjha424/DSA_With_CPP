// STL Intro

#include <iostream>
using namespace std;

void fun(int a[], int size)
{
    cout<<"printing Array element:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{

    // Static memmory Alllocation:
    int arr[5] = {1, 2, 3, 4, 5};
    fun(arr, 5);

    // dynamic
    int n;
    cout << "Enter size of the dynamic Array:" << endl;

    cin >> n;
    int *arrary = new int[n]; // here by default , each element woild be zero or garbage.

    cout << "Enter elements of the dynamic Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arrary[i] = data;
    }
    fun(arrary, n);

    return 0;
}