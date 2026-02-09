//Custom Sorting Example
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Student{
    public:
    int marks;
    string name;
    Student(){

    }

    Student(int m, string n){
       this->marks = m;
       this->name = n;
    }
};

class comparator{
    public:
    bool operator()(Student a, Student b){
        // return a.marks <b.marks; // comapring based on mark, when a < b >> maintaining ascending order
        return a.marks >b.marks; // comapring based on mark, when a > b >> maintaining descending order
    }
};


int main(){


    vector<Student> arr;
    arr.push_back(Student(90,"Ruchika"));
    arr.push_back(Student(85,"Naveen"));
    arr.push_back(Student(95,"Kunal"));

     sort(arr.begin(), arr.end(), comparator());

     for(Student a : arr){
        cout<<a.marks<<" "<<a.name<<endl;
    }cout <<endl;

    return 0;
}