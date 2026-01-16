//Rotate any Matrix to 90 Degrees Clockwise



#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int m, int n)
{
    int row = m;
    int col = n;
    int resultMatrixRow = col;
    int resultMatrixCol = row;

    int resultMatrix[resultMatrixRow][resultMatrixCol];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            resultMatrix[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < resultMatrixRow; i++)
    {
        int start = 0, end = resultMatrixCol - 1;
        while (start < end)
        {
            swap(resultMatrix[i][start], resultMatrix[i][end]);
            start++;
            end--;
        }
    }

    cout << endl<< "2D Array after Rotating for 90 Degrees Clockwise:" << endl;

    for (int i = 0; i < resultMatrixRow; i++)
    {
        for (int j = 0; j < resultMatrixCol; j++)
        {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // create a 2D Array:
    int arr[2][3] =
        {{10, 20, 30},
         {40, 50, 60}};

    // Printing 2D Array elements
    cout << endl
         << "2D Original Array:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    transposeMatrix(arr, 2, 3);

    return 0;
}
