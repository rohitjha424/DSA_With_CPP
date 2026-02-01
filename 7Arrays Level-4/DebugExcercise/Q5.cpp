//List all pairs in array that sums to X.

#include <iostream>
using namespace std;

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}

int main()
{
    int arr[6] = {1, 3, 2, 6, 7, 5};

    cout<<"Original Array:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    pairSumToX(arr, 6, 8);
    
    return 0;
}