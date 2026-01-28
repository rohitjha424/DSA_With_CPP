// Learning About Queue in CPP
// It Follows First In First Out(FIFO)

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //Creation
    queue<int> q;

    //insertion
    q.push(10);  //10
    q.push(20);  //10,20
    q.push(30);  //10,20,30
    q.push(40);  //10,20,30,40

    cout<<"Queue Size is : "<<q.size()<<endl;  // will print Queue Size
    
    


    return 0;
}
    