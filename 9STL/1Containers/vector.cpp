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

    //Accessing Vector element by [index]
    cout<<"elemenet at index 2 is: "<<marks[2]<<endl; 
    //using at()
    cout<<"elemenet at index 2 is: "<<marks.at(2)<<endl; 
    
    //capacity
    cout<<"vector capacity is: "<<marks.capacity()<<endl; // returns Number of blocks allocated
    
    //if we add two more elements >>Vector Array capacity doubles from previsous capacity of 4
    marks.push_back(50);
    marks.push_back(60);
    cout<<"vector new capacity is: "<<marks.capacity()<<endl; 

      //printing New size
    cout<<"New Size of the vector is : "<< marks.size()<<endl; // number of elements inserted
    
    //reserve()
    // marks.reserve(10)// it will reseve minimum 10 blocks capacitu for the vector
    
    // max_size() //returns max size of the vector can be created by system
    cout<<"max size of the vector can be created is : "<< marks.max_size()<<endl;

    
    //delete all elements of the vector
    marks.clear();
    cout<<"New Size of the vector is : "<< marks.size()<<endl; //will return 0 as all elements removed



    
    
    
    
    // creation with size
    // vector<int> miles[20]; // will create a vector names miles with size 20.

    // // creating vector with the initialization
    // vector<int> distances(15, 0); // will create vector named distances with size 15 and 0 in all indexes.

    // cout<<*(marks.begin())<<endl; // returns first element of vector 

}
