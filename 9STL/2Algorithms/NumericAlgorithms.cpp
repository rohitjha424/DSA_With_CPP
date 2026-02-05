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

    //inner_product()
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

//     vector<int> second;
//     second.push_back(3);
//     second.push_back(4);
//     second.push_back(5);

//    int inner_pro=  inner_product(first.begin(), first.end(), second.begin(), 0);
//    //inner product >> first[0]*second[0] + first[1]*second[1]+first[2]*second[2]
//    cout<<inner_pro<<endl;

   //partial_sum()
   vector<int> resultParcialSum(first.size());
    partial_sum(first.begin(), first.end(), resultParcialSum.begin());
    for(int a: resultParcialSum){ // as array is 1, 2, 3, 4 >> will print >>
        cout<<a<<" ";  // 1>>1+2>>3, 1+2+3 >>6, 1+2+3+4>>10
    }












    return 0;
}
