//learning about iterator
#include<iostream>
#include<vector>
#include<forward_list>
#include <list>
using namespace std;

int main(){


    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);

    // //traversing using iterator

    // //creating iterator
    // vector<int>::iterator it = arr.begin();

    // while(it != arr.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;

    //forward_list iterator>> 

    // forward_list<int> fl;
    // fl.push_front(10);
    // fl.push_front(20);
    // fl.push_front(30);
    // fl.push_front(40);

    // forward_list<int>::iterator it = fl.begin();
    
    // while(it != fl.end()){
    //     (*it) = (*it) +5; // will add 5 to each element
    //     it++;
    // }
    // cout<<endl;

    // it = fl.begin();
    // while(it != fl.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;
    
    //biderectional iterator
    list<int> l;

    // push back 
    l.push_front(20);
    l.push_front(10);
    //push front
    l.push_back(30);
    l.push_back(40);
    
    //forward traversing 
   list<int>::iterator it = l.begin();
   while(it != l.end()){
        cout<<*it<<" ";
        it++;
    }cout<<endl;

     //backward traversing 
   list<int>::iterator it1 = l.end();
   while(it1 != l.begin()){
       it1--;
        cout<<*it1<<" ";
    } cout<<endl;

    //random access iterator
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);


   


    return 0;
}