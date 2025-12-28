// Printing Front and Last vector element

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<char> v)
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
    // vector
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    printVector(v);

    // method 1: to print 1st and last element>>using index
    cout << "Front Element: " << v[0] << endl;
    cout << "Last Element: " << v[v.size() - 1] << endl;

    // Method 2: using in-built Functions >> front() and back()
    cout << "Front Element: " << v.front() << endl;
    cout << "Last Element: " << v.back() << endl;

    return 0;
}