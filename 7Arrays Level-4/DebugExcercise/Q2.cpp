#include<iostream>
using namespace std;

int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}
int main(){
    int n, sum=0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    int val;
    cin>>val;
    linearSearch(input, n, val);
 
    return 0;
}