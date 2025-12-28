// Copy a vector elements

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
    // original vector
    vector<int> arr = {1, 2, 3, 4, 5};
    arr.push_back(6); // size can be always increased.
    printVector(arr);

    // copy vector
    vector<int> copyVect(arr);
    printVector(copyVect);

    return 0;
}