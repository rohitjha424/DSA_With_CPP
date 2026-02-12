//Custom Comparator

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> &arr){
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


}

bool myComp(int&a, int&b){
    return a<b;
}

int main(){
     vector<int> arr = {5, 4, 2, 7, 9, 6};

    cout << "Before custom Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end(), myComp);
    print(arr);
    
    return 0;

}
