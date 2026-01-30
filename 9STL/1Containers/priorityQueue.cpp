// Learning About Priority Queue in CPP

#include <iostream>
#include<queue>
using namespace std;

int main()
{

    //creation
    priority_queue<int> pq;

    //insertion of values 
    pq.push(10);  //10
    pq.push(20);  //10,20
    pq.push(30);  //10,20,30
    pq.push(40);  //10,20,30,40

    cout<<"Priorty Queue Size is : "<<pq.size()<<endl;  // will print Priority Queue Size



    return 0;
}