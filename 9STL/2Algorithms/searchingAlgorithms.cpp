#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){

    vector<int> arr;

    // insertion of values in vector
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    int target = 40;
    auto it = binary_search(arr.begin(), arr.end(), target); // will return boolean if target found 
    cout<<it<<endl; // will return 1


return 0;
}