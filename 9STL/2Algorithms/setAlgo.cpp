#include <iostream>
#include <vector>
#include<algorithm>
// #include<algorithm>
using namespace std;

int main()
{
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);

    
    //set_union >> will return the union of two sets >> will remove the duplicates
    vector<int> unionResult;
    
    set_union(first.begin(),first.end(), second.begin(), second.end(), inserter(unionResult, unionResult.begin()));
    cout<<"union set is:"<<endl;
    for(int a: unionResult){
        cout<<a<<" ";   // will print : 1 2 3 4 5 6
    }cout<<endl;
    

    //set_intersection >>will print common elements
    vector<int> intersectionResult;
    set_intersection(first.begin(),first.end(), second.begin(), second.end(), inserter(intersectionResult, intersectionResult.begin()));
    cout<<"intersection set is:"<<endl;
    for(int a: intersectionResult){
        cout<<a<<" ";   // will print : 3 4
    }cout<<endl;
    
    //set_difference >> v1-v2 >> will minus the same element 
    vector<int> differenceResult;
    set_difference(first.begin(),first.end(), second.begin(), second.end(), inserter(differenceResult, differenceResult.begin()));
    cout<<"set difference result is:"<<endl;
    for(int a: differenceResult){
        cout<<a<<" ";   // will print : 1 2
    }cout<<endl;
    
    
    //set_symmetric_difference() >> will cancle same elements and print the result union
    vector<int> symDifferenceResult;
    set_symmetric_difference(first.begin(),first.end(), second.begin(), second.end(), inserter(symDifferenceResult, symDifferenceResult.begin()));
    cout<<"set symmetric differenc is:"<<endl;
    for(int a: symDifferenceResult){
        cout<<a<<" ";   // will print :1 2 5 6
    }cout<<endl;





    return 0;
}