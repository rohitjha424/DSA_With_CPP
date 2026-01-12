// Search in 2D Array
#include <iostream>
using namespace std;

pair<int, int> searchIn2DArray(int arr[][3], int m, int n, int target)
{

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (arr[row][col] == target)
                return {row, col};
        }
    }
    return {-1, -1};
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

    pair<int, int> results = searchIn2DArray(arr, 3, 3, 70);
    cout << "The target element in the 2D Array found at: " << results.first << "," << results.second << endl;

    return 0;
}
