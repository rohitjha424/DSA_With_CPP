//Custom Sorting Example
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;


// creating priorty queue of Student class
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
        // max marks >> higest priority
       
        return a.marks <b.marks; // will keep min marks stduent on top
    }
};

int main(){

    // creating priorty queue of Student class

    priority_queue<Student,vector<Student>, comparator> pq;
    pq.push(Student(90,"Ruchika")); //90,"Ruchika
    pq.push(Student(85,"Naveen")); // 85,"Naveen">>90,"Ruchika, 
    pq.push(Student(95,"Kunal")); // 85,"Naveen">>90,"Ruchika, >> 95,"Kunal >> top element

    cout<<pq.top().marks <<" "<< pq.top().name <<endl; // will print the top element with lowest marks  




    // for(Student a : arr){
    //     cout<<a.marks<<" "<<a.name<<endl;
    // }cout <<endl;

    // //by default max heap >> top element always max
    // priority_queue<int> pq; 
    // priority_queue <int, vector<int>, less<int>> pq3; // this is also max heap >. less comparator for max heap

    // //min-heap >> top element always min
    // priority_queue <int, vector<int>, greater<int>> pq2; //>> greater comparator for min heap 







    return 0;
}
