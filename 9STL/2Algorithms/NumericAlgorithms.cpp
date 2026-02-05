#include<iostream>
#include<algorithm>
#include<vector>
#include <numeric>
using namespace std;


int main(){

    vector<int> arr(5);
    arr[0] = 10;   
    arr[1] = 20;   
    arr[2] = 30;   
    arr[3] = 40;   
    arr[4] = 50;
    
    int totalSum = accumulate(arr.begin(), arr.end(), 0); // will sum from start to end each vector, sum initialized with 0
    cout<<totalSum<<endl; // will print the sum of all elements in the vector








    return 0;
}
