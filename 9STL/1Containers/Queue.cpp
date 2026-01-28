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
    
    //deletion
    q.pop(); //will delete the front element 10 : //20,30,40
    
    cout<<"Queue Size after popping is : "<<q.size()<<endl;  // will print 3

    //empty()
    if(q.empty()==true){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    //front() and back()
    cout<<"Queue front element is: "<<q.front()<<endl;
    cout<<"Queue back element is: "<<q.back()<< endl;


    //Swap()
    
    //queue first
    queue<int> first;
    first.push(1);
    first.push(2);
    first.push(3);
    first.push(4);
    
    cout<<"New Front of First before Swap is: "<<first.front()<<" New Back of queue frist before Swap: "<<first.back()<<endl;
    
    //queue second
    queue<int> second;
    second.push(10);
    second.push(20);
    second.push(30);
    second.push(40);
    
    first.swap(second);

    cout<<"New Front of First after Swap is: "<<first.front()<<" New Back of queue frist after Swap: "<<first.back()<<endl;

    
    


    return 0;
}
    