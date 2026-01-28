// Learning About deque in CPP
// we can have insertion and deletions operations on both front and back.

#include <iostream>
#include <deque>
using namespace std;

int main()
{

    //creation
    deque<int> dq;

    //insertion on back
    dq.push_back(10);   //10
    dq.push_back(20);   //10,20
    dq.push_back(30);   //10,20,30
    dq.push_back(40);   //10,20,30,40

    //insertion on front
    dq.push_front(1);   //1,10,20,30,40
    dq.push_front(2);   //2,1,10,20,30,40
    dq.push_front(3);   //3,2,1,10,20,30,40
    dq.push_front(4);   //4,3,2,1,10,20,30,40


    //deletion from back
    dq.pop_back();  //4,3,2,1,10,20,30

    //deletion on front
    dq.pop_front(); //3,2,1,10,20,30

    //size
    cout<<"deque Size is : "<<dq.size()<<endl;  // will print deqeue Size
    
    //back() and begin()
    cout<<"deque Size is : "<<(dq.back())<<endl;  // will print deqeue last element
    cout<<"deque Size is : "<<*(dq.begin())<<endl;  // will print deqeue front element
    
    //Accessing element in deque
    cout<<"elemet at index 1 of deque  is : "<<dq.at(1)<<endl;  
    cout<<"elemet at index 1 of deque  is : "<<dq[1]<<endl;  
    
    //clear()
    // dq.clear(); // it will clear the deque all elements.
    // cout<<"deque Size after clearing is : "<<dq.size()<<endl;  // will print deqeue Size as 0
    
     //empty()
    if(dq.empty()==true){
        cout<<"deque is empty"<<endl;
    }
    else{
        cout<<"deque is not empty"<<endl;
    }

    //traversing in deque
    deque<int>::iterator it = dq.begin();
    cout<<"deque elements are: ";
    while(it != dq.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;




    return 0;
}