// Average of All elements in an Array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    double n = 5;
    double totalSum = 0;
    double avg = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum = totalSum + arr[i];
    }
    avg = totalSum / n;

    cout << "Average of All elements in an Array is: " << avg << endl;

    return 0;
}