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

    vector<int> unionResult;

    //set_union >> will return the union of two sets >> will remove the duplicates

    set_union(first.begin(),first.end(), second.begin(), second.end(), inserter(unionResult, unionResult.begin()));
    cout<<"union set is:"<<endl;
    for(int a: unionResult){
        cout<<a<<" ";   // will print : 1 2 3 4 5 6
    }cout<<endl;


    return 0;
}