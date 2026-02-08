#include<iostream>
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

//functor 
class StudentComparator{
    public:
    bool operator()(Student a, Student b){
        return a.marks<b.marks; 
    }
};

int main(){

    Student s1;
    Student s2;

    s1.marks = 93;
    s1.name ="Naveen";

    s2.marks = 88;
    s2.name ="Ruchika";


    StudentComparator cmp;

    
    if(cmp(s1,s2)==true){
        cout<<"Naveen  marks less than Ruchika"<<endl;
    }
    else{
        cout<<"Naveen  marks more than Ruchika"<<endl;
    }

    return 0;
}