//Diagonal Sum in 2D Array
#include <iostream>
#include <limits.h>
using namespace std;


void diagonalSum2DArray(int arr[][3], int size)
{

    int diagonalSum1 = 0;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row == col){
                diagonalSum1 = diagonalSum1+arr[row][col];
            }
        }
    }

    int diagonalSum2 = 0;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row + col == size-1 ){
                if(size%2!=0 && row==col){
                    continue;
                }
                else{
                    diagonalSum2 += arr[row][col];
                }
            }
        }
    }

    cout<<diagonalSum1+ diagonalSum2;
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
    // int diagonalSum = diagonalSum2DArray(arr, 3);
    // cout << "Diagona Sum: " << diagonalSum << endl;

  
    return 0;
}
