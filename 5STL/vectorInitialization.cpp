// vector intialization

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    int size = v.size(); // in-built function to tell us the size in vector.
    cout << "printing vector elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    // method 1: default no data with zero size
    vector<int> arr;

    // method 2: intit with specific size and some values
    vector<int> arr2(5, -1); // will intialize vector with size 5 with all elements as -1.

    printVector(arr2);

    // method 3: intialized with some elements
    vector<int> arr3 = {1, 2, 3, 4, 5};
    arr3.push_back(6); // size can be always increased.
    printVector(arr3);

    // similar to method 3:
    vector<int> arr4{10, 20, 30, 40, 50};
    arr4.push_back(60); // size can be always increased.
    printVector(arr4);

    return 0;
}