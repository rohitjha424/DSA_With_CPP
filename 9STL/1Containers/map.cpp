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

    return 0;
}