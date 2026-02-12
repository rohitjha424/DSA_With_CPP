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
    return a<b; // Ascending order  
}

bool myCompDec(int&a, int&b){
    return a>b;  // Descending order  
}

int main(){
     vector<int> arr = {5, 4, 2, 7, 9, 6};

    cout << "Before custom Sorting: " << endl;
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    //custom Asceniding Order comparator
    sort(arr.begin(), arr.end(), myComp);
    cout << "After custom Sorting in Ascending Order: " << endl;
    print(arr);

    //custom Desceniding Order comparator
    sort(arr.begin(), arr.end(), myCompDec);
    cout << "After custom Sorting in Descending Order: " << endl;
    print(arr);
    
    return 0;

}
