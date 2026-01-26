// Learning About Vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creation
    vector<int> marks; 
    
    //to insert values in vector
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    
    //printing size
    cout<<"Size of the vector is : "<< marks.size()<<endl;
    
    //removing an element form vector
    marks.pop_back(); // last element will be removed
    cout<<"Size of the vector after removing an element is : "<< marks.size()<<endl;

    //frront() and back() implementation
    cout<<marks.front()<<endl; // return the first element
    cout<<marks.back()<<endl;  // return the last element

    //empty()
    if(marks.empty()==true){
        cout<<"vector is Empty"<<endl;  // will return true if vector is empty
    }
    else{
        cout<<"vector is not empty"<<endl;
    }
    
    
    
    
    // creation with size
    // vector<int> miles[20]; // will create a vector names miles with size 20.

    // // creating vector with the initialization
    // vector<int> distances(15, 0); // will create vector named distances with size 15 and 0 in all indexes.

    // cout<<*(marks.begin())<<endl; // returns first element of vector 

}
