//Custom Sorting Example
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//descending order using custom comparator
class comparator{
    public:
    bool operator()(int a, int b){
        return a >b; // when a > b >> it will place a first then b >> maintaining descending order
    }
};


int main(){

    vector<int> arr;
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(15);

    //ascending order sorting
    // sort(arr.begin(), arr.end());

    // for(int a : arr){
    //     cout<<a<<" "; // will print in sorting order
    // }cout <<endl;

    //descending order using custom comparator

    sort(arr.begin(), arr.end(), comparator());
    for(int a : arr){
        cout<<a<<" "; // will print in descending order
    }cout <<endl;





    return 0;
}