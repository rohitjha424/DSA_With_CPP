// Learning About Vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creation
    vector<int> marks; 
    // creation with size
    // vector<int> miles[20]; // will create a vector names miles with size 20.

    // // creating vector with the initialization
    // vector<int> distances(15, 0); // will create vector named distances with size 15 and 0 in all indexes.

    // cout<<*(marks.begin())<<endl; // returns first element of vector 

    //to insert values in vector
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    //printing size
    cout<<"Size of the vector is : "<< marks.size()<<endl;



}
