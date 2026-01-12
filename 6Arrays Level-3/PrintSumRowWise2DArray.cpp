// 2 D array Row Wise Sum
#include <iostream>
using namespace std;

void rowWiseSum2DArray(int arr[][3], int rowsize)
{

    // row wise sum:
    cout << "Row Wise traversal of given 2D Array:" << endl;
    for (int row = 0; row < rowsize; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << "Sum for row " << row << " is: " << sum << endl;
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
         << "2D Array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rowWiseSum2DArray(arr, 3);

    return 0;
}
