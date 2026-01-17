// Spiral print of a 2D array:

// Rotate a Square matrix by 90 degrees clockwise.

#include <iostream>
using namespace std;

void spiralPrint2DArray(int arr[][5], int size)
{
    cout << "Spiral Print: " << endl;
     int i =0;
    int start = 0;
    int end = size - 1;
    int row=0;
    int col=0;
    int count=size*size;
    while(i<count){
    for (col=start; col <= end; col++)
    {
        cout << arr[row][col] << " ";
        i++;
        if(col==end){
            row = row+1;
        }
    }
    cout<<endl;
    col--;
    for(row; row<=end; row++){
        cout << arr[row][col]<<endl;
        i++;
        if(row==end){
            col=col-1;
        }
    }
    row--;

    for (col; col>= start; col--)
    {
        cout << arr[row][col] << " ";
        i++;
        // if(col==end){
        //     row = row+1;
        // }
    }
    col++;
    row--;
    cout<<endl;
    // cout<<endl<<"row: "<<row<<endl;
    // cout<<"col: "<<col<<endl;

     for(row; row>=start+1; row--){
        cout << arr[row][col]<<endl;
        i++;
    }

    start++;
    end--;
    // cout<<endl<<"end of row:"<<row<<endl;
    // cout<<endl<<"end of col:"<<col<<endl;
    row=start;
    col =start;
    // cout<<endl<<"end reset of row:"<<row<<endl;
    // cout<<endl<<"end resent of col:"<<col<<endl;
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
