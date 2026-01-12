// Print Min And Max element in an 2D Array
#include <iostream>
#include <limits.h>
using namespace std;

int minElementIn2DArray(int arr[][3], int m, int n)
{

    int minElement = INT_MAX;
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (arr[row][col] < minElement)
                minElement = arr[row][col];
        }
    }
    return minElement;
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

    int minElement = minElementIn2DArray(arr, 3, 3);
    cout << "The minimum element in the 2D Array is: " << minElement << endl;

    return 0;
}
