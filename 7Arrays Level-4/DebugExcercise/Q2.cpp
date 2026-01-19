//Linear Search.
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, sum = 0;
    cout << "Enter the length of array" << endl;
    cin >> n;
    int input[n];
    cout << "Enter Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int val;
    cout << "Enter value to search" << endl;
    cin >> val;
    int found = linearSearch(input, n, val);
    if (found < 0)
    {
        cout << "Not Found";
        return 0;
    }
    cout << "Found at: " << found + 1 << " position";
    return 0;
}