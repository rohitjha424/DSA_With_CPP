// Transpose Matrix >> works only for Square Matrix
// 2D Original Array:
// 10 20 30
// 40 50 60
// 70 80 90 
// 2D Array after doing Transpose of Matrix:
// 10 40 70
// 20 50 80
// 30 60 90

#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int size)
{
    // int sum =0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (i != j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    cout << endl<< "2D Array after doing Transpose of Matrix:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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
         << "2D Original Array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    transposeMatrix(arr, 3);

    return 0;
}
