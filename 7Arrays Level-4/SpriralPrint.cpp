// Spiral print of a 2D array:

#include <iostream>
using namespace std;

void spiralPrint2DArray(int arr[][5], int size)
{
    cout << "Spiral Print: " << endl;
    int startingRow = 0;
    int endingCol = size - 1;
    int endingRow = size - 1;
    int startingCol = 0;
    while (startingRow <= endingRow && startingCol <= endingCol)
    {
        for (int i = startingCol; i <= endingCol; i++)
        {
            cout << arr[startingRow][i] << " ";
        }
        startingRow++;

        cout << endl;
        for (int i = startingRow; i <= endingRow; i++)
        {
            cout << arr[i][endingRow] << endl;
        }
        endingCol--;

        for (int i = endingCol; i >= startingCol; i--)
        {
            cout << arr[endingRow][i] << " ";
        }
        cout << endl;
        endingRow--;

        for (int i = endingRow; i >= startingRow; i--)
        {
            cout << arr[i][startingCol] << endl;
        }
        cout << endl;
        startingCol++;
    }
}

int main()
{
    // create a 2D Array:
    int arr[5][5] =
        {{1, 2, 3, 4, 5},
         {6, 7, 8, 9, 10},
         {11, 12, 13, 14, 15},
         {16, 17, 18, 19, 20},
         {21, 22, 23, 24, 25}};

    // Printing 2D Array elements
    cout << endl
         << "2D Original Array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    spiralPrint2DArray(arr, 5);

    return 0;
}
