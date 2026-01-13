// Diagonal Sum in 2D Array in O(N) time complexity
#include <iostream>
#include <limits.h>
using namespace std;

void diagonalSum2DArray(int arr[][3], int size)
{
    int sum =0;
    for(int i=0; i<size; i++){
        sum = sum+arr[i][i];
        sum= sum+arr[i][size-i-1];
    }
    if(size%2!=0){
        sum = sum - arr[size/2][size/2];
    }
    cout<<sum;
}

int main()
{
    // create a 2D Array:
    int arr[3][3] =
        {{10, 20, 30},
         {40, 50, 60},
         {70, 80, 90}};

    // Printing 2D Array elements
    cout << endl
         << "2D Array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    diagonalSum2DArray(arr, 3);
    return 0;
}
