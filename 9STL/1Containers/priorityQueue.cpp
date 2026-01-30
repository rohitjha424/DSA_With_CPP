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
    pq.push(20);  //20,10
    pq.push(40);  //40,10,20
    pq.push(30);  //40,30,20,10

    cout<<"Priorty Queue Size is : "<<pq.size()<<endl;  // will print Priority Queue Size




    return 0;
}