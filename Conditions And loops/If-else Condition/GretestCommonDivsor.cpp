// Find GCD of Given two Numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two Numbers" << endl;
    cin >> num1 >> num2;

    // int checkBig;
    // if(num1>=num2){
    //     checkBig = num1;
    // }
    // else {
    //     checkBig =num2;
    // }
    // int gcd=0;

    // for(int i=2 ; i<checkBig; i++){
    //     if((num1%i==0) && (num2%i==0)){
    //         if(i>gcd){
    //             gcd =i;
    //         }
    //     }
    // }
    // cout<<"GCD of given numbers is: "<<gcd;



    // Using Equilids Method:

    // Handle negative numbers
    num1 = abs(num1);
    num2 = abs(num2);

    // Using Euclidean Method (Subtraction)
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else
        {
            num2 = num2 - num1;
        }
    }

    cout << "GCD of given numbers is: " << num1;
    return 0;
}