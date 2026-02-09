//Custom Sorting Example
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(){

    //by default max heap >> top element always max
    priority_queue<int> pq; 
    priority_queue <int, vector<int>, less<int>> pq3; // this is also max heap >. less comparator for max heap

    //min-heap >> top element always min
    priority_queue <int, vector<int>, greater<int>> pq2; //>> greater comparator for min heap 

    



    return 0;
}
