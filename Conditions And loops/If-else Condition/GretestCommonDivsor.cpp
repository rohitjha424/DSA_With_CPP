// Find GCD of Given two Numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter two Numbers"<<endl;
    cin >> num1>>num2;

    int checkBig;
    if(num1>=num2){
        checkBig = num1;
    }
    else {
        checkBig =num2;
    }
    int gcd=0;

    for(int i=2 ; i<checkBig; i++){
        if((num1%i==0) && (num2%i==0)){
            if(i>gcd){
                gcd =i;
            }
        }
    }
    cout<<"GCD of given numbers is: "<<gcd;

   
    return 0;
}