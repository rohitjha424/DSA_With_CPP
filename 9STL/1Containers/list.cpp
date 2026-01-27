// Learning About Lists in CPP

#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Creation Of List
    list<int> myList;

    //insertion
    //insertion from back:
    myList.push_back(10);   //10
    myList.push_back(20);   //10->20
    myList.push_back(30);   //10->20->30
    myList.push_back(40);   //10->20->30->40

    //insertion fron front:
    myList.push_front(4);   //4->10->20->30->40
    myList.push_front(3);   //3->4->10->20->30->40
    myList.push_front(2);   //2->3->4->10->20->30->40
    myList.push_front(1);   //1->2->3->4->10->20->30->40

    // *** deletion **
    //deletion from back
    myList.pop_back();       //1->2->3->4->10->20->30
    //deletion from front
    myList.pop_front();      //2->3->4->10->20->30











    return 0;
}