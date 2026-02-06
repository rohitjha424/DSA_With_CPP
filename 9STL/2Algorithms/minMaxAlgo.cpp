#include <iostream>
#include <vector>
#include<algorithm>
// #include<algorithm>
using namespace std;

int main()
{

    //compare 2 numbers
    // int a = 10;
    // int b = 15;

    // //max() >> will print max of two numbers
    // cout<<max(a,b)<<endl; // will print 15

        
    // //min() >> will print min of two numbers
    // cout<<min(a,b)<<endl; // will print 10


    //min/max in a range (container)

    vector<int> arr;

    // insertion of values in vector
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    //min_element >> wll print minimum element from the container
    auto it = min_element(arr.begin(), arr.end());
    cout << *it<<endl;

    //max_element >> wll print maximum element from the container
    auto it2 = max_element(arr.begin(), arr.end());
    cout << *it2<<endl;



    return 0;
}