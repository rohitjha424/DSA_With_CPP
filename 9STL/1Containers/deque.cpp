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

    return 0;
}