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

    // Traversing using iterator
    unordered_map<string,string>::iterator it = table.begin();
    cout<<endl<<"map elements are:"<<endl;
     while (it != table.end())
    { 
        pair<string,string> p = *it;
        cout << p.first << " "<<p.second<<endl;
        it++;
    }

    //size()
    cout<<"Map Size is : "<<table.size()<<endl;  // will print map Size
    
    // //clear()
    // table.clear();
    // cout<<"Map Size is : "<<table.size()<<endl;  // will print map Size as 0
    
    //empty()
    if(table.empty()==true){
        cout<<"map is empty"<<endl;
    }
    else{
        cout<<"map is not empty"<<endl;
    }
    
    // //erase
    // table.erase(table.begin(), table.end());
    // cout<<"Map Size after erase is  : "<<table.size()<<endl;  // will print map Size as 0

    //find()
    if(table.find("in") != table.end()){
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    if(table.find("im") != table.end()){
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

    //count() >>>>>>>>> returns 0 or 1 >> as key is unique so if key found>>1>>no>>0 
    if(table.count("in") ==0){  //will return 1
        cout<<"Key not Found"<<endl;
    }
    else{
        cout<<"Key found"<<endl;
    }



    //////// *********Ordered map **********///

    cout<<"//////****Ordered Map*****///////"<<endl;
    //map keyword is used for ordered map

    //creation of ordered map
    map<string,string> oTable;

    //insertion
    // 1st way 
    oTable["in"] = "India";
    //2nd way using insert()
    oTable.insert(make_pair("en", "England"));
    oTable.insert(make_pair("br", "Brazil"));

    // Traversing using iterator
    map<string,string>::iterator it1 = oTable.begin();
    cout<<endl<<"map elements are:"<<endl;
     while (it1 != oTable.end())
    { 
        pair<string,string> pr = *it1;
        cout << pr.first << " "<<pr.second<<endl;
        it1++;
    }



    







    return 0;
}