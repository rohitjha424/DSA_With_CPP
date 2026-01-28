// Learning About Stack in CPP
// It Follows Last In first Out(LIFO)

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    //creation
    stack<int> st;

    //insertion
    st.push(10);  //10
    st.push(20);  //10,20
    st.push(30);  //10,20,30
    st.push(40);  //10,20,30,40

    cout<<"Stack Size is : "<<st.size()<<endl;  // will print stack Size




    return 0;
}