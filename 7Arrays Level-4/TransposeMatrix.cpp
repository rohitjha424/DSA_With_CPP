// Transpose Matrix

#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int m, int n)
{
    int row = m;
    int col = n;

    int resultMatrix[n][m];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            resultMatrix[j][i] = arr[i][j];
        }
    }

    cout << endl<< "2D Array after doing Transpose of Matrix:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
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
    for (int i = 0; i < 3; i++)
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
