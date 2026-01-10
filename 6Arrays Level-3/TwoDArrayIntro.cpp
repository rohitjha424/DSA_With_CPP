// 2 D array Basic intro
#include <iostream>
using namespace std;

int main()
{

    // create a 2D Array:

    int arr[2][3];

    // Taking input of the 2D Array:
    cout << "Enter 2D Array elemenets :" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing 2D Array elements
    cout<<endl<<"2D Array:"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Acceessing Array elements 
    cout <<"Array element on 2*2 position is :"<<arr[1][1]<<endl;


    //Traversal:
    //row wise:
    cout<<"Row Wise traversal of given 2D Array:"<<endl;
    for(int row =0; row <2; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
