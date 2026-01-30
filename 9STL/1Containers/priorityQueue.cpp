// Learning About Priority Queue in CPP

#include <iostream>
#include<queue>
using namespace std;

int main()
{

    //creation
    priority_queue<int> pq;
    //by default>> max-heap ->max value ->highest priority

    //insertion of values 
    pq.push(10);  //10
    pq.push(20);  //20,10 >> max element will be front
    pq.push(40);  //40,10,20 >> max element will be front 
    pq.push(30);  //40,30,20,10 >> max element will be front

    cout<<"Priorty Queue Size is : "<<pq.size()<<endl;  // will print Priority Queue Size

    //top element -> highest priority element >>>Max Value
    cout<<"The top element in pq is: "<<pq.top()<<endl; // will print 40 

    //deletion >> pop() will be operated on max element
    pq.pop(); // 40 will be deleted from the pq

    cout<<"The top element in pq is: "<<pq.top()<<endl; // will print 30

    //empty()
    if(pq.empty()==true){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }






    return 0;
}