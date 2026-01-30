// Learning About Map in CPP

#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{

    //creation of unordered map
    unordered_map<string,string> table;

    //insertion
    // 1st way 
    table["in"] = "India";
    //2nd way using insert()
    table.insert(make_pair("en", "England"));
    //3rd way: Pair
    pair<string,string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    //size()
    cout<<"Map Size is : "<<table.size()<<endl;  // will print map Size
    
    //clear()
    table.clear();
    cout<<"Map Size is : "<<table.size()<<endl;  // will print map Size as 0

    //empty()
    if(table.empty()==true){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }







    return 0;
}