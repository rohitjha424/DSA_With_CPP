// Learning About Set in CPP
//stores unique elements only

#include <iostream>
#include<set>
using namespace std;

int main()
{
    //creation of set
    set<int> st;

    //insertion in set
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    // Traversing using iterator
    set<int>::iterator it = st.begin();
    cout<<endl<<"set elements are:"<<endl;
     while (it != st.end())
    { 
        cout << *it<<" "<<endl;  // will print in ordered set
        it++;
    }

     //size()
    cout<<"set Size is : "<<st.size()<<endl;  // will print set Size
    
     //clear()
    st.clear();
    cout<<"set Size is : "<<st.size()<<endl;  // will print set Size as 0
    
   
    

    return 0;
}